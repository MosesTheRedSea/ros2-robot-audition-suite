// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from audition_msgs:msg/CollectionStatus.idl
// generated code does not contain a copyright notice

#ifndef AUDITION_MSGS__MSG__DETAIL__COLLECTION_STATUS__TRAITS_HPP_
#define AUDITION_MSGS__MSG__DETAIL__COLLECTION_STATUS__TRAITS_HPP_

#include "audition_msgs/msg/detail/collection_status__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<audition_msgs::msg::CollectionStatus>()
{
  return "audition_msgs::msg::CollectionStatus";
}

template<>
inline const char * name<audition_msgs::msg::CollectionStatus>()
{
  return "audition_msgs/msg/CollectionStatus";
}

template<>
struct has_fixed_size<audition_msgs::msg::CollectionStatus>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<audition_msgs::msg::CollectionStatus>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<audition_msgs::msg::CollectionStatus>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // AUDITION_MSGS__MSG__DETAIL__COLLECTION_STATUS__TRAITS_HPP_
