#include "rclcpp/rclcpp.hpp"

int main(int argc, char * argv[])
{
  rclcpp::init(argc, argv);
  auto node = std::make_shared<rclcpp::Node>("marker_navigator_node");
  RCLCPP_INFO(node->get_logger(), "Marker navigator started");
  rclcpp::spin(node);
  rclcpp::shutdown();
  return 0;
}
