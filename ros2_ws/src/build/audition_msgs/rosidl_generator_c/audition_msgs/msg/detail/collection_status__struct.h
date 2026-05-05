// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from audition_msgs:msg/CollectionStatus.idl
// generated code does not contain a copyright notice

#ifndef AUDITION_MSGS__MSG__DETAIL__COLLECTION_STATUS__STRUCT_H_
#define AUDITION_MSGS__MSG__DETAIL__COLLECTION_STATUS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'current_waypoint_label'
// Member 'state'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/CollectionStatus in the package audition_msgs.
typedef struct audition_msgs__msg__CollectionStatus
{
  std_msgs__msg__Header header;
  int32_t current_waypoint_id;
  rosidl_runtime_c__String current_waypoint_label;
  rosidl_runtime_c__String state;
  bool recording;
  int32_t total_waypoints;
  int32_t completed_waypoints;
} audition_msgs__msg__CollectionStatus;

// Struct for a sequence of audition_msgs__msg__CollectionStatus.
typedef struct audition_msgs__msg__CollectionStatus__Sequence
{
  audition_msgs__msg__CollectionStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} audition_msgs__msg__CollectionStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AUDITION_MSGS__MSG__DETAIL__COLLECTION_STATUS__STRUCT_H_
