// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from audition_msgs:srv/AbortSession.idl
// generated code does not contain a copyright notice

#ifndef AUDITION_MSGS__SRV__DETAIL__ABORT_SESSION__TRAITS_HPP_
#define AUDITION_MSGS__SRV__DETAIL__ABORT_SESSION__TRAITS_HPP_

#include "audition_msgs/srv/detail/abort_session__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<audition_msgs::srv::AbortSession_Request>()
{
  return "audition_msgs::srv::AbortSession_Request";
}

template<>
inline const char * name<audition_msgs::srv::AbortSession_Request>()
{
  return "audition_msgs/srv/AbortSession_Request";
}

template<>
struct has_fixed_size<audition_msgs::srv::AbortSession_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<audition_msgs::srv::AbortSession_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<audition_msgs::srv::AbortSession_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<audition_msgs::srv::AbortSession_Response>()
{
  return "audition_msgs::srv::AbortSession_Response";
}

template<>
inline const char * name<audition_msgs::srv::AbortSession_Response>()
{
  return "audition_msgs/srv/AbortSession_Response";
}

template<>
struct has_fixed_size<audition_msgs::srv::AbortSession_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<audition_msgs::srv::AbortSession_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<audition_msgs::srv::AbortSession_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<audition_msgs::srv::AbortSession>()
{
  return "audition_msgs::srv::AbortSession";
}

template<>
inline const char * name<audition_msgs::srv::AbortSession>()
{
  return "audition_msgs/srv/AbortSession";
}

template<>
struct has_fixed_size<audition_msgs::srv::AbortSession>
  : std::integral_constant<
    bool,
    has_fixed_size<audition_msgs::srv::AbortSession_Request>::value &&
    has_fixed_size<audition_msgs::srv::AbortSession_Response>::value
  >
{
};

template<>
struct has_bounded_size<audition_msgs::srv::AbortSession>
  : std::integral_constant<
    bool,
    has_bounded_size<audition_msgs::srv::AbortSession_Request>::value &&
    has_bounded_size<audition_msgs::srv::AbortSession_Response>::value
  >
{
};

template<>
struct is_service<audition_msgs::srv::AbortSession>
  : std::true_type
{
};

template<>
struct is_service_request<audition_msgs::srv::AbortSession_Request>
  : std::true_type
{
};

template<>
struct is_service_response<audition_msgs::srv::AbortSession_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // AUDITION_MSGS__SRV__DETAIL__ABORT_SESSION__TRAITS_HPP_
