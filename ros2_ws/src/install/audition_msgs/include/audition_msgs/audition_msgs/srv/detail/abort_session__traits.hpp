// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from audition_msgs:srv/AbortSession.idl
// generated code does not contain a copyright notice

#ifndef AUDITION_MSGS__SRV__DETAIL__ABORT_SESSION__TRAITS_HPP_
#define AUDITION_MSGS__SRV__DETAIL__ABORT_SESSION__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "audition_msgs/srv/detail/abort_session__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace audition_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const AbortSession_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: reason
  {
    out << "reason: ";
    rosidl_generator_traits::value_to_yaml(msg.reason, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const AbortSession_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: reason
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "reason: ";
    rosidl_generator_traits::value_to_yaml(msg.reason, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const AbortSession_Request & msg, bool use_flow_style = false)
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
  const audition_msgs::srv::AbortSession_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  audition_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use audition_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const audition_msgs::srv::AbortSession_Request & msg)
{
  return audition_msgs::srv::to_yaml(msg);
}

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

namespace audition_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const AbortSession_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: accepted
  {
    out << "accepted: ";
    rosidl_generator_traits::value_to_yaml(msg.accepted, out);
    out << ", ";
  }

  // member: message
  {
    out << "message: ";
    rosidl_generator_traits::value_to_yaml(msg.message, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const AbortSession_Response & msg,
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

  // member: message
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "message: ";
    rosidl_generator_traits::value_to_yaml(msg.message, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const AbortSession_Response & msg, bool use_flow_style = false)
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
  const audition_msgs::srv::AbortSession_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  audition_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use audition_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const audition_msgs::srv::AbortSession_Response & msg)
{
  return audition_msgs::srv::to_yaml(msg);
}

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
