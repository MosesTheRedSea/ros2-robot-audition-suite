// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from audition_msgs:srv/ProceedToNext.idl
// generated code does not contain a copyright notice
#include "audition_msgs/srv/detail/proceed_to_next__rosidl_typesupport_fastrtps_cpp.hpp"
#include "audition_msgs/srv/detail/proceed_to_next__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace audition_msgs
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_audition_msgs
cdr_serialize(
  const audition_msgs::srv::ProceedToNext_Request & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: proceed
  cdr << (ros_message.proceed ? true : false);
  // Member: operator_note
  cdr << ros_message.operator_note;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_audition_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  audition_msgs::srv::ProceedToNext_Request & ros_message)
{
  // Member: proceed
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.proceed = tmp ? true : false;
  }

  // Member: operator_note
  cdr >> ros_message.operator_note;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_audition_msgs
get_serialized_size(
  const audition_msgs::srv::ProceedToNext_Request & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: proceed
  {
    size_t item_size = sizeof(ros_message.proceed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: operator_note
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.operator_note.size() + 1);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_audition_msgs
max_serialized_size_ProceedToNext_Request(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: proceed
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: operator_note
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  return current_alignment - initial_alignment;
}

static bool _ProceedToNext_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const audition_msgs::srv::ProceedToNext_Request *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _ProceedToNext_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<audition_msgs::srv::ProceedToNext_Request *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _ProceedToNext_Request__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const audition_msgs::srv::ProceedToNext_Request *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _ProceedToNext_Request__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_ProceedToNext_Request(full_bounded, 0);
}

static message_type_support_callbacks_t _ProceedToNext_Request__callbacks = {
  "audition_msgs::srv",
  "ProceedToNext_Request",
  _ProceedToNext_Request__cdr_serialize,
  _ProceedToNext_Request__cdr_deserialize,
  _ProceedToNext_Request__get_serialized_size,
  _ProceedToNext_Request__max_serialized_size
};

static rosidl_message_type_support_t _ProceedToNext_Request__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_ProceedToNext_Request__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace audition_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_audition_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<audition_msgs::srv::ProceedToNext_Request>()
{
  return &audition_msgs::srv::typesupport_fastrtps_cpp::_ProceedToNext_Request__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, audition_msgs, srv, ProceedToNext_Request)() {
  return &audition_msgs::srv::typesupport_fastrtps_cpp::_ProceedToNext_Request__handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include <limits>
// already included above
// #include <stdexcept>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
// already included above
// #include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace audition_msgs
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_audition_msgs
cdr_serialize(
  const audition_msgs::srv::ProceedToNext_Response & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: accepted
  cdr << (ros_message.accepted ? true : false);
  // Member: next_waypoint_label
  cdr << ros_message.next_waypoint_label;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_audition_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  audition_msgs::srv::ProceedToNext_Response & ros_message)
{
  // Member: accepted
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.accepted = tmp ? true : false;
  }

  // Member: next_waypoint_label
  cdr >> ros_message.next_waypoint_label;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_audition_msgs
get_serialized_size(
  const audition_msgs::srv::ProceedToNext_Response & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: accepted
  {
    size_t item_size = sizeof(ros_message.accepted);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: next_waypoint_label
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.next_waypoint_label.size() + 1);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_audition_msgs
max_serialized_size_ProceedToNext_Response(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: accepted
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: next_waypoint_label
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  return current_alignment - initial_alignment;
}

static bool _ProceedToNext_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const audition_msgs::srv::ProceedToNext_Response *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _ProceedToNext_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<audition_msgs::srv::ProceedToNext_Response *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _ProceedToNext_Response__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const audition_msgs::srv::ProceedToNext_Response *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _ProceedToNext_Response__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_ProceedToNext_Response(full_bounded, 0);
}

static message_type_support_callbacks_t _ProceedToNext_Response__callbacks = {
  "audition_msgs::srv",
  "ProceedToNext_Response",
  _ProceedToNext_Response__cdr_serialize,
  _ProceedToNext_Response__cdr_deserialize,
  _ProceedToNext_Response__get_serialized_size,
  _ProceedToNext_Response__max_serialized_size
};

static rosidl_message_type_support_t _ProceedToNext_Response__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_ProceedToNext_Response__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace audition_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_audition_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<audition_msgs::srv::ProceedToNext_Response>()
{
  return &audition_msgs::srv::typesupport_fastrtps_cpp::_ProceedToNext_Response__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, audition_msgs, srv, ProceedToNext_Response)() {
  return &audition_msgs::srv::typesupport_fastrtps_cpp::_ProceedToNext_Response__handle;
}

#ifdef __cplusplus
}
#endif

#include "rmw/error_handling.h"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/service_type_support_decl.hpp"

namespace audition_msgs
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

static service_type_support_callbacks_t _ProceedToNext__callbacks = {
  "audition_msgs::srv",
  "ProceedToNext",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, audition_msgs, srv, ProceedToNext_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, audition_msgs, srv, ProceedToNext_Response)(),
};

static rosidl_service_type_support_t _ProceedToNext__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_ProceedToNext__callbacks,
  get_service_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace audition_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_audition_msgs
const rosidl_service_type_support_t *
get_service_type_support_handle<audition_msgs::srv::ProceedToNext>()
{
  return &audition_msgs::srv::typesupport_fastrtps_cpp::_ProceedToNext__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, audition_msgs, srv, ProceedToNext)() {
  return &audition_msgs::srv::typesupport_fastrtps_cpp::_ProceedToNext__handle;
}

#ifdef __cplusplus
}
#endif
