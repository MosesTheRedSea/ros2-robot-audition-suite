
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

)

# waypoint manager node

add_executable(waypoint_manager_node src/waypoint_manager_node.cpp)

ament_target_dependencies(waypoint_manager_node ${dependencies})

# collection node

add_executable(collection_node src/collection_node.cpp)

ament_target_dependencies(collection_node ${dependencies})

# intervention server node

add_executable(intervention_server_node src/intervention_server_node.cpp)

ament_target_dependencies(intervention_server_node ${dependencies})

# recorder node

add_executable(recorder_node src/recorder_node.cpp)

ament_target_dependencies(recorder_node ${dependencies})

# marker navigator node

add_executable(marker_navigator_node src/marker_navigator_node.cpp)

ament_target_dependencies(marker_navigator_node ${dependencies})

install(TARGETS

  waypoint_manager_node

  collection_node

  intervention_server_node

  recorder_node

  marker_navigator_node

  DESTINATION lib/${PROJECT_NAME})

install(DIRECTORY launch config

  DESTINATION share/${PROJECT_NAME})

ament_package()

