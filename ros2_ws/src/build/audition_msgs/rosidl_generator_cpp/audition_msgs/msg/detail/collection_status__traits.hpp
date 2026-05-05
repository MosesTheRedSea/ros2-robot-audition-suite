// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from audition_msgs:msg/CollectionStatus.idl
// generated code does not contain a copyright notice

#ifndef AUDITION_MSGS__MSG__DETAIL__COLLECTION_STATUS__TRAITS_HPP_
#define AUDITION_MSGS__MSG__DETAIL__COLLECTION_STATUS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "audition_msgs/msg/detail/collection_status__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace audition_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const CollectionStatus & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: current_waypoint_id
  {
    out << "current_waypoint_id: ";
    rosidl_generator_traits::value_to_yaml(msg.current_waypoint_id, out);
    out << ", ";
  }

  // member: current_waypoint_label
  {
    out << "current_waypoint_label: ";
    rosidl_generator_traits::value_to_yaml(msg.current_waypoint_label, out);
    out << ", ";
  }

  // member: state
  {
    out << "state: ";
    rosidl_generator_traits::value_to_yaml(msg.state, out);
    out << ", ";
  }

  // member: recording
  {
    out << "recording: ";
    rosidl_generator_traits::value_to_yaml(msg.recording, out);
    out << ", ";
  }

  // member: total_waypoints
  {
    out << "total_waypoints: ";
    rosidl_generator_traits::value_to_yaml(msg.total_waypoints, out);
    out << ", ";
  }

  // member: completed_waypoints
  {
    out << "completed_waypoints: ";
    rosidl_generator_traits::value_to_yaml(msg.completed_waypoints, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const CollectionStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: header
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "header:\n";
    to_block_style_yaml(msg.header, out, indentation + 2);
  }

  // member: current_waypoint_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "current_waypoint_id: ";
    rosidl_generator_traits::value_to_yaml(msg.current_waypoint_id, out);
    out << "\n";
  }

  // member: current_waypoint_label
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "current_waypoint_label: ";
    rosidl_generator_traits::value_to_yaml(msg.current_waypoint_label, out);
    out << "\n";
  }

  // member: state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "state: ";
    rosidl_generator_traits::value_to_yaml(msg.state, out);
    out << "\n";
  }

  // member: recording
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "recording: ";
    rosidl_generator_traits::value_to_yaml(msg.recording, out);
    out << "\n";
  }

  // member: total_waypoints
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "total_waypoints: ";
    rosidl_generator_traits::value_to_yaml(msg.total_waypoints, out);
    out << "\n";
  }

  // member: completed_waypoints
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "completed_waypoints: ";
    rosidl_generator_traits::value_to_yaml(msg.completed_waypoints, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const CollectionStatus & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace audition_msgs

namespace rosidl_generator_traits
{

[[deprecated("use audition_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const audition_msgs::msg::CollectionStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  audition_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use audition_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const audition_msgs::msg::CollectionStatus & msg)
{
  return audition_msgs::msg::to_yaml(msg);
}

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
