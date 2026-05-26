cmake_minimum_required(VERSION 3.8)
project(audition_hardware)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# find dependencies
find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)
find_package(geometry_msgs REQUIRED)
find_package(nav_msgs REQUIRED)
find_package(tf2 REQUIRED)
find_package(tf2_ros REQUIRED)


add_executable(motor_test src/motor_test.cpp)
ament_target_dependencies(motor_test rclcpp geometry_msgs)

add_executable(hardware_bridge src/hardware_bridge.cpp)
ament_target_dependencies(hardware_bridge rclcpp geometry_msgs)


ament_target_dependencies(
  hardware_bridge
  rclcpp
  geometry_msgs
)

install(
  TARGETS hardware_bridge
  DESTINATION lib/${PROJECT_NAME}
)

install(TARGETS
  motor_test
  hardware_bridge
  DESTINATION lib/${PROJECT_NAME}
)

install(DIRECTORY launch/
  DESTINATION share/${PROJECT_NAME}/launch
)

if(BUILD_TESTING)
  find_package(ament_lint_auto REQUIRED)
  set(ament_cmake_copyright_FOUND TRUE)
  set(ament_cmake_cpplint_FOUND TRUE)
  ament_lint_auto_find_test_dependencies()
endif()

ament_package()
