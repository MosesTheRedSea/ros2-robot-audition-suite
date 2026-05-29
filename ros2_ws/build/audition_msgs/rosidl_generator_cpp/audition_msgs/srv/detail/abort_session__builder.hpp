// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from audition_msgs:srv/AbortSession.idl
// generated code does not contain a copyright notice

#ifndef AUDITION_MSGS__SRV__DETAIL__ABORT_SESSION__BUILDER_HPP_
#define AUDITION_MSGS__SRV__DETAIL__ABORT_SESSION__BUILDER_HPP_

#include "audition_msgs/srv/detail/abort_session__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace audition_msgs
{

namespace srv
{

namespace builder
{

class Init_AbortSession_Request_reason
{
public:
  Init_AbortSession_Request_reason()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::audition_msgs::srv::AbortSession_Request reason(::audition_msgs::srv::AbortSession_Request::_reason_type arg)
  {
    msg_.reason = std::move(arg);
    return std::move(msg_);
  }

private:
  ::audition_msgs::srv::AbortSession_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::audition_msgs::srv::AbortSession_Request>()
{
  return audition_msgs::srv::builder::Init_AbortSession_Request_reason();
}

}  // namespace audition_msgs


namespace audition_msgs
{

namespace srv
{

namespace builder
{

class Init_AbortSession_Response_message
{
public:
  explicit Init_AbortSession_Response_message(::audition_msgs::srv::AbortSession_Response & msg)
  : msg_(msg)
  {}
  ::audition_msgs::srv::AbortSession_Response message(::audition_msgs::srv::AbortSession_Response::_message_type arg)
  {
    msg_.message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::audition_msgs::srv::AbortSession_Response msg_;
};

class Init_AbortSession_Response_accepted
{
public:
  Init_AbortSession_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AbortSession_Response_message accepted(::audition_msgs::srv::AbortSession_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_AbortSession_Response_message(msg_);
  }

private:
  ::audition_msgs::srv::AbortSession_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::audition_msgs::srv::AbortSession_Response>()
{
  return audition_msgs::srv::builder::Init_AbortSession_Response_accepted();
}

}  // namespace audition_msgs

#endif  // AUDITION_MSGS__SRV__DETAIL__ABORT_SESSION__BUILDER_HPP_
