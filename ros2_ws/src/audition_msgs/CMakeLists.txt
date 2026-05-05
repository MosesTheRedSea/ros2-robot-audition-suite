cmake_minimum_required(VERSION 3.8)
project(audition_msgs)

find_package(ament_cmake REQUIRED)
find_package(rosidl_default_generators REQUIRED)
find_package(std_msgs REQUIRED)
find_package(action_msgs REQUIRED)

rosidl_generate_interfaces(${PROJECT_NAME}
  "msg/CollectionStatus.msg"
  "srv/ProceedToNext.srv"
  "srv/AbortSession.srv"
  "action/CollectAtWaypoint.action"
  DEPENDENCIES std_msgs action_msgs
)

ament_package()
