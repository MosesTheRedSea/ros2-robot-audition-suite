// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from audition_msgs:msg/CollectionStatus.idl
// generated code does not contain a copyright notice

#ifndef AUDITION_MSGS__MSG__DETAIL__COLLECTION_STATUS__BUILDER_HPP_
#define AUDITION_MSGS__MSG__DETAIL__COLLECTION_STATUS__BUILDER_HPP_

#include "audition_msgs/msg/detail/collection_status__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace audition_msgs
{

namespace msg
{

namespace builder
{

class Init_CollectionStatus_completed_waypoints
{
public:
  explicit Init_CollectionStatus_completed_waypoints(::audition_msgs::msg::CollectionStatus & msg)
  : msg_(msg)
  {}
  ::audition_msgs::msg::CollectionStatus completed_waypoints(::audition_msgs::msg::CollectionStatus::_completed_waypoints_type arg)
  {
    msg_.completed_waypoints = std::move(arg);
    return std::move(msg_);
  }

private:
  ::audition_msgs::msg::CollectionStatus msg_;
};

class Init_CollectionStatus_total_waypoints
{
public:
  explicit Init_CollectionStatus_total_waypoints(::audition_msgs::msg::CollectionStatus & msg)
  : msg_(msg)
  {}
  Init_CollectionStatus_completed_waypoints total_waypoints(::audition_msgs::msg::CollectionStatus::_total_waypoints_type arg)
  {
    msg_.total_waypoints = std::move(arg);
    return Init_CollectionStatus_completed_waypoints(msg_);
  }

private:
  ::audition_msgs::msg::CollectionStatus msg_;
};

class Init_CollectionStatus_recording
{
public:
  explicit Init_CollectionStatus_recording(::audition_msgs::msg::CollectionStatus & msg)
  : msg_(msg)
  {}
  Init_CollectionStatus_total_waypoints recording(::audition_msgs::msg::CollectionStatus::_recording_type arg)
  {
    msg_.recording = std::move(arg);
    return Init_CollectionStatus_total_waypoints(msg_);
  }

private:
  ::audition_msgs::msg::CollectionStatus msg_;
};

class Init_CollectionStatus_state
{
public:
  explicit Init_CollectionStatus_state(::audition_msgs::msg::CollectionStatus & msg)
  : msg_(msg)
  {}
  Init_CollectionStatus_recording state(::audition_msgs::msg::CollectionStatus::_state_type arg)
  {
    msg_.state = std::move(arg);
    return Init_CollectionStatus_recording(msg_);
  }

private:
  ::audition_msgs::msg::CollectionStatus msg_;
};

class Init_CollectionStatus_current_waypoint_label
{
public:
  explicit Init_CollectionStatus_current_waypoint_label(::audition_msgs::msg::CollectionStatus & msg)
  : msg_(msg)
  {}
  Init_CollectionStatus_state current_waypoint_label(::audition_msgs::msg::CollectionStatus::_current_waypoint_label_type arg)
  {
    msg_.current_waypoint_label = std::move(arg);
    return Init_CollectionStatus_state(msg_);
  }

private:
  ::audition_msgs::msg::CollectionStatus msg_;
};

class Init_CollectionStatus_current_waypoint_id
{
public:
  explicit Init_CollectionStatus_current_waypoint_id(::audition_msgs::msg::CollectionStatus & msg)
  : msg_(msg)
  {}
  Init_CollectionStatus_current_waypoint_label current_waypoint_id(::audition_msgs::msg::CollectionStatus::_current_waypoint_id_type arg)
  {
    msg_.current_waypoint_id = std::move(arg);
    return Init_CollectionStatus_current_waypoint_label(msg_);
  }

private:
  ::audition_msgs::msg::CollectionStatus msg_;
};

class Init_CollectionStatus_header
{
public:
  Init_CollectionStatus_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CollectionStatus_current_waypoint_id header(::audition_msgs::msg::CollectionStatus::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_CollectionStatus_current_waypoint_id(msg_);
  }

private:
  ::audition_msgs::msg::CollectionStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::audition_msgs::msg::CollectionStatus>()
{
  return audition_msgs::msg::builder::Init_CollectionStatus_header();
}

}  // namespace audition_msgs

#endif  // AUDITION_MSGS__MSG__DETAIL__COLLECTION_STATUS__BUILDER_HPP_
