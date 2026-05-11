
#include "rclcpp/rclcpp.hpp"
#include "geometry_msgs/msg/twist.hpp"

class CmdVelRelay : public rclcpp::Node
{
public:
  CmdVelRelay() : Node("cmd_vel_relay")
  {
    sub_ = this->create_subscription<geometry_msgs::msg::Twist>(
      "/cmd_vel", 10,
      [this](const geometry_msgs::msg::Twist & msg) {
        RCLCPP_INFO(this->get_logger(),
          "/cmd_vel received — linear.x: %.3f  angular.z: %.3f",
          msg.linear.x, msg.angular.z);

        // Convert to left/right wheel speeds for reference
        double wheel_base = 0.3;
        double left  = msg.linear.x - (msg.angular.z * wheel_base / 2.0);
        double right = msg.linear.x + (msg.angular.z * wheel_base / 2.0);

        RCLCPP_INFO(this->get_logger(),
          "  → left wheel: %.3f m/s   right wheel: %.3f m/s", left, right);
      });

    RCLCPP_INFO(this->get_logger(),
      "cmd_vel_relay ready — watching /cmd_vel");
    RCLCPP_INFO(this->get_logger(),
      "NOTE: On the real robot, ros2_control handles this automatically");
  }

private:
  rclcpp::Subscription<geometry_msgs::msg::Twist>::SharedPtr sub_;
};

int main(int argc, char * argv[])
{
  rclcpp::init(argc, argv);
  rclcpp::spin(std::make_shared<CmdVelRelay>());
  rclcpp::shutdown();
  return 0;
}
