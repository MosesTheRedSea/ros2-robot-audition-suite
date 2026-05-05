// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from audition_msgs:action/CollectAtWaypoint.idl
// generated code does not contain a copyright notice

#ifndef AUDITION_MSGS__ACTION__DETAIL__COLLECT_AT_WAYPOINT__TRAITS_HPP_
#define AUDITION_MSGS__ACTION__DETAIL__COLLECT_AT_WAYPOINT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "audition_msgs/action/detail/collect_at_waypoint__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace audition_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const CollectAtWaypoint_Goal & msg,
  std::ostream & out)
{
  out << "{";
  // member: waypoint_id
  {
    out << "waypoint_id: ";
    rosidl_generator_traits::value_to_yaml(msg.waypoint_id, out);
    out << ", ";
  }

  // member: waypoint_label
  {
    out << "waypoint_label: ";
    rosidl_generator_traits::value_to_yaml(msg.waypoint_label, out);
    out << ", ";
  }

  // member: x
  {
    out << "x: ";
    rosidl_generator_traits::value_to_yaml(msg.x, out);
    out << ", ";
  }

  // member: y
  {
    out << "y: ";
    rosidl_generator_traits::value_to_yaml(msg.y, out);
    out << ", ";
  }

  // member: yaw
  {
    out << "yaw: ";
    rosidl_generator_traits::value_to_yaml(msg.yaw, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const CollectAtWaypoint_Goal & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: waypoint_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "waypoint_id: ";
    rosidl_generator_traits::value_to_yaml(msg.waypoint_id, out);
    out << "\n";
  }

  // member: waypoint_label
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "waypoint_label: ";
    rosidl_generator_traits::value_to_yaml(msg.waypoint_label, out);
    out << "\n";
  }

  // member: x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "x: ";
    rosidl_generator_traits::value_to_yaml(msg.x, out);
    out << "\n";
  }

  // member: y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "y: ";
    rosidl_generator_traits::value_to_yaml(msg.y, out);
    out << "\n";
  }

  // member: yaw
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "yaw: ";
    rosidl_generator_traits::value_to_yaml(msg.yaw, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const CollectAtWaypoint_Goal & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace audition_msgs

namespace rosidl_generator_traits
{

[[deprecated("use audition_msgs::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const audition_msgs::action::CollectAtWaypoint_Goal & msg,
  std::ostream & out, size_t indentation = 0)
{
  audition_msgs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use audition_msgs::action::to_yaml() instead")]]
inline std::string to_yaml(const audition_msgs::action::CollectAtWaypoint_Goal & msg)
{
  return audition_msgs::action::to_yaml(msg);
}

template<>
inline const char * data_type<audition_msgs::action::CollectAtWaypoint_Goal>()
{
  return "audition_msgs::action::CollectAtWaypoint_Goal";
}

template<>
inline const char * name<audition_msgs::action::CollectAtWaypoint_Goal>()
{
  return "audition_msgs/action/CollectAtWaypoint_Goal";
}

template<>
struct has_fixed_size<audition_msgs::action::CollectAtWaypoint_Goal>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<audition_msgs::action::CollectAtWaypoint_Goal>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<audition_msgs::action::CollectAtWaypoint_Goal>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace audition_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const CollectAtWaypoint_Result & msg,
  std::ostream & out)
{
  out << "{";
  // member: success
  {
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << ", ";
  }

  // member: message
  {
    out << "message: ";
    rosidl_generator_traits::value_to_yaml(msg.message, out);
    out << ", ";
  }

  // member: bag_count
  {
    out << "bag_count: ";
    rosidl_generator_traits::value_to_yaml(msg.bag_count, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const CollectAtWaypoint_Result & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: success
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
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

  // member: bag_count
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "bag_count: ";
    rosidl_generator_traits::value_to_yaml(msg.bag_count, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const CollectAtWaypoint_Result & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace audition_msgs

namespace rosidl_generator_traits
{

[[deprecated("use audition_msgs::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const audition_msgs::action::CollectAtWaypoint_Result & msg,
  std::ostream & out, size_t indentation = 0)
{
  audition_msgs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use audition_msgs::action::to_yaml() instead")]]
inline std::string to_yaml(const audition_msgs::action::CollectAtWaypoint_Result & msg)
{
  return audition_msgs::action::to_yaml(msg);
}

template<>
inline const char * data_type<audition_msgs::action::CollectAtWaypoint_Result>()
{
  return "audition_msgs::action::CollectAtWaypoint_Result";
}

template<>
inline const char * name<audition_msgs::action::CollectAtWaypoint_Result>()
{
  return "audition_msgs/action/CollectAtWaypoint_Result";
}

template<>
struct has_fixed_size<audition_msgs::action::CollectAtWaypoint_Result>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<audition_msgs::action::CollectAtWaypoint_Result>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<audition_msgs::action::CollectAtWaypoint_Result>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace audition_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const CollectAtWaypoint_Feedback & msg,
  std::ostream & out)
{
  out << "{";
  // member: current_state
  {
    out << "current_state: ";
    rosidl_generator_traits::value_to_yaml(msg.current_state, out);
    out << ", ";
  }

  // member: progress
  {
    out << "progress: ";
    rosidl_generator_traits::value_to_yaml(msg.progress, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const CollectAtWaypoint_Feedback & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: current_state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "current_state: ";
    rosidl_generator_traits::value_to_yaml(msg.current_state, out);
    out << "\n";
  }

  // member: progress
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "progress: ";
    rosidl_generator_traits::value_to_yaml(msg.progress, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const CollectAtWaypoint_Feedback & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace audition_msgs

namespace rosidl_generator_traits
{

[[deprecated("use audition_msgs::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const audition_msgs::action::CollectAtWaypoint_Feedback & msg,
  std::ostream & out, size_t indentation = 0)
{
  audition_msgs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use audition_msgs::action::to_yaml() instead")]]
inline std::string to_yaml(const audition_msgs::action::CollectAtWaypoint_Feedback & msg)
{
  return audition_msgs::action::to_yaml(msg);
}

template<>
inline const char * data_type<audition_msgs::action::CollectAtWaypoint_Feedback>()
{
  return "audition_msgs::action::CollectAtWaypoint_Feedback";
}

template<>
inline const char * name<audition_msgs::action::CollectAtWaypoint_Feedback>()
{
  return "audition_msgs/action/CollectAtWaypoint_Feedback";
}

template<>
struct has_fixed_size<audition_msgs::action::CollectAtWaypoint_Feedback>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<audition_msgs::action::CollectAtWaypoint_Feedback>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<audition_msgs::action::CollectAtWaypoint_Feedback>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'goal'
#include "audition_msgs/action/detail/collect_at_waypoint__traits.hpp"

namespace audition_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const CollectAtWaypoint_SendGoal_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
    out << ", ";
  }

  // member: goal
  {
    out << "goal: ";
    to_flow_style_yaml(msg.goal, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const CollectAtWaypoint_SendGoal_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }

  // member: goal
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal:\n";
    to_block_style_yaml(msg.goal, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const CollectAtWaypoint_SendGoal_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace audition_msgs

namespace rosidl_generator_traits
{

[[deprecated("use audition_msgs::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const audition_msgs::action::CollectAtWaypoint_SendGoal_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  audition_msgs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use audition_msgs::action::to_yaml() instead")]]
inline std::string to_yaml(const audition_msgs::action::CollectAtWaypoint_SendGoal_Request & msg)
{
  return audition_msgs::action::to_yaml(msg);
}

template<>
inline const char * data_type<audition_msgs::action::CollectAtWaypoint_SendGoal_Request>()
{
  return "audition_msgs::action::CollectAtWaypoint_SendGoal_Request";
}

template<>
inline const char * name<audition_msgs::action::CollectAtWaypoint_SendGoal_Request>()
{
  return "audition_msgs/action/CollectAtWaypoint_SendGoal_Request";
}

template<>
struct has_fixed_size<audition_msgs::action::CollectAtWaypoint_SendGoal_Request>
  : std::integral_constant<bool, has_fixed_size<audition_msgs::action::CollectAtWaypoint_Goal>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<audition_msgs::action::CollectAtWaypoint_SendGoal_Request>
  : std::integral_constant<bool, has_bounded_size<audition_msgs::action::CollectAtWaypoint_Goal>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<audition_msgs::action::CollectAtWaypoint_SendGoal_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace audition_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const CollectAtWaypoint_SendGoal_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: accepted
  {
    out << "accepted: ";
    rosidl_generator_traits::value_to_yaml(msg.accepted, out);
    out << ", ";
  }

  // member: stamp
  {
    out << "stamp: ";
    to_flow_style_yaml(msg.stamp, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const CollectAtWaypoint_SendGoal_Response & msg,
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

  // member: stamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "stamp:\n";
    to_block_style_yaml(msg.stamp, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const CollectAtWaypoint_SendGoal_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace audition_msgs

namespace rosidl_generator_traits
{

[[deprecated("use audition_msgs::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const audition_msgs::action::CollectAtWaypoint_SendGoal_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  audition_msgs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use audition_msgs::action::to_yaml() instead")]]
inline std::string to_yaml(const audition_msgs::action::CollectAtWaypoint_SendGoal_Response & msg)
{
  return audition_msgs::action::to_yaml(msg);
}

template<>
inline const char * data_type<audition_msgs::action::CollectAtWaypoint_SendGoal_Response>()
{
  return "audition_msgs::action::CollectAtWaypoint_SendGoal_Response";
}

template<>
inline const char * name<audition_msgs::action::CollectAtWaypoint_SendGoal_Response>()
{
  return "audition_msgs/action/CollectAtWaypoint_SendGoal_Response";
}

template<>
struct has_fixed_size<audition_msgs::action::CollectAtWaypoint_SendGoal_Response>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct has_bounded_size<audition_msgs::action::CollectAtWaypoint_SendGoal_Response>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct is_message<audition_msgs::action::CollectAtWaypoint_SendGoal_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<audition_msgs::action::CollectAtWaypoint_SendGoal>()
{
  return "audition_msgs::action::CollectAtWaypoint_SendGoal";
}

template<>
inline const char * name<audition_msgs::action::CollectAtWaypoint_SendGoal>()
{
  return "audition_msgs/action/CollectAtWaypoint_SendGoal";
}

template<>
struct has_fixed_size<audition_msgs::action::CollectAtWaypoint_SendGoal>
  : std::integral_constant<
    bool,
    has_fixed_size<audition_msgs::action::CollectAtWaypoint_SendGoal_Request>::value &&
    has_fixed_size<audition_msgs::action::CollectAtWaypoint_SendGoal_Response>::value
  >
{
};

template<>
struct has_bounded_size<audition_msgs::action::CollectAtWaypoint_SendGoal>
  : std::integral_constant<
    bool,
    has_bounded_size<audition_msgs::action::CollectAtWaypoint_SendGoal_Request>::value &&
    has_bounded_size<audition_msgs::action::CollectAtWaypoint_SendGoal_Response>::value
  >
{
};

template<>
struct is_service<audition_msgs::action::CollectAtWaypoint_SendGoal>
  : std::true_type
{
};

template<>
struct is_service_request<audition_msgs::action::CollectAtWaypoint_SendGoal_Request>
  : std::true_type
{
};

template<>
struct is_service_response<audition_msgs::action::CollectAtWaypoint_SendGoal_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"

namespace audition_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const CollectAtWaypoint_GetResult_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const CollectAtWaypoint_GetResult_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const CollectAtWaypoint_GetResult_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace audition_msgs

namespace rosidl_generator_traits
{

[[deprecated("use audition_msgs::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const audition_msgs::action::CollectAtWaypoint_GetResult_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  audition_msgs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use audition_msgs::action::to_yaml() instead")]]
inline std::string to_yaml(const audition_msgs::action::CollectAtWaypoint_GetResult_Request & msg)
{
  return audition_msgs::action::to_yaml(msg);
}

template<>
inline const char * data_type<audition_msgs::action::CollectAtWaypoint_GetResult_Request>()
{
  return "audition_msgs::action::CollectAtWaypoint_GetResult_Request";
}

template<>
inline const char * name<audition_msgs::action::CollectAtWaypoint_GetResult_Request>()
{
  return "audition_msgs/action/CollectAtWaypoint_GetResult_Request";
}

template<>
struct has_fixed_size<audition_msgs::action::CollectAtWaypoint_GetResult_Request>
  : std::integral_constant<bool, has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<audition_msgs::action::CollectAtWaypoint_GetResult_Request>
  : std::integral_constant<bool, has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<audition_msgs::action::CollectAtWaypoint_GetResult_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'result'
// already included above
// #include "audition_msgs/action/detail/collect_at_waypoint__traits.hpp"

namespace audition_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const CollectAtWaypoint_GetResult_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: status
  {
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << ", ";
  }

  // member: result
  {
    out << "result: ";
    to_flow_style_yaml(msg.result, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const CollectAtWaypoint_GetResult_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << "\n";
  }

  // member: result
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "result:\n";
    to_block_style_yaml(msg.result, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const CollectAtWaypoint_GetResult_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace audition_msgs

namespace rosidl_generator_traits
{

[[deprecated("use audition_msgs::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const audition_msgs::action::CollectAtWaypoint_GetResult_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  audition_msgs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use audition_msgs::action::to_yaml() instead")]]
inline std::string to_yaml(const audition_msgs::action::CollectAtWaypoint_GetResult_Response & msg)
{
  return audition_msgs::action::to_yaml(msg);
}

template<>
inline const char * data_type<audition_msgs::action::CollectAtWaypoint_GetResult_Response>()
{
  return "audition_msgs::action::CollectAtWaypoint_GetResult_Response";
}

template<>
inline const char * name<audition_msgs::action::CollectAtWaypoint_GetResult_Response>()
{
  return "audition_msgs/action/CollectAtWaypoint_GetResult_Response";
}

template<>
struct has_fixed_size<audition_msgs::action::CollectAtWaypoint_GetResult_Response>
  : std::integral_constant<bool, has_fixed_size<audition_msgs::action::CollectAtWaypoint_Result>::value> {};

template<>
struct has_bounded_size<audition_msgs::action::CollectAtWaypoint_GetResult_Response>
  : std::integral_constant<bool, has_bounded_size<audition_msgs::action::CollectAtWaypoint_Result>::value> {};

template<>
struct is_message<audition_msgs::action::CollectAtWaypoint_GetResult_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<audition_msgs::action::CollectAtWaypoint_GetResult>()
{
  return "audition_msgs::action::CollectAtWaypoint_GetResult";
}

template<>
inline const char * name<audition_msgs::action::CollectAtWaypoint_GetResult>()
{
  return "audition_msgs/action/CollectAtWaypoint_GetResult";
}

template<>
struct has_fixed_size<audition_msgs::action::CollectAtWaypoint_GetResult>
  : std::integral_constant<
    bool,
    has_fixed_size<audition_msgs::action::CollectAtWaypoint_GetResult_Request>::value &&
    has_fixed_size<audition_msgs::action::CollectAtWaypoint_GetResult_Response>::value
  >
{
};

template<>
struct has_bounded_size<audition_msgs::action::CollectAtWaypoint_GetResult>
  : std::integral_constant<
    bool,
    has_bounded_size<audition_msgs::action::CollectAtWaypoint_GetResult_Request>::value &&
    has_bounded_size<audition_msgs::action::CollectAtWaypoint_GetResult_Response>::value
  >
{
};

template<>
struct is_service<audition_msgs::action::CollectAtWaypoint_GetResult>
  : std::true_type
{
};

template<>
struct is_service_request<audition_msgs::action::CollectAtWaypoint_GetResult_Request>
  : std::true_type
{
};

template<>
struct is_service_response<audition_msgs::action::CollectAtWaypoint_GetResult_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'feedback'
// already included above
// #include "audition_msgs/action/detail/collect_at_waypoint__traits.hpp"

namespace audition_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const CollectAtWaypoint_FeedbackMessage & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
    out << ", ";
  }

  // member: feedback
  {
    out << "feedback: ";
    to_flow_style_yaml(msg.feedback, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const CollectAtWaypoint_FeedbackMessage & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }

  // member: feedback
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "feedback:\n";
    to_block_style_yaml(msg.feedback, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const CollectAtWaypoint_FeedbackMessage & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace audition_msgs

namespace rosidl_generator_traits
{

[[deprecated("use audition_msgs::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const audition_msgs::action::CollectAtWaypoint_FeedbackMessage & msg,
  std::ostream & out, size_t indentation = 0)
{
  audition_msgs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use audition_msgs::action::to_yaml() instead")]]
inline std::string to_yaml(const audition_msgs::action::CollectAtWaypoint_FeedbackMessage & msg)
{
  return audition_msgs::action::to_yaml(msg);
}

template<>
inline const char * data_type<audition_msgs::action::CollectAtWaypoint_FeedbackMessage>()
{
  return "audition_msgs::action::CollectAtWaypoint_FeedbackMessage";
}

template<>
inline const char * name<audition_msgs::action::CollectAtWaypoint_FeedbackMessage>()
{
  return "audition_msgs/action/CollectAtWaypoint_FeedbackMessage";
}

template<>
struct has_fixed_size<audition_msgs::action::CollectAtWaypoint_FeedbackMessage>
  : std::integral_constant<bool, has_fixed_size<audition_msgs::action::CollectAtWaypoint_Feedback>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<audition_msgs::action::CollectAtWaypoint_FeedbackMessage>
  : std::integral_constant<bool, has_bounded_size<audition_msgs::action::CollectAtWaypoint_Feedback>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<audition_msgs::action::CollectAtWaypoint_FeedbackMessage>
  : std::true_type {};

}  // namespace rosidl_generator_traits


namespace rosidl_generator_traits
{

template<>
struct is_action<audition_msgs::action::CollectAtWaypoint>
  : std::true_type
{
};

template<>
struct is_action_goal<audition_msgs::action::CollectAtWaypoint_Goal>
  : std::true_type
{
};

template<>
struct is_action_result<audition_msgs::action::CollectAtWaypoint_Result>
  : std::true_type
{
};

template<>
struct is_action_feedback<audition_msgs::action::CollectAtWaypoint_Feedback>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits


#endif  // AUDITION_MSGS__ACTION__DETAIL__COLLECT_AT_WAYPOINT__TRAITS_HPP_
