#include <memory>
#include "rclcpp/rclcpp.hpp"
#include "geometry_msgs/msg/twist.hpp"

class HardwareBridge : public rclcpp::Node
{
public:
    HardwareBridge()
    : Node("hardware_bridge")
    {
        subscription_ = this->create_subscription<geometry_msgs::msg::Twist>(
            "/cmd_vel",
            10,
            std::bind(&HardwareBridge::cmdVelCallback,
                      this,
                      std::placeholders::_1));

        RCLCPP_INFO(this->get_logger(),
                    "Hardware bridge started");
    }


private:
    void cmdVelCallback(const geometry_msgs::msg::Twist::ConstSharedPtr msg)
    {
        double linear = msg->linear.x;
        double angular = msg->angular.z;

        RCLCPP_INFO(this->get_logger(),
                    "Linear: %.2f Angular: %.2f",
                    linear,
                    angular);

        // send serial to ESP32
    }

    rclcpp::Subscription<geometry_msgs::msg::Twist>::SharedPtr subscription_;
};

int main(int argc, char * argv[])
{
    rclcpp::init(argc, argv);

    rclcpp::spin(std::make_shared<HardwareBridge>());

    rclcpp::shutdown();

    return 0;
}
