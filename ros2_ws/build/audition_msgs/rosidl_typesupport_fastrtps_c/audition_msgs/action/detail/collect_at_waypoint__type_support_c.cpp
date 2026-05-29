// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from audition_msgs:action/CollectAtWaypoint.idl
// generated code does not contain a copyright notice
#include "audition_msgs/action/detail/collect_at_waypoint__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "audition_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "audition_msgs/action/detail/collect_at_waypoint__struct.h"
#include "audition_msgs/action/detail/collect_at_waypoint__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "rosidl_runtime_c/string.h"  // waypoint_label
#include "rosidl_runtime_c/string_functions.h"  // waypoint_label

// forward declare type support functions


using _CollectAtWaypoint_Goal__ros_msg_type = audition_msgs__action__CollectAtWaypoint_Goal;

static bool _CollectAtWaypoint_Goal__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _CollectAtWaypoint_Goal__ros_msg_type * ros_message = static_cast<const _CollectAtWaypoint_Goal__ros_msg_type *>(untyped_ros_message);
  // Field name: waypoint_id
  {
    cdr << ros_message->waypoint_id;
  }

  // Field name: waypoint_label
  {
    const rosidl_runtime_c__String * str = &ros_message->waypoint_label;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: x
  {
    cdr << ros_message->x;
  }

  // Field name: y
  {
    cdr << ros_message->y;
  }

  // Field name: yaw
  {
    cdr << ros_message->yaw;
  }

  return true;
}

static bool _CollectAtWaypoint_Goal__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _CollectAtWaypoint_Goal__ros_msg_type * ros_message = static_cast<_CollectAtWaypoint_Goal__ros_msg_type *>(untyped_ros_message);
  // Field name: waypoint_id
  {
    cdr >> ros_message->waypoint_id;
  }

  // Field name: waypoint_label
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->waypoint_label.data) {
      rosidl_runtime_c__String__init(&ros_message->waypoint_label);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->waypoint_label,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'waypoint_label'\n");
      return false;
    }
  }

  // Field name: x
  {
    cdr >> ros_message->x;
  }

  // Field name: y
  {
    cdr >> ros_message->y;
  }

  // Field name: yaw
  {
    cdr >> ros_message->yaw;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_audition_msgs
size_t get_serialized_size_audition_msgs__action__CollectAtWaypoint_Goal(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _CollectAtWaypoint_Goal__ros_msg_type * ros_message = static_cast<const _CollectAtWaypoint_Goal__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name waypoint_id
  {
    size_t item_size = sizeof(ros_message->waypoint_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name waypoint_label
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->waypoint_label.size + 1);
  // field.name x
  {
    size_t item_size = sizeof(ros_message->x);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name y
  {
    size_t item_size = sizeof(ros_message->y);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name yaw
  {
    size_t item_size = sizeof(ros_message->yaw);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _CollectAtWaypoint_Goal__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_audition_msgs__action__CollectAtWaypoint_Goal(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_audition_msgs
size_t max_serialized_size_audition_msgs__action__CollectAtWaypoint_Goal(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: waypoint_id
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: waypoint_label
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: x
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: y
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: yaw
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _CollectAtWaypoint_Goal__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_audition_msgs__action__CollectAtWaypoint_Goal(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_CollectAtWaypoint_Goal = {
  "audition_msgs::action",
  "CollectAtWaypoint_Goal",
  _CollectAtWaypoint_Goal__cdr_serialize,
  _CollectAtWaypoint_Goal__cdr_deserialize,
  _CollectAtWaypoint_Goal__get_serialized_size,
  _CollectAtWaypoint_Goal__max_serialized_size
};

static rosidl_message_type_support_t _CollectAtWaypoint_Goal__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_CollectAtWaypoint_Goal,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, audition_msgs, action, CollectAtWaypoint_Goal)() {
  return &_CollectAtWaypoint_Goal__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <cassert>
// already included above
// #include <limits>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "audition_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "audition_msgs/action/detail/collect_at_waypoint__struct.h"
// already included above
// #include "audition_msgs/action/detail/collect_at_waypoint__functions.h"
// already included above
// #include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

// already included above
// #include "rosidl_runtime_c/string.h"  // message
// already included above
// #include "rosidl_runtime_c/string_functions.h"  // message

// forward declare type support functions


using _CollectAtWaypoint_Result__ros_msg_type = audition_msgs__action__CollectAtWaypoint_Result;

static bool _CollectAtWaypoint_Result__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _CollectAtWaypoint_Result__ros_msg_type * ros_message = static_cast<const _CollectAtWaypoint_Result__ros_msg_type *>(untyped_ros_message);
  // Field name: success
  {
    cdr << (ros_message->success ? true : false);
  }

  // Field name: message
  {
    const rosidl_runtime_c__String * str = &ros_message->message;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: bag_count
  {
    cdr << ros_message->bag_count;
  }

  return true;
}

static bool _CollectAtWaypoint_Result__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _CollectAtWaypoint_Result__ros_msg_type * ros_message = static_cast<_CollectAtWaypoint_Result__ros_msg_type *>(untyped_ros_message);
  // Field name: success
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->success = tmp ? true : false;
  }

  // Field name: message
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->message.data) {
      rosidl_runtime_c__String__init(&ros_message->message);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->message,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'message'\n");
      return false;
    }
  }

  // Field name: bag_count
  {
    cdr >> ros_message->bag_count;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_audition_msgs
size_t get_serialized_size_audition_msgs__action__CollectAtWaypoint_Result(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _CollectAtWaypoint_Result__ros_msg_type * ros_message = static_cast<const _CollectAtWaypoint_Result__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name success
  {
    size_t item_size = sizeof(ros_message->success);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name message
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->message.size + 1);
  // field.name bag_count
  {
    size_t item_size = sizeof(ros_message->bag_count);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _CollectAtWaypoint_Result__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_audition_msgs__action__CollectAtWaypoint_Result(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_audition_msgs
size_t max_serialized_size_audition_msgs__action__CollectAtWaypoint_Result(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: success
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: message
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: bag_count
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _CollectAtWaypoint_Result__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_audition_msgs__action__CollectAtWaypoint_Result(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_CollectAtWaypoint_Result = {
  "audition_msgs::action",
  "CollectAtWaypoint_Result",
  _CollectAtWaypoint_Result__cdr_serialize,
  _CollectAtWaypoint_Result__cdr_deserialize,
  _CollectAtWaypoint_Result__get_serialized_size,
  _CollectAtWaypoint_Result__max_serialized_size
};

static rosidl_message_type_support_t _CollectAtWaypoint_Result__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_CollectAtWaypoint_Result,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, audition_msgs, action, CollectAtWaypoint_Result)() {
  return &_CollectAtWaypoint_Result__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <cassert>
// already included above
// #include <limits>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "audition_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "audition_msgs/action/detail/collect_at_waypoint__struct.h"
// already included above
// #include "audition_msgs/action/detail/collect_at_waypoint__functions.h"
// already included above
// #include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

// already included above
// #include "rosidl_runtime_c/string.h"  // current_state
// already included above
// #include "rosidl_runtime_c/string_functions.h"  // current_state

// forward declare type support functions


using _CollectAtWaypoint_Feedback__ros_msg_type = audition_msgs__action__CollectAtWaypoint_Feedback;

static bool _CollectAtWaypoint_Feedback__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _CollectAtWaypoint_Feedback__ros_msg_type * ros_message = static_cast<const _CollectAtWaypoint_Feedback__ros_msg_type *>(untyped_ros_message);
  // Field name: current_state
  {
    const rosidl_runtime_c__String * str = &ros_message->current_state;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: progress
  {
    cdr << ros_message->progress;
  }

  return true;
}

static bool _CollectAtWaypoint_Feedback__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _CollectAtWaypoint_Feedback__ros_msg_type * ros_message = static_cast<_CollectAtWaypoint_Feedback__ros_msg_type *>(untyped_ros_message);
  // Field name: current_state
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->current_state.data) {
      rosidl_runtime_c__String__init(&ros_message->current_state);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->current_state,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'current_state'\n");
      return false;
    }
  }

  // Field name: progress
  {
    cdr >> ros_message->progress;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_audition_msgs
size_t get_serialized_size_audition_msgs__action__CollectAtWaypoint_Feedback(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _CollectAtWaypoint_Feedback__ros_msg_type * ros_message = static_cast<const _CollectAtWaypoint_Feedback__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name current_state
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->current_state.size + 1);
  // field.name progress
  {
    size_t item_size = sizeof(ros_message->progress);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _CollectAtWaypoint_Feedback__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_audition_msgs__action__CollectAtWaypoint_Feedback(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_audition_msgs
size_t max_serialized_size_audition_msgs__action__CollectAtWaypoint_Feedback(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: current_state
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: progress
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _CollectAtWaypoint_Feedback__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_audition_msgs__action__CollectAtWaypoint_Feedback(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_CollectAtWaypoint_Feedback = {
  "audition_msgs::action",
  "CollectAtWaypoint_Feedback",
  _CollectAtWaypoint_Feedback__cdr_serialize,
  _CollectAtWaypoint_Feedback__cdr_deserialize,
  _CollectAtWaypoint_Feedback__get_serialized_size,
  _CollectAtWaypoint_Feedback__max_serialized_size
};

static rosidl_message_type_support_t _CollectAtWaypoint_Feedback__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_CollectAtWaypoint_Feedback,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, audition_msgs, action, CollectAtWaypoint_Feedback)() {
  return &_CollectAtWaypoint_Feedback__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <cassert>
// already included above
// #include <limits>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "audition_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "audition_msgs/action/detail/collect_at_waypoint__struct.h"
// already included above
// #include "audition_msgs/action/detail/collect_at_waypoint__functions.h"
// already included above
// #include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

// already included above
// #include "audition_msgs/action/detail/collect_at_waypoint__functions.h"  // goal
#include "unique_identifier_msgs/msg/detail/uuid__functions.h"  // goal_id

// forward declare type support functions
size_t get_serialized_size_audition_msgs__action__CollectAtWaypoint_Goal(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_audition_msgs__action__CollectAtWaypoint_Goal(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, audition_msgs, action, CollectAtWaypoint_Goal)();
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_audition_msgs
size_t get_serialized_size_unique_identifier_msgs__msg__UUID(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_audition_msgs
size_t max_serialized_size_unique_identifier_msgs__msg__UUID(
  bool & full_bounded,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_audition_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, unique_identifier_msgs, msg, UUID)();


using _CollectAtWaypoint_SendGoal_Request__ros_msg_type = audition_msgs__action__CollectAtWaypoint_SendGoal_Request;

static bool _CollectAtWaypoint_SendGoal_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _CollectAtWaypoint_SendGoal_Request__ros_msg_type * ros_message = static_cast<const _CollectAtWaypoint_SendGoal_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: goal_id
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, unique_identifier_msgs, msg, UUID
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->goal_id, cdr))
    {
      return false;
    }
  }

  // Field name: goal
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, audition_msgs, action, CollectAtWaypoint_Goal
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->goal, cdr))
    {
      return false;
    }
  }

  return true;
}

static bool _CollectAtWaypoint_SendGoal_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _CollectAtWaypoint_SendGoal_Request__ros_msg_type * ros_message = static_cast<_CollectAtWaypoint_SendGoal_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: goal_id
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, unique_identifier_msgs, msg, UUID
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->goal_id))
    {
      return false;
    }
  }

  // Field name: goal
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, audition_msgs, action, CollectAtWaypoint_Goal
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->goal))
    {
      return false;
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_audition_msgs
size_t get_serialized_size_audition_msgs__action__CollectAtWaypoint_SendGoal_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _CollectAtWaypoint_SendGoal_Request__ros_msg_type * ros_message = static_cast<const _CollectAtWaypoint_SendGoal_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name goal_id

  current_alignment += get_serialized_size_unique_identifier_msgs__msg__UUID(
    &(ros_message->goal_id), current_alignment);
  // field.name goal

  current_alignment += get_serialized_size_audition_msgs__action__CollectAtWaypoint_Goal(
    &(ros_message->goal), current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _CollectAtWaypoint_SendGoal_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_audition_msgs__action__CollectAtWaypoint_SendGoal_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_audition_msgs
size_t max_serialized_size_audition_msgs__action__CollectAtWaypoint_SendGoal_Request(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: goal_id
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_unique_identifier_msgs__msg__UUID(
        full_bounded, current_alignment);
    }
  }
  // member: goal
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_audition_msgs__action__CollectAtWaypoint_Goal(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _CollectAtWaypoint_SendGoal_Request__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_audition_msgs__action__CollectAtWaypoint_SendGoal_Request(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_CollectAtWaypoint_SendGoal_Request = {
  "audition_msgs::action",
  "CollectAtWaypoint_SendGoal_Request",
  _CollectAtWaypoint_SendGoal_Request__cdr_serialize,
  _CollectAtWaypoint_SendGoal_Request__cdr_deserialize,
  _CollectAtWaypoint_SendGoal_Request__get_serialized_size,
  _CollectAtWaypoint_SendGoal_Request__max_serialized_size
};

static rosidl_message_type_support_t _CollectAtWaypoint_SendGoal_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_CollectAtWaypoint_SendGoal_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, audition_msgs, action, CollectAtWaypoint_SendGoal_Request)() {
  return &_CollectAtWaypoint_SendGoal_Request__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <cassert>
// already included above
// #include <limits>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "audition_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "audition_msgs/action/detail/collect_at_waypoint__struct.h"
// already included above
// #include "audition_msgs/action/detail/collect_at_waypoint__functions.h"
// already included above
// #include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "builtin_interfaces/msg/detail/time__functions.h"  // stamp

// forward declare type support functions
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_audition_msgs
size_t get_serialized_size_builtin_interfaces__msg__Time(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_audition_msgs
size_t max_serialized_size_builtin_interfaces__msg__Time(
  bool & full_bounded,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_audition_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, builtin_interfaces, msg, Time)();


using _CollectAtWaypoint_SendGoal_Response__ros_msg_type = audition_msgs__action__CollectAtWaypoint_SendGoal_Response;

static bool _CollectAtWaypoint_SendGoal_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _CollectAtWaypoint_SendGoal_Response__ros_msg_type * ros_message = static_cast<const _CollectAtWaypoint_SendGoal_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: accepted
  {
    cdr << (ros_message->accepted ? true : false);
  }

  // Field name: stamp
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, builtin_interfaces, msg, Time
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->stamp, cdr))
    {
      return false;
    }
  }

  return true;
}

static bool _CollectAtWaypoint_SendGoal_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _CollectAtWaypoint_SendGoal_Response__ros_msg_type * ros_message = static_cast<_CollectAtWaypoint_SendGoal_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: accepted
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->accepted = tmp ? true : false;
  }

  // Field name: stamp
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, builtin_interfaces, msg, Time
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->stamp))
    {
      return false;
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_audition_msgs
size_t get_serialized_size_audition_msgs__action__CollectAtWaypoint_SendGoal_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _CollectAtWaypoint_SendGoal_Response__ros_msg_type * ros_message = static_cast<const _CollectAtWaypoint_SendGoal_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name accepted
  {
    size_t item_size = sizeof(ros_message->accepted);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name stamp

  current_alignment += get_serialized_size_builtin_interfaces__msg__Time(
    &(ros_message->stamp), current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _CollectAtWaypoint_SendGoal_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_audition_msgs__action__CollectAtWaypoint_SendGoal_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_audition_msgs
size_t max_serialized_size_audition_msgs__action__CollectAtWaypoint_SendGoal_Response(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: accepted
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: stamp
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_builtin_interfaces__msg__Time(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _CollectAtWaypoint_SendGoal_Response__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_audition_msgs__action__CollectAtWaypoint_SendGoal_Response(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_CollectAtWaypoint_SendGoal_Response = {
  "audition_msgs::action",
  "CollectAtWaypoint_SendGoal_Response",
  _CollectAtWaypoint_SendGoal_Response__cdr_serialize,
  _CollectAtWaypoint_SendGoal_Response__cdr_deserialize,
  _CollectAtWaypoint_SendGoal_Response__get_serialized_size,
  _CollectAtWaypoint_SendGoal_Response__max_serialized_size
};

static rosidl_message_type_support_t _CollectAtWaypoint_SendGoal_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_CollectAtWaypoint_SendGoal_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, audition_msgs, action, CollectAtWaypoint_SendGoal_Response)() {
  return &_CollectAtWaypoint_SendGoal_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "audition_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "audition_msgs/action/collect_at_waypoint.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t CollectAtWaypoint_SendGoal__callbacks = {
  "audition_msgs::action",
  "CollectAtWaypoint_SendGoal",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, audition_msgs, action, CollectAtWaypoint_SendGoal_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, audition_msgs, action, CollectAtWaypoint_SendGoal_Response)(),
};

static rosidl_service_type_support_t CollectAtWaypoint_SendGoal__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &CollectAtWaypoint_SendGoal__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, audition_msgs, action, CollectAtWaypoint_SendGoal)() {
  return &CollectAtWaypoint_SendGoal__handle;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <cassert>
// already included above
// #include <limits>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "audition_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "audition_msgs/action/detail/collect_at_waypoint__struct.h"
// already included above
// #include "audition_msgs/action/detail/collect_at_waypoint__functions.h"
// already included above
// #include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"  // goal_id

// forward declare type support functions
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_audition_msgs
size_t get_serialized_size_unique_identifier_msgs__msg__UUID(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_audition_msgs
size_t max_serialized_size_unique_identifier_msgs__msg__UUID(
  bool & full_bounded,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_audition_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, unique_identifier_msgs, msg, UUID)();


using _CollectAtWaypoint_GetResult_Request__ros_msg_type = audition_msgs__action__CollectAtWaypoint_GetResult_Request;

static bool _CollectAtWaypoint_GetResult_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _CollectAtWaypoint_GetResult_Request__ros_msg_type * ros_message = static_cast<const _CollectAtWaypoint_GetResult_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: goal_id
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, unique_identifier_msgs, msg, UUID
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->goal_id, cdr))
    {
      return false;
    }
  }

  return true;
}

static bool _CollectAtWaypoint_GetResult_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _CollectAtWaypoint_GetResult_Request__ros_msg_type * ros_message = static_cast<_CollectAtWaypoint_GetResult_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: goal_id
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, unique_identifier_msgs, msg, UUID
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->goal_id))
    {
      return false;
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_audition_msgs
size_t get_serialized_size_audition_msgs__action__CollectAtWaypoint_GetResult_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _CollectAtWaypoint_GetResult_Request__ros_msg_type * ros_message = static_cast<const _CollectAtWaypoint_GetResult_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name goal_id

  current_alignment += get_serialized_size_unique_identifier_msgs__msg__UUID(
    &(ros_message->goal_id), current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _CollectAtWaypoint_GetResult_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_audition_msgs__action__CollectAtWaypoint_GetResult_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_audition_msgs
size_t max_serialized_size_audition_msgs__action__CollectAtWaypoint_GetResult_Request(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: goal_id
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_unique_identifier_msgs__msg__UUID(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _CollectAtWaypoint_GetResult_Request__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_audition_msgs__action__CollectAtWaypoint_GetResult_Request(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_CollectAtWaypoint_GetResult_Request = {
  "audition_msgs::action",
  "CollectAtWaypoint_GetResult_Request",
  _CollectAtWaypoint_GetResult_Request__cdr_serialize,
  _CollectAtWaypoint_GetResult_Request__cdr_deserialize,
  _CollectAtWaypoint_GetResult_Request__get_serialized_size,
  _CollectAtWaypoint_GetResult_Request__max_serialized_size
};

static rosidl_message_type_support_t _CollectAtWaypoint_GetResult_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_CollectAtWaypoint_GetResult_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, audition_msgs, action, CollectAtWaypoint_GetResult_Request)() {
  return &_CollectAtWaypoint_GetResult_Request__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <cassert>
// already included above
// #include <limits>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "audition_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "audition_msgs/action/detail/collect_at_waypoint__struct.h"
// already included above
// #include "audition_msgs/action/detail/collect_at_waypoint__functions.h"
// already included above
// #include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

// already included above
// #include "audition_msgs/action/detail/collect_at_waypoint__functions.h"  // result

// forward declare type support functions
size_t get_serialized_size_audition_msgs__action__CollectAtWaypoint_Result(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_audition_msgs__action__CollectAtWaypoint_Result(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, audition_msgs, action, CollectAtWaypoint_Result)();


using _CollectAtWaypoint_GetResult_Response__ros_msg_type = audition_msgs__action__CollectAtWaypoint_GetResult_Response;

static bool _CollectAtWaypoint_GetResult_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _CollectAtWaypoint_GetResult_Response__ros_msg_type * ros_message = static_cast<const _CollectAtWaypoint_GetResult_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: status
  {
    cdr << ros_message->status;
  }

  // Field name: result
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, audition_msgs, action, CollectAtWaypoint_Result
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->result, cdr))
    {
      return false;
    }
  }

  return true;
}

static bool _CollectAtWaypoint_GetResult_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _CollectAtWaypoint_GetResult_Response__ros_msg_type * ros_message = static_cast<_CollectAtWaypoint_GetResult_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: status
  {
    cdr >> ros_message->status;
  }

  // Field name: result
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, audition_msgs, action, CollectAtWaypoint_Result
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->result))
    {
      return false;
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_audition_msgs
size_t get_serialized_size_audition_msgs__action__CollectAtWaypoint_GetResult_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _CollectAtWaypoint_GetResult_Response__ros_msg_type * ros_message = static_cast<const _CollectAtWaypoint_GetResult_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name status
  {
    size_t item_size = sizeof(ros_message->status);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name result

  current_alignment += get_serialized_size_audition_msgs__action__CollectAtWaypoint_Result(
    &(ros_message->result), current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _CollectAtWaypoint_GetResult_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_audition_msgs__action__CollectAtWaypoint_GetResult_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_audition_msgs
size_t max_serialized_size_audition_msgs__action__CollectAtWaypoint_GetResult_Response(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: status
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: result
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_audition_msgs__action__CollectAtWaypoint_Result(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _CollectAtWaypoint_GetResult_Response__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_audition_msgs__action__CollectAtWaypoint_GetResult_Response(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_CollectAtWaypoint_GetResult_Response = {
  "audition_msgs::action",
  "CollectAtWaypoint_GetResult_Response",
  _CollectAtWaypoint_GetResult_Response__cdr_serialize,
  _CollectAtWaypoint_GetResult_Response__cdr_deserialize,
  _CollectAtWaypoint_GetResult_Response__get_serialized_size,
  _CollectAtWaypoint_GetResult_Response__max_serialized_size
};

static rosidl_message_type_support_t _CollectAtWaypoint_GetResult_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_CollectAtWaypoint_GetResult_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, audition_msgs, action, CollectAtWaypoint_GetResult_Response)() {
  return &_CollectAtWaypoint_GetResult_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
// already included above
// #include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "audition_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "audition_msgs/action/collect_at_waypoint.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t CollectAtWaypoint_GetResult__callbacks = {
  "audition_msgs::action",
  "CollectAtWaypoint_GetResult",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, audition_msgs, action, CollectAtWaypoint_GetResult_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, audition_msgs, action, CollectAtWaypoint_GetResult_Response)(),
};

static rosidl_service_type_support_t CollectAtWaypoint_GetResult__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &CollectAtWaypoint_GetResult__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, audition_msgs, action, CollectAtWaypoint_GetResult)() {
  return &CollectAtWaypoint_GetResult__handle;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <cassert>
// already included above
// #include <limits>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "audition_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "audition_msgs/action/detail/collect_at_waypoint__struct.h"
// already included above
// #include "audition_msgs/action/detail/collect_at_waypoint__functions.h"
// already included above
// #include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

// already included above
// #include "audition_msgs/action/detail/collect_at_waypoint__functions.h"  // feedback
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"  // goal_id

// forward declare type support functions
size_t get_serialized_size_audition_msgs__action__CollectAtWaypoint_Feedback(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_audition_msgs__action__CollectAtWaypoint_Feedback(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, audition_msgs, action, CollectAtWaypoint_Feedback)();
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_audition_msgs
size_t get_serialized_size_unique_identifier_msgs__msg__UUID(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_audition_msgs
size_t max_serialized_size_unique_identifier_msgs__msg__UUID(
  bool & full_bounded,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_audition_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, unique_identifier_msgs, msg, UUID)();


using _CollectAtWaypoint_FeedbackMessage__ros_msg_type = audition_msgs__action__CollectAtWaypoint_FeedbackMessage;

static bool _CollectAtWaypoint_FeedbackMessage__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _CollectAtWaypoint_FeedbackMessage__ros_msg_type * ros_message = static_cast<const _CollectAtWaypoint_FeedbackMessage__ros_msg_type *>(untyped_ros_message);
  // Field name: goal_id
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, unique_identifier_msgs, msg, UUID
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->goal_id, cdr))
    {
      return false;
    }
  }

  // Field name: feedback
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, audition_msgs, action, CollectAtWaypoint_Feedback
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->feedback, cdr))
    {
      return false;
    }
  }

  return true;
}

static bool _CollectAtWaypoint_FeedbackMessage__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _CollectAtWaypoint_FeedbackMessage__ros_msg_type * ros_message = static_cast<_CollectAtWaypoint_FeedbackMessage__ros_msg_type *>(untyped_ros_message);
  // Field name: goal_id
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, unique_identifier_msgs, msg, UUID
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->goal_id))
    {
      return false;
    }
  }

  // Field name: feedback
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, audition_msgs, action, CollectAtWaypoint_Feedback
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->feedback))
    {
      return false;
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_audition_msgs
size_t get_serialized_size_audition_msgs__action__CollectAtWaypoint_FeedbackMessage(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _CollectAtWaypoint_FeedbackMessage__ros_msg_type * ros_message = static_cast<const _CollectAtWaypoint_FeedbackMessage__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name goal_id

  current_alignment += get_serialized_size_unique_identifier_msgs__msg__UUID(
    &(ros_message->goal_id), current_alignment);
  // field.name feedback

  current_alignment += get_serialized_size_audition_msgs__action__CollectAtWaypoint_Feedback(
    &(ros_message->feedback), current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _CollectAtWaypoint_FeedbackMessage__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_audition_msgs__action__CollectAtWaypoint_FeedbackMessage(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_audition_msgs
size_t max_serialized_size_audition_msgs__action__CollectAtWaypoint_FeedbackMessage(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: goal_id
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_unique_identifier_msgs__msg__UUID(
        full_bounded, current_alignment);
    }
  }
  // member: feedback
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_audition_msgs__action__CollectAtWaypoint_Feedback(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _CollectAtWaypoint_FeedbackMessage__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_audition_msgs__action__CollectAtWaypoint_FeedbackMessage(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_CollectAtWaypoint_FeedbackMessage = {
  "audition_msgs::action",
  "CollectAtWaypoint_FeedbackMessage",
  _CollectAtWaypoint_FeedbackMessage__cdr_serialize,
  _CollectAtWaypoint_FeedbackMessage__cdr_deserialize,
  _CollectAtWaypoint_FeedbackMessage__get_serialized_size,
  _CollectAtWaypoint_FeedbackMessage__max_serialized_size
};

static rosidl_message_type_support_t _CollectAtWaypoint_FeedbackMessage__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_CollectAtWaypoint_FeedbackMessage,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, audition_msgs, action, CollectAtWaypoint_FeedbackMessage)() {
  return &_CollectAtWaypoint_FeedbackMessage__type_support;
}

#if defined(__cplusplus)
}
#endif
