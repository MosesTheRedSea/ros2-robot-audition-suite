// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from audition_msgs:srv/ProceedToNext.idl
// generated code does not contain a copyright notice

#ifndef AUDITION_MSGS__SRV__DETAIL__PROCEED_TO_NEXT__TRAITS_HPP_
#define AUDITION_MSGS__SRV__DETAIL__PROCEED_TO_NEXT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "audition_msgs/srv/detail/proceed_to_next__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace audition_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const ProceedToNext_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: proceed
  {
    out << "proceed: ";
    rosidl_generator_traits::value_to_yaml(msg.proceed, out);
    out << ", ";
  }

  // member: operator_note
  {
    out << "operator_note: ";
    rosidl_generator_traits::value_to_yaml(msg.operator_note, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ProceedToNext_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: proceed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "proceed: ";
    rosidl_generator_traits::value_to_yaml(msg.proceed, out);
    out << "\n";
  }

  // member: operator_note
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "operator_note: ";
    rosidl_generator_traits::value_to_yaml(msg.operator_note, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ProceedToNext_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace audition_msgs

namespace rosidl_generator_traits
{

[[deprecated("use audition_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const audition_msgs::srv::ProceedToNext_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  audition_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use audition_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const audition_msgs::srv::ProceedToNext_Request & msg)
{
  return audition_msgs::srv::to_yaml(msg);
}

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

namespace audition_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const ProceedToNext_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: accepted
  {
    out << "accepted: ";
    rosidl_generator_traits::value_to_yaml(msg.accepted, out);
    out << ", ";
  }

  // member: next_waypoint_label
  {
    out << "next_waypoint_label: ";
    rosidl_generator_traits::value_to_yaml(msg.next_waypoint_label, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ProceedToNext_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: accepted
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "accepted: ";
    rosidl_generator_traits::value_to_yaml(msg.accepted, out);
    out << "\n";
  }

  // member: next_waypoint_label
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "next_waypoint_label: ";
    rosidl_generator_traits::value_to_yaml(msg.next_waypoint_label, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ProceedToNext_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace audition_msgs

namespace rosidl_generator_traits
{

[[deprecated("use audition_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const audition_msgs::srv::ProceedToNext_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  audition_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use audition_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const audition_msgs::srv::ProceedToNext_Response & msg)
{
  return audition_msgs::srv::to_yaml(msg);
}

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
