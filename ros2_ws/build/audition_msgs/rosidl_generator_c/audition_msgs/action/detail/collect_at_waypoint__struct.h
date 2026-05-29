// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from audition_msgs:action/CollectAtWaypoint.idl
// generated code does not contain a copyright notice

#ifndef AUDITION_MSGS__ACTION__DETAIL__COLLECT_AT_WAYPOINT__STRUCT_H_
#define AUDITION_MSGS__ACTION__DETAIL__COLLECT_AT_WAYPOINT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'waypoint_label'
#include "rosidl_runtime_c/string.h"

// Struct defined in action/CollectAtWaypoint in the package audition_msgs.
typedef struct audition_msgs__action__CollectAtWaypoint_Goal
{
  int32_t waypoint_id;
  rosidl_runtime_c__String waypoint_label;
  double x;
  double y;
  double yaw;
} audition_msgs__action__CollectAtWaypoint_Goal;

// Struct for a sequence of audition_msgs__action__CollectAtWaypoint_Goal.
typedef struct audition_msgs__action__CollectAtWaypoint_Goal__Sequence
{
  audition_msgs__action__CollectAtWaypoint_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} audition_msgs__action__CollectAtWaypoint_Goal__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'message'
// already included above
// #include "rosidl_runtime_c/string.h"

// Struct defined in action/CollectAtWaypoint in the package audition_msgs.
typedef struct audition_msgs__action__CollectAtWaypoint_Result
{
  bool success;
  rosidl_runtime_c__String message;
  int32_t bag_count;
} audition_msgs__action__CollectAtWaypoint_Result;

// Struct for a sequence of audition_msgs__action__CollectAtWaypoint_Result.
typedef struct audition_msgs__action__CollectAtWaypoint_Result__Sequence
{
  audition_msgs__action__CollectAtWaypoint_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} audition_msgs__action__CollectAtWaypoint_Result__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'current_state'
// already included above
// #include "rosidl_runtime_c/string.h"

// Struct defined in action/CollectAtWaypoint in the package audition_msgs.
typedef struct audition_msgs__action__CollectAtWaypoint_Feedback
{
  rosidl_runtime_c__String current_state;
  float progress;
} audition_msgs__action__CollectAtWaypoint_Feedback;

// Struct for a sequence of audition_msgs__action__CollectAtWaypoint_Feedback.
typedef struct audition_msgs__action__CollectAtWaypoint_Feedback__Sequence
{
  audition_msgs__action__CollectAtWaypoint_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} audition_msgs__action__CollectAtWaypoint_Feedback__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "audition_msgs/action/detail/collect_at_waypoint__struct.h"

// Struct defined in action/CollectAtWaypoint in the package audition_msgs.
typedef struct audition_msgs__action__CollectAtWaypoint_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  audition_msgs__action__CollectAtWaypoint_Goal goal;
} audition_msgs__action__CollectAtWaypoint_SendGoal_Request;

// Struct for a sequence of audition_msgs__action__CollectAtWaypoint_SendGoal_Request.
typedef struct audition_msgs__action__CollectAtWaypoint_SendGoal_Request__Sequence
{
  audition_msgs__action__CollectAtWaypoint_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} audition_msgs__action__CollectAtWaypoint_SendGoal_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

// Struct defined in action/CollectAtWaypoint in the package audition_msgs.
typedef struct audition_msgs__action__CollectAtWaypoint_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} audition_msgs__action__CollectAtWaypoint_SendGoal_Response;

// Struct for a sequence of audition_msgs__action__CollectAtWaypoint_SendGoal_Response.
typedef struct audition_msgs__action__CollectAtWaypoint_SendGoal_Response__Sequence
{
  audition_msgs__action__CollectAtWaypoint_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} audition_msgs__action__CollectAtWaypoint_SendGoal_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

// Struct defined in action/CollectAtWaypoint in the package audition_msgs.
typedef struct audition_msgs__action__CollectAtWaypoint_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} audition_msgs__action__CollectAtWaypoint_GetResult_Request;

// Struct for a sequence of audition_msgs__action__CollectAtWaypoint_GetResult_Request.
typedef struct audition_msgs__action__CollectAtWaypoint_GetResult_Request__Sequence
{
  audition_msgs__action__CollectAtWaypoint_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} audition_msgs__action__CollectAtWaypoint_GetResult_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "audition_msgs/action/detail/collect_at_waypoint__struct.h"

// Struct defined in action/CollectAtWaypoint in the package audition_msgs.
typedef struct audition_msgs__action__CollectAtWaypoint_GetResult_Response
{
  int8_t status;
  audition_msgs__action__CollectAtWaypoint_Result result;
} audition_msgs__action__CollectAtWaypoint_GetResult_Response;

// Struct for a sequence of audition_msgs__action__CollectAtWaypoint_GetResult_Response.
typedef struct audition_msgs__action__CollectAtWaypoint_GetResult_Response__Sequence
{
  audition_msgs__action__CollectAtWaypoint_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} audition_msgs__action__CollectAtWaypoint_GetResult_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "audition_msgs/action/detail/collect_at_waypoint__struct.h"

// Struct defined in action/CollectAtWaypoint in the package audition_msgs.
typedef struct audition_msgs__action__CollectAtWaypoint_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  audition_msgs__action__CollectAtWaypoint_Feedback feedback;
} audition_msgs__action__CollectAtWaypoint_FeedbackMessage;

// Struct for a sequence of audition_msgs__action__CollectAtWaypoint_FeedbackMessage.
typedef struct audition_msgs__action__CollectAtWaypoint_FeedbackMessage__Sequence
{
  audition_msgs__action__CollectAtWaypoint_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} audition_msgs__action__CollectAtWaypoint_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AUDITION_MSGS__ACTION__DETAIL__COLLECT_AT_WAYPOINT__STRUCT_H_
