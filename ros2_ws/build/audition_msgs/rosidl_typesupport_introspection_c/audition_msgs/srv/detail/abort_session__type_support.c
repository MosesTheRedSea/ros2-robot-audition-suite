// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from audition_msgs:srv/AbortSession.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "audition_msgs/srv/detail/abort_session__rosidl_typesupport_introspection_c.h"
#include "audition_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "audition_msgs/srv/detail/abort_session__functions.h"
#include "audition_msgs/srv/detail/abort_session__struct.h"


// Include directives for member types
// Member `reason`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void AbortSession_Request__rosidl_typesupport_introspection_c__AbortSession_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  audition_msgs__srv__AbortSession_Request__init(message_memory);
}

void AbortSession_Request__rosidl_typesupport_introspection_c__AbortSession_Request_fini_function(void * message_memory)
{
  audition_msgs__srv__AbortSession_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember AbortSession_Request__rosidl_typesupport_introspection_c__AbortSession_Request_message_member_array[1] = {
  {
    "reason",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(audition_msgs__srv__AbortSession_Request, reason),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers AbortSession_Request__rosidl_typesupport_introspection_c__AbortSession_Request_message_members = {
  "audition_msgs__srv",  // message namespace
  "AbortSession_Request",  // message name
  1,  // number of fields
  sizeof(audition_msgs__srv__AbortSession_Request),
  AbortSession_Request__rosidl_typesupport_introspection_c__AbortSession_Request_message_member_array,  // message members
  AbortSession_Request__rosidl_typesupport_introspection_c__AbortSession_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  AbortSession_Request__rosidl_typesupport_introspection_c__AbortSession_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t AbortSession_Request__rosidl_typesupport_introspection_c__AbortSession_Request_message_type_support_handle = {
  0,
  &AbortSession_Request__rosidl_typesupport_introspection_c__AbortSession_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_audition_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, audition_msgs, srv, AbortSession_Request)() {
  if (!AbortSession_Request__rosidl_typesupport_introspection_c__AbortSession_Request_message_type_support_handle.typesupport_identifier) {
    AbortSession_Request__rosidl_typesupport_introspection_c__AbortSession_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &AbortSession_Request__rosidl_typesupport_introspection_c__AbortSession_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "audition_msgs/srv/detail/abort_session__rosidl_typesupport_introspection_c.h"
// already included above
// #include "audition_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "audition_msgs/srv/detail/abort_session__functions.h"
// already included above
// #include "audition_msgs/srv/detail/abort_session__struct.h"


// Include directives for member types
// Member `message`
// already included above
// #include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void AbortSession_Response__rosidl_typesupport_introspection_c__AbortSession_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  audition_msgs__srv__AbortSession_Response__init(message_memory);
}

void AbortSession_Response__rosidl_typesupport_introspection_c__AbortSession_Response_fini_function(void * message_memory)
{
  audition_msgs__srv__AbortSession_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember AbortSession_Response__rosidl_typesupport_introspection_c__AbortSession_Response_message_member_array[2] = {
  {
    "accepted",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(audition_msgs__srv__AbortSession_Response, accepted),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "message",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(audition_msgs__srv__AbortSession_Response, message),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers AbortSession_Response__rosidl_typesupport_introspection_c__AbortSession_Response_message_members = {
  "audition_msgs__srv",  // message namespace
  "AbortSession_Response",  // message name
  2,  // number of fields
  sizeof(audition_msgs__srv__AbortSession_Response),
  AbortSession_Response__rosidl_typesupport_introspection_c__AbortSession_Response_message_member_array,  // message members
  AbortSession_Response__rosidl_typesupport_introspection_c__AbortSession_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  AbortSession_Response__rosidl_typesupport_introspection_c__AbortSession_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t AbortSession_Response__rosidl_typesupport_introspection_c__AbortSession_Response_message_type_support_handle = {
  0,
  &AbortSession_Response__rosidl_typesupport_introspection_c__AbortSession_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_audition_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, audition_msgs, srv, AbortSession_Response)() {
  if (!AbortSession_Response__rosidl_typesupport_introspection_c__AbortSession_Response_message_type_support_handle.typesupport_identifier) {
    AbortSession_Response__rosidl_typesupport_introspection_c__AbortSession_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &AbortSession_Response__rosidl_typesupport_introspection_c__AbortSession_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "audition_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "audition_msgs/srv/detail/abort_session__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers audition_msgs__srv__detail__abort_session__rosidl_typesupport_introspection_c__AbortSession_service_members = {
  "audition_msgs__srv",  // service namespace
  "AbortSession",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // audition_msgs__srv__detail__abort_session__rosidl_typesupport_introspection_c__AbortSession_Request_message_type_support_handle,
  NULL  // response message
  // audition_msgs__srv__detail__abort_session__rosidl_typesupport_introspection_c__AbortSession_Response_message_type_support_handle
};

static rosidl_service_type_support_t audition_msgs__srv__detail__abort_session__rosidl_typesupport_introspection_c__AbortSession_service_type_support_handle = {
  0,
  &audition_msgs__srv__detail__abort_session__rosidl_typesupport_introspection_c__AbortSession_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, audition_msgs, srv, AbortSession_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, audition_msgs, srv, AbortSession_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_audition_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, audition_msgs, srv, AbortSession)() {
  if (!audition_msgs__srv__detail__abort_session__rosidl_typesupport_introspection_c__AbortSession_service_type_support_handle.typesupport_identifier) {
    audition_msgs__srv__detail__abort_session__rosidl_typesupport_introspection_c__AbortSession_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)audition_msgs__srv__detail__abort_session__rosidl_typesupport_introspection_c__AbortSession_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, audition_msgs, srv, AbortSession_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, audition_msgs, srv, AbortSession_Response)()->data;
  }

  return &audition_msgs__srv__detail__abort_session__rosidl_typesupport_introspection_c__AbortSession_service_type_support_handle;
}
