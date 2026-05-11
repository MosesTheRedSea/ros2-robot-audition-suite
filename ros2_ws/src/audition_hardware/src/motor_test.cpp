#include "rclcpp/rclcpp.hpp"
#include "geometry_msgs/msg/twist.hpp"
#include <chrono>
#include <thread>
#include <cmath>

class MotorTest : public rclcpp::Node
{
public:
  MotorTest() : Node("motor_test")
  {
    // Tune these without recompiling:
    // ros2 run audition_hardware motor_test --ros-args -p linear_speed:=0.15
    this->declare_parameter("linear_speed",  0.2);  // m/s  — start slow
    this->declare_parameter("angular_speed", 0.5);  // rad/s

    linear_speed_  = this->get_parameter("linear_speed").as_double();
    angular_speed_ = this->get_parameter("angular_speed").as_double();

    pub_ = this->create_publisher<geometry_msgs::msg::Twist>("/cmd_vel", 10);

    RCLCPP_INFO(this->get_logger(), "=================================");
    RCLCPP_INFO(this->get_logger(), "Motor test node started");
    RCLCPP_INFO(this->get_logger(), "linear_speed:  %.2f m/s", linear_speed_);
    RCLCPP_INFO(this->get_logger(), "angular_speed: %.2f rad/s", angular_speed_);
    RCLCPP_INFO(this->get_logger(), "Starting in 3 seconds — CLEAR THE AREA");
    RCLCPP_INFO(this->get_logger(), "=================================");

    std::this_thread::sleep_for(std::chrono::seconds(3));
    run_test();
  }

private:
  double linear_speed_;
  double angular_speed_;
  rclcpp::Publisher<geometry_msgs::msg::Twist>::SharedPtr pub_;

  // Publish a Twist for a fixed duration then stop
  void move(double linear, double angular, double seconds, const std::string & label)
  {
    RCLCPP_INFO(this->get_logger(), ">> %s (%.1fs)", label.c_str(), seconds);

    auto msg = geometry_msgs::msg::Twist();
    msg.linear.x  = linear;
    msg.angular.z = angular;

    auto end = this->now() + rclcpp::Duration::from_seconds(seconds);
    rclcpp::Rate rate(20);

    while (this->now() < end && rclcpp::ok()) {
      pub_->publish(msg);
      rate.sleep();
    }

    stop();
    std::this_thread::sleep_for(std::chrono::milliseconds(800));
  }

  void stop()
  {
    auto msg = geometry_msgs::msg::Twist();  // all zeros = stop
    for (int i = 0; i < 5; i++) {           // publish a few times to be sure
      pub_->publish(msg);
      std::this_thread::sleep_for(std::chrono::milliseconds(50));
    }
    RCLCPP_INFO(this->get_logger(), "   stopped");
  }

  void run_test()
  {
    // ── Test 1: Forward ───────────────────────────────────────
    // 0.2 m/s × 3s ≈ 0.6 meters forward
    move(linear_speed_, 0.0, 3.0, "TEST 1: Moving forward");

    // ── Test 2: Turn left 90 degrees ─────────────────────────
    // time = (π/2) / angular_speed
    double t90 = (M_PI / 2.0) / angular_speed_;
    move(0.0, angular_speed_, t90, "TEST 2: Turning left 90 degrees");

    // ── Test 3: Turn right 90 degrees ────────────────────────
    // negative angular = right
    move(0.0, -angular_speed_, t90, "TEST 3: Turning right 90 degrees");

    // ── Test 4: Full 360 spin ─────────────────────────────────
    // time = (2π) / angular_speed
    double t360 = (2.0 * M_PI) / angular_speed_;
    move(0.0, angular_speed_, t360, "TEST 4: Full 360 spin");

    // ── Test 5: Backward ──────────────────────────────────────
    move(-linear_speed_, 0.0, 3.0, "TEST 5: Moving backward");

    // ── Done ──────────────────────────────────────────────────
    RCLCPP_INFO(this->get_logger(), "=================================");
    RCLCPP_INFO(this->get_logger(), "All tests complete — robot stopped");
    RCLCPP_INFO(this->get_logger(), "=================================");
    rclcpp::shutdown();
  }
};

int main(int argc, char * argv[])
{
  rclcpp::init(argc, argv);
  rclcpp::spin(std::make_shared<MotorTest>());
  rclcpp::shutdown();
  return 0;
}
