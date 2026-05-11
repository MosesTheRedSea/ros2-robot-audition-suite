
#include "rclcpp/rclcpp.hpp"
#include "audition_msgs/srv/proceed_to_next.hpp"
#include "audition_msgs/srv/abort_session.hpp"
#include "std_msgs/msg/bool.hpp"
#include "std_msgs/msg/string.hpp"


class Intervention : public rclcpp::Node 
{
  
  public:
    Intervention() : Node("intervention_server_node")
    {
      
      proceed_pub = create_publisher<std_msgs::msg::Bool>("/proceed_command", 10);

      proceed_server = create_service<audition_msgs::srv::ProceedToNext>("/proceed_to_next", std::bind(&Intervention::handleProceed, this, std::placeholders::_1, std::placeholders::_2));
      
      abort_server = create_service<audition_msgs::srv::AbortSession>(
          "/abort_session",
          std::bind(&Intervention::handleAbort, this,
                    std::placeholders::_1, std::placeholders::_2));
      
      RCLCPP_INFO(get_logger(), "Intervention Server Online — waiting for operator commands");
      
    }

  private:
    void handleProceed(
      const std::shared_ptr<audition_msgs::srv::ProceedToNext::Request> request,
      std::shared_ptr<audition_msgs::srv::ProceedToNext::Response> response)
  {
    if (request->proceed) {
      auto message = std_msgs::msg::Bool();
      message.data = true;
      proceed_pub->publish(message);

      RCLCPP_INFO(get_logger(), "Proceeding - note: %s",
                  request->operator_note.c_str());

      response->accepted = true;
      response->next_waypoint_label = "pending";
    } else {
      RCLCPP_WARN(get_logger(), "Proceed called with false — ignoring");
      response->accepted = false;
    }
  }

  void handleAbort(
      const std::shared_ptr<audition_msgs::srv::AbortSession::Request> request,
      std::shared_ptr<audition_msgs::srv::AbortSession::Response> response)
  {
    auto message = std_msgs::msg::Bool();
    message.data = false;

    proceed_pub->publish(message);

    RCLCPP_WARN(get_logger(), "Session aborted — reason: %s",
                request->reason.c_str());

    response->accepted = true;
    response->message = "Session aborted successfully";
  }

  rclcpp::Publisher<std_msgs::msg::Bool>::SharedPtr proceed_pub;
  rclcpp::Service<audition_msgs::srv::ProceedToNext>::SharedPtr proceed_server;
  rclcpp::Service<audition_msgs::srv::AbortSession>::SharedPtr abort_server;

};


int main(int argc, char * argv[])
{
  rclcpp::init(argc, argv);

  auto node = std::make_shared<Intervention>();
  RCLCPP_INFO(node->get_logger(), "Ready — call /proceed_to_next or /abort_session from terminal");

  rclcpp::spin(node);
  rclcpp::shutdown();

  return 0;

}

/*
ros2 service call /proceed_to_next audition_msgs/srv/ProceedToNext \
  "{proceed: true, operator_note: 'test'}"
*/

/* 
 ros2 service call /abort_session audition_msgs/srv/AbortSession \
  "{reason: 'testing abort'}"
*/
