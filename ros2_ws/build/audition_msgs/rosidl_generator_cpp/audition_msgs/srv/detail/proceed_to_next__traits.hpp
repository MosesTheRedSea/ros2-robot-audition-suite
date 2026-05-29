// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from audition_msgs:srv/ProceedToNext.idl
// generated code does not contain a copyright notice

#ifndef AUDITION_MSGS__SRV__DETAIL__PROCEED_TO_NEXT__TRAITS_HPP_
#define AUDITION_MSGS__SRV__DETAIL__PROCEED_TO_NEXT__TRAITS_HPP_

#include "audition_msgs/srv/detail/proceed_to_next__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<audition_msgs::srv::ProceedToNext_Request>()
{
  return "audition_msgs::srv::ProceedToNext_Request";
}

template<>
inline const char * name<audition_msgs::srv::ProceedToNext_Request>()
{
  return "audition_msgs/srv/ProceedToNext_Request";
}

template<>
struct has_fixed_size<audition_msgs::srv::ProceedToNext_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<audition_msgs::srv::ProceedToNext_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<audition_msgs::srv::ProceedToNext_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<audition_msgs::srv::ProceedToNext_Response>()
{
  return "audition_msgs::srv::ProceedToNext_Response";
}

template<>
inline const char * name<audition_msgs::srv::ProceedToNext_Response>()
{
  return "audition_msgs/srv/ProceedToNext_Response";
}

template<>
struct has_fixed_size<audition_msgs::srv::ProceedToNext_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<audition_msgs::srv::ProceedToNext_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<audition_msgs::srv::ProceedToNext_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<audition_msgs::srv::ProceedToNext>()
{
  return "audition_msgs::srv::ProceedToNext";
}

template<>
inline const char * name<audition_msgs::srv::ProceedToNext>()
{
  return "audition_msgs/srv/ProceedToNext";
}

template<>
struct has_fixed_size<audition_msgs::srv::ProceedToNext>
  : std::integral_constant<
    bool,
    has_fixed_size<audition_msgs::srv::ProceedToNext_Request>::value &&
    has_fixed_size<audition_msgs::srv::ProceedToNext_Response>::value
  >
{
};

template<>
struct has_bounded_size<audition_msgs::srv::ProceedToNext>
  : std::integral_constant<
    bool,
    has_bounded_size<audition_msgs::srv::ProceedToNext_Request>::value &&
    has_bounded_size<audition_msgs::srv::ProceedToNext_Response>::value
  >
{
};

template<>
struct is_service<audition_msgs::srv::ProceedToNext>
  : std::true_type
{
};

template<>
struct is_service_request<audition_msgs::srv::ProceedToNext_Request>
  : std::true_type
{
};

template<>
struct is_service_response<audition_msgs::srv::ProceedToNext_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // AUDITION_MSGS__SRV__DETAIL__PROCEED_TO_NEXT__TRAITS_HPP_
