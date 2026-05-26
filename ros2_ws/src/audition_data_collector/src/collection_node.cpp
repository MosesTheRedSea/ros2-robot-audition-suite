#include "rclcpp/rclcpp.hpp"
#include "std_msgs/msg/bool.hpp"
#include "audition_msgs/msg/collection_status.hpp"

class CollectionNode : public rclcpp::Node
{
public:
  CollectionNode() : Node("collection_node"), state(State::IDLE)
  {

    // here is a publisher that lets us know when to publish
    record_trigger_pub = create_publisher<std_msgs::msg::Bool>("/record_trigger", 10);
    status_pub = create_publisher<audition_msgs::msg::CollectionStatus>("/collection_status", 10);

    proceed_pub = create_publisher<std_msgs::msg::Bool>("/proceed_command", 10);
    waypoint_sub = create_subscription<audition_msgs::msg::CollectionStatus>("/current_waypoint", 10, std::bind(&CollectionNode::waypointCallback, this, std::placeholders::_1));

    proceed_sub = create_subscription<std_msgs::msg::Bool>("/proceed_command", 10, std::bind(&CollectionNode::proceedCallback, this, std::placeholders::_1));

    RCLCPP_INFO(get_logger(), "Collection node ready — waiting for waypoint arrival");
  }

private:

  enum class State { IDLE, RECORDING };

  State state;
  audition_msgs::msg::CollectionStatus::ConstSharedPtr current_waypoint;


  // These are publisher I made for recording, current_status and whether we should proceed to the next occlusion
  rclcpp::Publisher<std_msgs::msg::Bool>::SharedPtr record_trigger_pub;
  rclcpp::Publisher<audition_msgs::msg::CollectionStatus>::SharedPtr status_pub;
  rclcpp::Publisher<std_msgs::msg::Bool>::SharedPtr proceed_pub;
  rclcpp::Subscription<audition_msgs::msg::CollectionStatus>::SharedPtr waypoint_sub;
  rclcpp::Subscription<std_msgs::msg::Bool>::SharedPtr proceed_sub;


  void waypointCallback(const audition_msgs::msg::CollectionStatus::ConstSharedPtr msg)
  {
    if (state != State::IDLE) {
      RCLCPP_WARN(get_logger(), "Waypoint arrived but not in IDLE state — ignoring");
      return;
    }

    current_waypoint = msg;
    state = State::RECORDING;

    RCLCPP_INFO(get_logger(), "Arrived at waypoint [%s] — starting recording",
                msg->current_waypoint_label.c_str());

    auto trigger = std_msgs::msg::Bool();
    trigger.data = true;
    record_trigger_pub->publish(trigger);

    publishStatus();
  }

  // 
  void proceedCallback(const std_msgs::msg::Bool::ConstSharedPtr msg)
  {
    // If we're not 
    if (!msg->data || state != State::RECORDING) {
      return;
    }

    RCLCPP_INFO(get_logger(), "Proceed received — stopping recording and moving on");

    auto trigger = std_msgs::msg::Bool();
    trigger.data = false;
    record_trigger_pub->publish(trigger);

    state = State::IDLE;
    publishStatus();
  }

  // lets us know what the robot is currently doing
  void publishStatus()
  {
    auto status = audition_msgs::msg::CollectionStatus();
    status.state = (state == State::RECORDING) ? "RECORDING" : "IDLE";
    status.recording = (state == State::RECORDING);
    if (current_waypoint) {
      status.current_waypoint_id = current_waypoint->current_waypoint_id;
      status.current_waypoint_label = current_waypoint->current_waypoint_label;
    }
    status_pub->publish(status);
  }
};

int main(int argc, char * argv[])
{
  rclcpp::init(argc, argv);
  rclcpp::spin(std::make_shared<CollectionNode>());
  rclcpp::shutdown();
  return 0;
}
