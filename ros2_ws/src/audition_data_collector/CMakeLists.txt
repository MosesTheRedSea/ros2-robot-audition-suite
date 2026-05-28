
cmake_minimum_required(VERSION 3.8)
project(audition_data_collector)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)
find_package(rclcpp_action REQUIRED)
find_package(std_msgs REQUIRED)
find_package(geometry_msgs REQUIRED)
find_package(audio_common_msgs REQUIRED)
message(STATUS "audio_common_msgs include dirs: ${audio_common_msgs_INCLUDE_DIRS}")
find_package(rosbag2_cpp REQUIRED)
find_package(rosbag2_storage REQUIRED)
find_package(sensor_msgs REQUIRED)
find_package(nav_msgs REQUIRED)
find_package(nav2_msgs REQUIRED)
find_package(tf2 REQUIRED)
find_package(tf2_ros REQUIRED)
find_package(audition_msgs REQUIRED)

set(dependencies
  rclcpp
  rclcpp_action
  std_msgs
  geometry_msgs
  sensor_msgs
  nav_msgs
  nav2_msgs
  tf2
  tf2_ros
  audition_msgs
  audio_common_msgs
  rosbag2_cpp
  rosbag2_storage
)

add_executable(waypoint src/waypoint.cpp)
ament_target_dependencies(waypoint ${dependencies})


add_executable(collector src/collector.cpp)
ament_target_dependencies(collector ${dependencies})

add_executable(handler src/handler.cpp)
ament_target_dependencies(handler ${dependencies})


add_executable(recorder src/recorder.cpp)
ament_target_dependencies(recorder ${dependencies})

target_include_directories(recorder PUBLIC
  ~/Moses/Robotics/ROS-Projects/audition-data-collection/ros2-robot-audition-suite/ros2_ws/install/audio_common_msgs/include/audio_common_msgs
)

install(PROGRAMS
  scripts/acoustic_recorder.py
  DESTINATION lib/${PROJECT_NAME}
)

include_directories(
  ${audio_common_msgs_INCLUDE_DIRS}
)

install(TARGETS

  waypoint

  collector

  handler

  recorder

  DESTINATION lib/${PROJECT_NAME})

install(DIRECTORY launch config

  DESTINATION share/${PROJECT_NAME})

ament_package()

