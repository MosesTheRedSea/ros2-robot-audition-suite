// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from audition_msgs:msg/CollectionStatus.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "audition_msgs/msg/detail/collection_status__rosidl_typesupport_introspection_c.h"
#include "audition_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "audition_msgs/msg/detail/collection_status__functions.h"
#include "audition_msgs/msg/detail/collection_status__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `current_waypoint_label`
// Member `state`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void CollectionStatus__rosidl_typesupport_introspection_c__CollectionStatus_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  audition_msgs__msg__CollectionStatus__init(message_memory);
}

void CollectionStatus__rosidl_typesupport_introspection_c__CollectionStatus_fini_function(void * message_memory)
{
  audition_msgs__msg__CollectionStatus__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember CollectionStatus__rosidl_typesupport_introspection_c__CollectionStatus_message_member_array[7] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(audition_msgs__msg__CollectionStatus, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "current_waypoint_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(audition_msgs__msg__CollectionStatus, current_waypoint_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "current_waypoint_label",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(audition_msgs__msg__CollectionStatus, current_waypoint_label),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "state",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(audition_msgs__msg__CollectionStatus, state),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "recording",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(audition_msgs__msg__CollectionStatus, recording),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "total_waypoints",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(audition_msgs__msg__CollectionStatus, total_waypoints),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "completed_waypoints",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(audition_msgs__msg__CollectionStatus, completed_waypoints),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers CollectionStatus__rosidl_typesupport_introspection_c__CollectionStatus_message_members = {
  "audition_msgs__msg",  // message namespace
  "CollectionStatus",  // message name
  7,  // number of fields
  sizeof(audition_msgs__msg__CollectionStatus),
  CollectionStatus__rosidl_typesupport_introspection_c__CollectionStatus_message_member_array,  // message members
  CollectionStatus__rosidl_typesupport_introspection_c__CollectionStatus_init_function,  // function to initialize message memory (memory has to be allocated)
  CollectionStatus__rosidl_typesupport_introspection_c__CollectionStatus_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t CollectionStatus__rosidl_typesupport_introspection_c__CollectionStatus_message_type_support_handle = {
  0,
  &CollectionStatus__rosidl_typesupport_introspection_c__CollectionStatus_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_audition_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, audition_msgs, msg, CollectionStatus)() {
  CollectionStatus__rosidl_typesupport_introspection_c__CollectionStatus_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  if (!CollectionStatus__rosidl_typesupport_introspection_c__CollectionStatus_message_type_support_handle.typesupport_identifier) {
    CollectionStatus__rosidl_typesupport_introspection_c__CollectionStatus_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &CollectionStatus__rosidl_typesupport_introspection_c__CollectionStatus_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
