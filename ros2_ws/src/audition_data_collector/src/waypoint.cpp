#include "rclcpp/rclcpp.hpp"
#include "rclcpp_action/rclcpp_action.hpp"
#include "nav2_msgs/action/navigate_to_pose.hpp"
#include "geometry_msgs/msg/pose_stamped.hpp"
#include "std_msgs/msg/bool.hpp"
#include "audition_msgs/msg/collection_status.hpp"
#include <vector>
#include <string>
#include <thread>

using NavigateToPose = nav2_msgs::action::NavigateToPose;
using GoalHandleNav = rclcpp_action::ClientGoalHandle<NavigateToPose>;

struct Waypoint {
  int id;
  std::string label;
  double x;
  double y;
  double yaw;
};


class Waypoint_Navigation : public rclcpp::Node
{
public:

  Waypoint_Navigation() : Node("waypoint"), current_index(0), waiting(false)
  {
    
    // I created parameters for the waypoint node
    declare_parameter("waypoints.labels", std::vector<std::string>{});
    declare_parameter("waypoints.x", std::vector<double>{});
    declare_parameter("waypoints.y", std::vector<double>{});
    declare_parameter("waypoints.yaw", std::vector<double>{});
  
    waypoint_pub = create_publisher<audition_msgs::msg::CollectionStatus>("/current_waypoint", 10);
    proceed_sub = create_subscription<std_msgs::msg::Bool>("/proceed_command", 10, std::bind(&Waypoint_Navigation::proceedCallback, this, std::placeholders::_1));
    nav_client = rclcpp_action::create_client<NavigateToPose>(this, "navigate_to_pose");

    loadWaypoints();

    RCLCPP_INFO(get_logger(), "Waypoint manager ready — %zu waypoints loaded",
                waypoints.size());

    std::thread([this]() {
      RCLCPP_INFO(get_logger(), "Waiting for Nav2 action server...");
      if (!nav_client->wait_for_action_server(std::chrono::seconds(30))) {
        RCLCPP_ERROR(get_logger(), "Nav2 action server not available after 30s — aborting");
        return;
      }
      RCLCPP_INFO(get_logger(), "Nav2 connected — starting session");
      sendNextGoal();
    }).detach();
  }



private:
  enum class State { NAVIGATING, WAITING, DONE };
  State state = State::NAVIGATING;

  std::vector<Waypoint> waypoints;
  size_t current_index;
  bool waiting;

  rclcpp_action::Client<NavigateToPose>::SharedPtr nav_client;
  rclcpp::Publisher<audition_msgs::msg::CollectionStatus>::SharedPtr waypoint_pub;
  rclcpp::Subscription<std_msgs::msg::Bool>::SharedPtr proceed_sub;

  void loadWaypoints()
  {
    auto labels = get_parameter("waypoints.labels").as_string_array();
    auto xs     = get_parameter("waypoints.x").as_double_array();
    auto ys     = get_parameter("waypoints.y").as_double_array();
    auto yaws   = get_parameter("waypoints.yaw").as_double_array();

    for (size_t i = 0; i < labels.size(); i++) {
      Waypoint wp;
      wp.id    = static_cast<int>(i + 1);
      wp.label = labels[i];
      wp.x     = xs[i];
      wp.y     = ys[i];
      wp.yaw   = yaws[i];
      waypoints.push_back(wp);

      RCLCPP_INFO(get_logger(), "Loaded waypoint [%d] — %s (%.2f, %.2f)",
                  wp.id, wp.label.c_str(), wp.x, wp.y);
    }
  }

  void sendNextGoal()
  {
    if (current_index >= waypoints.size()) {
      RCLCPP_INFO(get_logger(), "All %zu waypoints complete — session finished",
                  waypoints.size());
      state = State::DONE;
      return;

      // RCLCP Log that robot is being sent to next waypoint
    }

    auto & wp = waypoints[current_index];

    RCLCPP_INFO(get_logger(), "Navigating to waypoint [%d/%zu] — %s (%.2f, %.2f)",
                wp.id, waypoints.size(), wp.label.c_str(), wp.x, wp.y);


    auto goal = NavigateToPose::Goal();

    goal.pose.header.frame_id = "map";
    goal.pose.header.stamp = this->now();

    goal.pose.pose.position.x = wp.x;
    goal.pose.pose.position.y = wp.y;

    goal.pose.pose.position.z = 0.0;
    goal.pose.pose.orientation.x = 0.0;
    goal.pose.pose.orientation.y = 0.0;

    goal.pose.pose.orientation.z = std::sin(wp.yaw / 2.0);
    goal.pose.pose.orientation.w = std::cos(wp.yaw / 2.0);

    auto send_goal_options = rclcpp_action::Client<NavigateToPose>::SendGoalOptions();

    send_goal_options.goal_response_callback =
      [this](const GoalHandleNav::SharedPtr & goal_handle) {
        if (!goal_handle) {
          RCLCPP_ERROR(get_logger(), "Goal rejected by Nav2");
        } else {
          RCLCPP_INFO(get_logger(), "Goal accepted by Nav2 — robot moving");
          state = State::NAVIGATING;
        }
      };

    send_goal_options.feedback_callback =
      [this](GoalHandleNav::SharedPtr,
             const std::shared_ptr<const NavigateToPose::Feedback> feedback) {
        RCLCPP_INFO(get_logger(), "Distance remaining: %.2f m",
                    feedback->distance_remaining);
      };

    send_goal_options.result_callback =
      [this](const GoalHandleNav::WrappedResult & result) {
        if (result.code == rclcpp_action::ResultCode::SUCCEEDED) {
          RCLCPP_INFO(get_logger(), "Arrived at waypoint [%s] — waiting for proceed signal",
                      waypoints[current_index].label.c_str());
          publishCurrentWaypoint();
          state = State::WAITING;
          waiting = true;
        } else if (result.code == rclcpp_action::ResultCode::ABORTED) {
          RCLCPP_ERROR(get_logger(), "Navigation aborted — skipping to next waypoint");
          current_index++;
          sendNextGoal();
        } else if (result.code == rclcpp_action::ResultCode::CANCELED) {
          RCLCPP_WARN(get_logger(), "Navigation canceled");
        }
      };

    nav_client->async_send_goal(goal, send_goal_options);
  }

  void proceedCallback(const std_msgs::msg::Bool::ConstSharedPtr msg)
  {
    if (msg->data && waiting && state == State::WAITING) {
      RCLCPP_INFO(get_logger(), "Proceed received — moving to next waypoint");
      waiting = false;
      current_index++;
      sendNextGoal();
    } else if (!msg->data) {
      RCLCPP_WARN(get_logger(), "Abort signal received — stopping session");
      state = State::DONE;
    }
  }

  void publishCurrentWaypoint()
  {
    auto & wp = waypoints[current_index];
    auto status = audition_msgs::msg::CollectionStatus();
    status.current_waypoint_id    = wp.id;
    status.current_waypoint_label = wp.label;
    status.state                  = "ARRIVED";
    status.total_waypoints        = static_cast<int>(waypoints.size());
    status.completed_waypoints    = static_cast<int>(current_index);
    status.recording              = false;
    waypoint_pub->publish(status);
  }
};

int main(int argc, char * argv[])
{
  rclcpp::init(argc, argv);
  rclcpp::spin(std::make_shared<Waypoint_Navigation>());
  rclcpp::shutdown();
  return 0;
}

