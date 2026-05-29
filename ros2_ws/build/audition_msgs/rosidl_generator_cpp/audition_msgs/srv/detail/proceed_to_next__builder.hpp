// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from audition_msgs:srv/ProceedToNext.idl
// generated code does not contain a copyright notice

#ifndef AUDITION_MSGS__SRV__DETAIL__PROCEED_TO_NEXT__BUILDER_HPP_
#define AUDITION_MSGS__SRV__DETAIL__PROCEED_TO_NEXT__BUILDER_HPP_

#include "audition_msgs/srv/detail/proceed_to_next__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace audition_msgs
{

namespace srv
{

namespace builder
{

class Init_ProceedToNext_Request_operator_note
{
public:
  explicit Init_ProceedToNext_Request_operator_note(::audition_msgs::srv::ProceedToNext_Request & msg)
  : msg_(msg)
  {}
  ::audition_msgs::srv::ProceedToNext_Request operator_note(::audition_msgs::srv::ProceedToNext_Request::_operator_note_type arg)
  {
    msg_.operator_note = std::move(arg);
    return std::move(msg_);
  }

private:
  ::audition_msgs::srv::ProceedToNext_Request msg_;
};

class Init_ProceedToNext_Request_proceed
{
public:
  Init_ProceedToNext_Request_proceed()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ProceedToNext_Request_operator_note proceed(::audition_msgs::srv::ProceedToNext_Request::_proceed_type arg)
  {
    msg_.proceed = std::move(arg);
    return Init_ProceedToNext_Request_operator_note(msg_);
  }

private:
  ::audition_msgs::srv::ProceedToNext_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::audition_msgs::srv::ProceedToNext_Request>()
{
  return audition_msgs::srv::builder::Init_ProceedToNext_Request_proceed();
}

}  // namespace audition_msgs


namespace audition_msgs
{

namespace srv
{

namespace builder
{

class Init_ProceedToNext_Response_next_waypoint_label
{
public:
  explicit Init_ProceedToNext_Response_next_waypoint_label(::audition_msgs::srv::ProceedToNext_Response & msg)
  : msg_(msg)
  {}
  ::audition_msgs::srv::ProceedToNext_Response next_waypoint_label(::audition_msgs::srv::ProceedToNext_Response::_next_waypoint_label_type arg)
  {
    msg_.next_waypoint_label = std::move(arg);
    return std::move(msg_);
  }

private:
  ::audition_msgs::srv::ProceedToNext_Response msg_;
};

class Init_ProceedToNext_Response_accepted
{
public:
  Init_ProceedToNext_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ProceedToNext_Response_next_waypoint_label accepted(::audition_msgs::srv::ProceedToNext_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_ProceedToNext_Response_next_waypoint_label(msg_);
  }

private:
  ::audition_msgs::srv::ProceedToNext_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::audition_msgs::srv::ProceedToNext_Response>()
{
  return audition_msgs::srv::builder::Init_ProceedToNext_Response_accepted();
}

}  // namespace audition_msgs

#endif  // AUDITION_MSGS__SRV__DETAIL__PROCEED_TO_NEXT__BUILDER_HPP_
