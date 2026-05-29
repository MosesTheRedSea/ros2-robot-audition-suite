// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from audition_msgs:srv/AbortSession.idl
// generated code does not contain a copyright notice

#ifndef AUDITION_MSGS__SRV__DETAIL__ABORT_SESSION__STRUCT_H_
#define AUDITION_MSGS__SRV__DETAIL__ABORT_SESSION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'reason'
#include "rosidl_runtime_c/string.h"

// Struct defined in srv/AbortSession in the package audition_msgs.
typedef struct audition_msgs__srv__AbortSession_Request
{
  rosidl_runtime_c__String reason;
} audition_msgs__srv__AbortSession_Request;

// Struct for a sequence of audition_msgs__srv__AbortSession_Request.
typedef struct audition_msgs__srv__AbortSession_Request__Sequence
{
  audition_msgs__srv__AbortSession_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} audition_msgs__srv__AbortSession_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'message'
// already included above
// #include "rosidl_runtime_c/string.h"

// Struct defined in srv/AbortSession in the package audition_msgs.
typedef struct audition_msgs__srv__AbortSession_Response
{
  bool accepted;
  rosidl_runtime_c__String message;
} audition_msgs__srv__AbortSession_Response;

// Struct for a sequence of audition_msgs__srv__AbortSession_Response.
typedef struct audition_msgs__srv__AbortSession_Response__Sequence
{
  audition_msgs__srv__AbortSession_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} audition_msgs__srv__AbortSession_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AUDITION_MSGS__SRV__DETAIL__ABORT_SESSION__STRUCT_H_
