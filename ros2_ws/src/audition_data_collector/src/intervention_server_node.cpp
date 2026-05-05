
#include "rclcpp/rclcpp.hpp"
#include "audition_msgs/srv/proceed_to_next.hpp"
#include "audition_msgs/srv/abort_session.hpp"
#include "std_msgs/msg/bool.hpp"
#include "std_msgs/msg/string.hpp"


int main(int argc, char * argv[])

{

  rclcpp::init(argc, argv);

  auto node = std::make_shared<rclcpp::Node>("intervention_server_node");

  RCLCPP_INFO(node->get_logger(), "Intervention server started");

  rclcpp::spin(node);

  rclcpp::shutdown();

  return 0;

}

