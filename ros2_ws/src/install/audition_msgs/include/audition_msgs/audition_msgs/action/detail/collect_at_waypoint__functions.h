// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from audition_msgs:action/CollectAtWaypoint.idl
// generated code does not contain a copyright notice

#ifndef AUDITION_MSGS__ACTION__DETAIL__COLLECT_AT_WAYPOINT__FUNCTIONS_H_
#define AUDITION_MSGS__ACTION__DETAIL__COLLECT_AT_WAYPOINT__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "audition_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "audition_msgs/action/detail/collect_at_waypoint__struct.h"

/// Initialize action/CollectAtWaypoint message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * audition_msgs__action__CollectAtWaypoint_Goal
 * )) before or use
 * audition_msgs__action__CollectAtWaypoint_Goal__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_audition_msgs
bool
audition_msgs__action__CollectAtWaypoint_Goal__init(audition_msgs__action__CollectAtWaypoint_Goal * msg);

/// Finalize action/CollectAtWaypoint message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_audition_msgs
void
audition_msgs__action__CollectAtWaypoint_Goal__fini(audition_msgs__action__CollectAtWaypoint_Goal * msg);

/// Create action/CollectAtWaypoint message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * audition_msgs__action__CollectAtWaypoint_Goal__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_audition_msgs
audition_msgs__action__CollectAtWaypoint_Goal *
audition_msgs__action__CollectAtWaypoint_Goal__create();

/// Destroy action/CollectAtWaypoint message.
/**
 * It calls
 * audition_msgs__action__CollectAtWaypoint_Goal__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_audition_msgs
void
audition_msgs__action__CollectAtWaypoint_Goal__destroy(audition_msgs__action__CollectAtWaypoint_Goal * msg);

/// Check for action/CollectAtWaypoint message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_audition_msgs
bool
audition_msgs__action__CollectAtWaypoint_Goal__are_equal(const audition_msgs__action__CollectAtWaypoint_Goal * lhs, const audition_msgs__action__CollectAtWaypoint_Goal * rhs);

/// Copy a action/CollectAtWaypoint message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_audition_msgs
bool
audition_msgs__action__CollectAtWaypoint_Goal__copy(
  const audition_msgs__action__CollectAtWaypoint_Goal * input,
  audition_msgs__action__CollectAtWaypoint_Goal * output);

/// Initialize array of action/CollectAtWaypoint messages.
/**
 * It allocates the memory for the number of elements and calls
 * audition_msgs__action__CollectAtWaypoint_Goal__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_audition_msgs
bool
audition_msgs__action__CollectAtWaypoint_Goal__Sequence__init(audition_msgs__action__CollectAtWaypoint_Goal__Sequence * array, size_t size);

/// Finalize array of action/CollectAtWaypoint messages.
/**
 * It calls
 * audition_msgs__action__CollectAtWaypoint_Goal__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_audition_msgs
void
audition_msgs__action__CollectAtWaypoint_Goal__Sequence__fini(audition_msgs__action__CollectAtWaypoint_Goal__Sequence * array);

/// Create array of action/CollectAtWaypoint messages.
/**
 * It allocates the memory for the array and calls
 * audition_msgs__action__CollectAtWaypoint_Goal__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_audition_msgs
audition_msgs__action__CollectAtWaypoint_Goal__Sequence *
audition_msgs__action__CollectAtWaypoint_Goal__Sequence__create(size_t size);

/// Destroy array of action/CollectAtWaypoint messages.
/**
 * It calls
 * audition_msgs__action__CollectAtWaypoint_Goal__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_audition_msgs
void
audition_msgs__action__CollectAtWaypoint_Goal__Sequence__destroy(audition_msgs__action__CollectAtWaypoint_Goal__Sequence * array);

/// Check for action/CollectAtWaypoint message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_audition_msgs
bool
audition_msgs__action__CollectAtWaypoint_Goal__Sequence__are_equal(const audition_msgs__action__CollectAtWaypoint_Goal__Sequence * lhs, const audition_msgs__action__CollectAtWaypoint_Goal__Sequence * rhs);

/// Copy an array of action/CollectAtWaypoint messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_audition_msgs
bool
audition_msgs__action__CollectAtWaypoint_Goal__Sequence__copy(
  const audition_msgs__action__CollectAtWaypoint_Goal__Sequence * input,
  audition_msgs__action__CollectAtWaypoint_Goal__Sequence * output);

/// Initialize action/CollectAtWaypoint message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * audition_msgs__action__CollectAtWaypoint_Result
 * )) before or use
 * audition_msgs__action__CollectAtWaypoint_Result__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_audition_msgs
bool
audition_msgs__action__CollectAtWaypoint_Result__init(audition_msgs__action__CollectAtWaypoint_Result * msg);

/// Finalize action/CollectAtWaypoint message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_audition_msgs
void
audition_msgs__action__CollectAtWaypoint_Result__fini(audition_msgs__action__CollectAtWaypoint_Result * msg);

/// Create action/CollectAtWaypoint message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * audition_msgs__action__CollectAtWaypoint_Result__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_audition_msgs
audition_msgs__action__CollectAtWaypoint_Result *
audition_msgs__action__CollectAtWaypoint_Result__create();

/// Destroy action/CollectAtWaypoint message.
/**
 * It calls
 * audition_msgs__action__CollectAtWaypoint_Result__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_audition_msgs
void
audition_msgs__action__CollectAtWaypoint_Result__destroy(audition_msgs__action__CollectAtWaypoint_Result * msg);

/// Check for action/CollectAtWaypoint message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_audition_msgs
bool
audition_msgs__action__CollectAtWaypoint_Result__are_equal(const audition_msgs__action__CollectAtWaypoint_Result * lhs, const audition_msgs__action__CollectAtWaypoint_Result * rhs);

/// Copy a action/CollectAtWaypoint message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_audition_msgs
bool
audition_msgs__action__CollectAtWaypoint_Result__copy(
  const audition_msgs__action__CollectAtWaypoint_Result * input,
  audition_msgs__action__CollectAtWaypoint_Result * output);

/// Initialize array of action/CollectAtWaypoint messages.
/**
 * It allocates the memory for the number of elements and calls
 * audition_msgs__action__CollectAtWaypoint_Result__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_audition_msgs
bool
audition_msgs__action__CollectAtWaypoint_Result__Sequence__init(audition_msgs__action__CollectAtWaypoint_Result__Sequence * array, size_t size);

/// Finalize array of action/CollectAtWaypoint messages.
/**
 * It calls
 * audition_msgs__action__CollectAtWaypoint_Result__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_audition_msgs
void
audition_msgs__action__CollectAtWaypoint_Result__Sequence__fini(audition_msgs__action__CollectAtWaypoint_Result__Sequence * array);

/// Create array of action/CollectAtWaypoint messages.
/**
 * It allocates the memory for the array and calls
 * audition_msgs__action__CollectAtWaypoint_Result__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_audition_msgs
audition_msgs__action__CollectAtWaypoint_Result__Sequence *
audition_msgs__action__CollectAtWaypoint_Result__Sequence__create(size_t size);

/// Destroy array of action/CollectAtWaypoint messages.
/**
 * It calls
 * audition_msgs__action__CollectAtWaypoint_Result__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_audition_msgs
void
audition_msgs__action__CollectAtWaypoint_Result__Sequence__destroy(audition_msgs__action__CollectAtWaypoint_Result__Sequence * array);

/// Check for action/CollectAtWaypoint message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_audition_msgs
bool
audition_msgs__action__CollectAtWaypoint_Result__Sequence__are_equal(const audition_msgs__action__CollectAtWaypoint_Result__Sequence * lhs, const audition_msgs__action__CollectAtWaypoint_Result__Sequence * rhs);

/// Copy an array of action/CollectAtWaypoint messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_audition_msgs
bool
audition_msgs__action__CollectAtWaypoint_Result__Sequence__copy(
  const audition_msgs__action__CollectAtWaypoint_Result__Sequence * input,
  audition_msgs__action__CollectAtWaypoint_Result__Sequence * output);

/// Initialize action/CollectAtWaypoint message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * audition_msgs__action__CollectAtWaypoint_Feedback
 * )) before or use
 * audition_msgs__action__CollectAtWaypoint_Feedback__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_audition_msgs
bool
audition_msgs__action__CollectAtWaypoint_Feedback__init(audition_msgs__action__CollectAtWaypoint_Feedback * msg);

/// Finalize action/CollectAtWaypoint message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_audition_msgs
void
audition_msgs__action__CollectAtWaypoint_Feedback__fini(audition_msgs__action__CollectAtWaypoint_Feedback * msg);

/// Create action/CollectAtWaypoint message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * audition_msgs__action__CollectAtWaypoint_Feedback__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_audition_msgs
audition_msgs__action__CollectAtWaypoint_Feedback *
audition_msgs__action__CollectAtWaypoint_Feedback__create();

/// Destroy action/CollectAtWaypoint message.
/**
 * It calls
 * audition_msgs__action__CollectAtWaypoint_Feedback__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_audition_msgs
void
audition_msgs__action__CollectAtWaypoint_Feedback__destroy(audition_msgs__action__CollectAtWaypoint_Feedback * msg);

/// Check for action/CollectAtWaypoint message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_audition_msgs
bool
audition_msgs__action__CollectAtWaypoint_Feedback__are_equal(const audition_msgs__action__CollectAtWaypoint_Feedback * lhs, const audition_msgs__action__CollectAtWaypoint_Feedback * rhs);

/// Copy a action/CollectAtWaypoint message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_audition_msgs
bool
audition_msgs__action__CollectAtWaypoint_Feedback__copy(
  const audition_msgs__action__CollectAtWaypoint_Feedback * input,
  audition_msgs__action__CollectAtWaypoint_Feedback * output);

/// Initialize array of action/CollectAtWaypoint messages.
/**
 * It allocates the memory for the number of elements and calls
 * audition_msgs__action__CollectAtWaypoint_Feedback__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_audition_msgs
bool
audition_msgs__action__CollectAtWaypoint_Feedback__Sequence__init(audition_msgs__action__CollectAtWaypoint_Feedback__Sequence * array, size_t size);

/// Finalize array of action/CollectAtWaypoint messages.
/**
 * It calls
 * audition_msgs__action__CollectAtWaypoint_Feedback__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_audition_msgs
void
audition_msgs__action__CollectAtWaypoint_Feedback__Sequence__fini(audition_msgs__action__CollectAtWaypoint_Feedback__Sequence * array);

/// Create array of action/CollectAtWaypoint messages.
/**
 * It allocates the memory for the array and calls
 * audition_msgs__action__CollectAtWaypoint_Feedback__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_audition_msgs
audition_msgs__action__CollectAtWaypoint_Feedback__Sequence *
audition_msgs__action__CollectAtWaypoint_Feedback__Sequence__create(size_t size);

/// Destroy array of action/CollectAtWaypoint messages.
/**
 * It calls
 * audition_msgs__action__CollectAtWaypoint_Feedback__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_audition_msgs
void
audition_msgs__action__CollectAtWaypoint_Feedback__Sequence__destroy(audition_msgs__action__CollectAtWaypoint_Feedback__Sequence * array);

/// Check for action/CollectAtWaypoint message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_audition_msgs
bool
audition_msgs__action__CollectAtWaypoint_Feedback__Sequence__are_equal(const audition_msgs__action__CollectAtWaypoint_Feedback__Sequence * lhs, const audition_msgs__action__CollectAtWaypoint_Feedback__Sequence * rhs);

/// Copy an array of action/CollectAtWaypoint messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_audition_msgs
bool
audition_msgs__action__CollectAtWaypoint_Feedback__Sequence__copy(
  const audition_msgs__action__CollectAtWaypoint_Feedback__Sequence * input,
  audition_msgs__action__CollectAtWaypoint_Feedback__Sequence * output);

/// Initialize action/CollectAtWaypoint message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * audition_msgs__action__CollectAtWaypoint_SendGoal_Request
 * )) before or use
 * audition_msgs__action__CollectAtWaypoint_SendGoal_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_audition_msgs
bool
audition_msgs__action__CollectAtWaypoint_SendGoal_Request__init(audition_msgs__action__CollectAtWaypoint_SendGoal_Request * msg);

/// Finalize action/CollectAtWaypoint message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_audition_msgs
void
audition_msgs__action__CollectAtWaypoint_SendGoal_Request__fini(audition_msgs__action__CollectAtWaypoint_SendGoal_Request * msg);

/// Create action/CollectAtWaypoint message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * audition_msgs__action__CollectAtWaypoint_SendGoal_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_audition_msgs
audition_msgs__action__CollectAtWaypoint_SendGoal_Request *
audition_msgs__action__CollectAtWaypoint_SendGoal_Request__create();

/// Destroy action/CollectAtWaypoint message.
/**
 * It calls
 * audition_msgs__action__CollectAtWaypoint_SendGoal_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_audition_msgs
void
audition_msgs__action__CollectAtWaypoint_SendGoal_Request__destroy(audition_msgs__action__CollectAtWaypoint_SendGoal_Request * msg);

/// Check for action/CollectAtWaypoint message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_audition_msgs
bool
audition_msgs__action__CollectAtWaypoint_SendGoal_Request__are_equal(const audition_msgs__action__CollectAtWaypoint_SendGoal_Request * lhs, const audition_msgs__action__CollectAtWaypoint_SendGoal_Request * rhs);

/// Copy a action/CollectAtWaypoint message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_audition_msgs
bool
audition_msgs__action__CollectAtWaypoint_SendGoal_Request__copy(
  const audition_msgs__action__CollectAtWaypoint_SendGoal_Request * input,
  audition_msgs__action__CollectAtWaypoint_SendGoal_Request * output);

/// Initialize array of action/CollectAtWaypoint messages.
/**
 * It allocates the memory for the number of elements and calls
 * audition_msgs__action__CollectAtWaypoint_SendGoal_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_audition_msgs
bool
audition_msgs__action__CollectAtWaypoint_SendGoal_Request__Sequence__init(audition_msgs__action__CollectAtWaypoint_SendGoal_Request__Sequence * array, size_t size);

/// Finalize array of action/CollectAtWaypoint messages.
/**
 * It calls
 * audition_msgs__action__CollectAtWaypoint_SendGoal_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_audition_msgs
void
audition_msgs__action__CollectAtWaypoint_SendGoal_Request__Sequence__fini(audition_msgs__action__CollectAtWaypoint_SendGoal_Request__Sequence * array);

/// Create array of action/CollectAtWaypoint messages.
/**
 * It allocates the memory for the array and calls
 * audition_msgs__action__CollectAtWaypoint_SendGoal_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_audition_msgs
audition_msgs__action__CollectAtWaypoint_SendGoal_Request__Sequence *
audition_msgs__action__CollectAtWaypoint_SendGoal_Request__Sequence__create(size_t size);

/// Destroy array of action/CollectAtWaypoint messages.
/**
 * It calls
 * audition_msgs__action__CollectAtWaypoint_SendGoal_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_audition_msgs
void
audition_msgs__action__CollectAtWaypoint_SendGoal_Request__Sequence__destroy(audition_msgs__action__CollectAtWaypoint_SendGoal_Request__Sequence * array);

/// Check for action/CollectAtWaypoint message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_audition_msgs
bool
audition_msgs__action__CollectAtWaypoint_SendGoal_Request__Sequence__are_equal(const audition_msgs__action__CollectAtWaypoint_SendGoal_Request__Sequence * lhs, const audition_msgs__action__CollectAtWaypoint_SendGoal_Request__Sequence * rhs);

/// Copy an array of action/CollectAtWaypoint messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_audition_msgs
bool
audition_msgs__action__CollectAtWaypoint_SendGoal_Request__Sequence__copy(
  const audition_msgs__action__CollectAtWaypoint_SendGoal_Request__Sequence * input,
  audition_msgs__action__CollectAtWaypoint_SendGoal_Request__Sequence * output);

/// Initialize action/CollectAtWaypoint message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * audition_msgs__action__CollectAtWaypoint_SendGoal_Response
 * )) before or use
 * audition_msgs__action__CollectAtWaypoint_SendGoal_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_audition_msgs
bool
audition_msgs__action__CollectAtWaypoint_SendGoal_Response__init(audition_msgs__action__CollectAtWaypoint_SendGoal_Response * msg);

/// Finalize action/CollectAtWaypoint message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_audition_msgs
void
audition_msgs__action__CollectAtWaypoint_SendGoal_Response__fini(audition_msgs__action__CollectAtWaypoint_SendGoal_Response * msg);

/// Create action/CollectAtWaypoint message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * audition_msgs__action__CollectAtWaypoint_SendGoal_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_audition_msgs
audition_msgs__action__CollectAtWaypoint_SendGoal_Response *
audition_msgs__action__CollectAtWaypoint_SendGoal_Response__create();

/// Destroy action/CollectAtWaypoint message.
/**
 * It calls
 * audition_msgs__action__CollectAtWaypoint_SendGoal_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_audition_msgs
void
audition_msgs__action__CollectAtWaypoint_SendGoal_Response__destroy(audition_msgs__action__CollectAtWaypoint_SendGoal_Response * msg);

/// Check for action/CollectAtWaypoint message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_audition_msgs
bool
audition_msgs__action__CollectAtWaypoint_SendGoal_Response__are_equal(const audition_msgs__action__CollectAtWaypoint_SendGoal_Response * lhs, const audition_msgs__action__CollectAtWaypoint_SendGoal_Response * rhs);

/// Copy a action/CollectAtWaypoint message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_audition_msgs
bool
audition_msgs__action__CollectAtWaypoint_SendGoal_Response__copy(
  const audition_msgs__action__CollectAtWaypoint_SendGoal_Response * input,
  audition_msgs__action__CollectAtWaypoint_SendGoal_Response * output);

/// Initialize array of action/CollectAtWaypoint messages.
/**
 * It allocates the memory for the number of elements and calls
 * audition_msgs__action__CollectAtWaypoint_SendGoal_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_audition_msgs
bool
audition_msgs__action__CollectAtWaypoint_SendGoal_Response__Sequence__init(audition_msgs__action__CollectAtWaypoint_SendGoal_Response__Sequence * array, size_t size);

/// Finalize array of action/CollectAtWaypoint messages.
/**
 * It calls
 * audition_msgs__action__CollectAtWaypoint_SendGoal_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_audition_msgs
void
audition_msgs__action__CollectAtWaypoint_SendGoal_Response__Sequence__fini(audition_msgs__action__CollectAtWaypoint_SendGoal_Response__Sequence * array);

/// Create array of action/CollectAtWaypoint messages.
/**
 * It allocates the memory for the array and calls
 * audition_msgs__action__CollectAtWaypoint_SendGoal_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_audition_msgs
audition_msgs__action__CollectAtWaypoint_SendGoal_Response__Sequence *
audition_msgs__action__CollectAtWaypoint_SendGoal_Response__Sequence__create(size_t size);

/// Destroy array of action/CollectAtWaypoint messages.
/**
 * It calls
 * audition_msgs__action__CollectAtWaypoint_SendGoal_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_audition_msgs
void
audition_msgs__action__CollectAtWaypoint_SendGoal_Response__Sequence__destroy(audition_msgs__action__CollectAtWaypoint_SendGoal_Response__Sequence * array);

/// Check for action/CollectAtWaypoint message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_audition_msgs
bool
audition_msgs__action__CollectAtWaypoint_SendGoal_Response__Sequence__are_equal(const audition_msgs__action__CollectAtWaypoint_SendGoal_Response__Sequence * lhs, const audition_msgs__action__CollectAtWaypoint_SendGoal_Response__Sequence * rhs);

/// Copy an array of action/CollectAtWaypoint messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_audition_msgs
bool
audition_msgs__action__CollectAtWaypoint_SendGoal_Response__Sequence__copy(
  const audition_msgs__action__CollectAtWaypoint_SendGoal_Response__Sequence * input,
  audition_msgs__action__CollectAtWaypoint_SendGoal_Response__Sequence * output);

/// Initialize action/CollectAtWaypoint message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * audition_msgs__action__CollectAtWaypoint_GetResult_Request
 * )) before or use
 * audition_msgs__action__CollectAtWaypoint_GetResult_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_audition_msgs
bool
audition_msgs__action__CollectAtWaypoint_GetResult_Request__init(audition_msgs__action__CollectAtWaypoint_GetResult_Request * msg);

/// Finalize action/CollectAtWaypoint message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_audition_msgs
void
audition_msgs__action__CollectAtWaypoint_GetResult_Request__fini(audition_msgs__action__CollectAtWaypoint_GetResult_Request * msg);

/// Create action/CollectAtWaypoint message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * audition_msgs__action__CollectAtWaypoint_GetResult_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_audition_msgs
audition_msgs__action__CollectAtWaypoint_GetResult_Request *
audition_msgs__action__CollectAtWaypoint_GetResult_Request__create();

/// Destroy action/CollectAtWaypoint message.
/**
 * It calls
 * audition_msgs__action__CollectAtWaypoint_GetResult_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_audition_msgs
void
audition_msgs__action__CollectAtWaypoint_GetResult_Request__destroy(audition_msgs__action__CollectAtWaypoint_GetResult_Request * msg);

/// Check for action/CollectAtWaypoint message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_audition_msgs
bool
audition_msgs__action__CollectAtWaypoint_GetResult_Request__are_equal(const audition_msgs__action__CollectAtWaypoint_GetResult_Request * lhs, const audition_msgs__action__CollectAtWaypoint_GetResult_Request * rhs);

/// Copy a action/CollectAtWaypoint message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_audition_msgs
bool
audition_msgs__action__CollectAtWaypoint_GetResult_Request__copy(
  const audition_msgs__action__CollectAtWaypoint_GetResult_Request * input,
  audition_msgs__action__CollectAtWaypoint_GetResult_Request * output);

/// Initialize array of action/CollectAtWaypoint messages.
/**
 * It allocates the memory for the number of elements and calls
 * audition_msgs__action__CollectAtWaypoint_GetResult_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_audition_msgs
bool
audition_msgs__action__CollectAtWaypoint_GetResult_Request__Sequence__init(audition_msgs__action__CollectAtWaypoint_GetResult_Request__Sequence * array, size_t size);

/// Finalize array of action/CollectAtWaypoint messages.
/**
 * It calls
 * audition_msgs__action__CollectAtWaypoint_GetResult_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_audition_msgs
void
audition_msgs__action__CollectAtWaypoint_GetResult_Request__Sequence__fini(audition_msgs__action__CollectAtWaypoint_GetResult_Request__Sequence * array);

/// Create array of action/CollectAtWaypoint messages.
/**
 * It allocates the memory for the array and calls
 * audition_msgs__action__CollectAtWaypoint_GetResult_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_audition_msgs
audition_msgs__action__CollectAtWaypoint_GetResult_Request__Sequence *
audition_msgs__action__CollectAtWaypoint_GetResult_Request__Sequence__create(size_t size);

/// Destroy array of action/CollectAtWaypoint messages.
/**
 * It calls
 * audition_msgs__action__CollectAtWaypoint_GetResult_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_audition_msgs
void
audition_msgs__action__CollectAtWaypoint_GetResult_Request__Sequence__destroy(audition_msgs__action__CollectAtWaypoint_GetResult_Request__Sequence * array);

/// Check for action/CollectAtWaypoint message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_audition_msgs
bool
audition_msgs__action__CollectAtWaypoint_GetResult_Request__Sequence__are_equal(const audition_msgs__action__CollectAtWaypoint_GetResult_Request__Sequence * lhs, const audition_msgs__action__CollectAtWaypoint_GetResult_Request__Sequence * rhs);

/// Copy an array of action/CollectAtWaypoint messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_audition_msgs
bool
audition_msgs__action__CollectAtWaypoint_GetResult_Request__Sequence__copy(
  const audition_msgs__action__CollectAtWaypoint_GetResult_Request__Sequence * input,
  audition_msgs__action__CollectAtWaypoint_GetResult_Request__Sequence * output);

/// Initialize action/CollectAtWaypoint message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * audition_msgs__action__CollectAtWaypoint_GetResult_Response
 * )) before or use
 * audition_msgs__action__CollectAtWaypoint_GetResult_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_audition_msgs
bool
audition_msgs__action__CollectAtWaypoint_GetResult_Response__init(audition_msgs__action__CollectAtWaypoint_GetResult_Response * msg);

/// Finalize action/CollectAtWaypoint message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_audition_msgs
void
audition_msgs__action__CollectAtWaypoint_GetResult_Response__fini(audition_msgs__action__CollectAtWaypoint_GetResult_Response * msg);

/// Create action/CollectAtWaypoint message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * audition_msgs__action__CollectAtWaypoint_GetResult_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_audition_msgs
audition_msgs__action__CollectAtWaypoint_GetResult_Response *
audition_msgs__action__CollectAtWaypoint_GetResult_Response__create();

/// Destroy action/CollectAtWaypoint message.
/**
 * It calls
 * audition_msgs__action__CollectAtWaypoint_GetResult_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_audition_msgs
void
audition_msgs__action__CollectAtWaypoint_GetResult_Response__destroy(audition_msgs__action__CollectAtWaypoint_GetResult_Response * msg);

/// Check for action/CollectAtWaypoint message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_audition_msgs
bool
audition_msgs__action__CollectAtWaypoint_GetResult_Response__are_equal(const audition_msgs__action__CollectAtWaypoint_GetResult_Response * lhs, const audition_msgs__action__CollectAtWaypoint_GetResult_Response * rhs);

/// Copy a action/CollectAtWaypoint message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_audition_msgs
bool
audition_msgs__action__CollectAtWaypoint_GetResult_Response__copy(
  const audition_msgs__action__CollectAtWaypoint_GetResult_Response * input,
  audition_msgs__action__CollectAtWaypoint_GetResult_Response * output);

/// Initialize array of action/CollectAtWaypoint messages.
/**
 * It allocates the memory for the number of elements and calls
 * audition_msgs__action__CollectAtWaypoint_GetResult_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_audition_msgs
bool
audition_msgs__action__CollectAtWaypoint_GetResult_Response__Sequence__init(audition_msgs__action__CollectAtWaypoint_GetResult_Response__Sequence * array, size_t size);

/// Finalize array of action/CollectAtWaypoint messages.
/**
 * It calls
 * audition_msgs__action__CollectAtWaypoint_GetResult_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_audition_msgs
void
audition_msgs__action__CollectAtWaypoint_GetResult_Response__Sequence__fini(audition_msgs__action__CollectAtWaypoint_GetResult_Response__Sequence * array);

/// Create array of action/CollectAtWaypoint messages.
/**
 * It allocates the memory for the array and calls
 * audition_msgs__action__CollectAtWaypoint_GetResult_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_audition_msgs
audition_msgs__action__CollectAtWaypoint_GetResult_Response__Sequence *
audition_msgs__action__CollectAtWaypoint_GetResult_Response__Sequence__create(size_t size);

/// Destroy array of action/CollectAtWaypoint messages.
/**
 * It calls
 * audition_msgs__action__CollectAtWaypoint_GetResult_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_audition_msgs
void
audition_msgs__action__CollectAtWaypoint_GetResult_Response__Sequence__destroy(audition_msgs__action__CollectAtWaypoint_GetResult_Response__Sequence * array);

/// Check for action/CollectAtWaypoint message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_audition_msgs
bool
audition_msgs__action__CollectAtWaypoint_GetResult_Response__Sequence__are_equal(const audition_msgs__action__CollectAtWaypoint_GetResult_Response__Sequence * lhs, const audition_msgs__action__CollectAtWaypoint_GetResult_Response__Sequence * rhs);

/// Copy an array of action/CollectAtWaypoint messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_audition_msgs
bool
audition_msgs__action__CollectAtWaypoint_GetResult_Response__Sequence__copy(
  const audition_msgs__action__CollectAtWaypoint_GetResult_Response__Sequence * input,
  audition_msgs__action__CollectAtWaypoint_GetResult_Response__Sequence * output);

/// Initialize action/CollectAtWaypoint message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * audition_msgs__action__CollectAtWaypoint_FeedbackMessage
 * )) before or use
 * audition_msgs__action__CollectAtWaypoint_FeedbackMessage__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_audition_msgs
bool
audition_msgs__action__CollectAtWaypoint_FeedbackMessage__init(audition_msgs__action__CollectAtWaypoint_FeedbackMessage * msg);

/// Finalize action/CollectAtWaypoint message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_audition_msgs
void
audition_msgs__action__CollectAtWaypoint_FeedbackMessage__fini(audition_msgs__action__CollectAtWaypoint_FeedbackMessage * msg);

/// Create action/CollectAtWaypoint message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * audition_msgs__action__CollectAtWaypoint_FeedbackMessage__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_audition_msgs
audition_msgs__action__CollectAtWaypoint_FeedbackMessage *
audition_msgs__action__CollectAtWaypoint_FeedbackMessage__create();

/// Destroy action/CollectAtWaypoint message.
/**
 * It calls
 * audition_msgs__action__CollectAtWaypoint_FeedbackMessage__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_audition_msgs
void
audition_msgs__action__CollectAtWaypoint_FeedbackMessage__destroy(audition_msgs__action__CollectAtWaypoint_FeedbackMessage * msg);

/// Check for action/CollectAtWaypoint message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_audition_msgs
bool
audition_msgs__action__CollectAtWaypoint_FeedbackMessage__are_equal(const audition_msgs__action__CollectAtWaypoint_FeedbackMessage * lhs, const audition_msgs__action__CollectAtWaypoint_FeedbackMessage * rhs);

/// Copy a action/CollectAtWaypoint message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_audition_msgs
bool
audition_msgs__action__CollectAtWaypoint_FeedbackMessage__copy(
  const audition_msgs__action__CollectAtWaypoint_FeedbackMessage * input,
  audition_msgs__action__CollectAtWaypoint_FeedbackMessage * output);

/// Initialize array of action/CollectAtWaypoint messages.
/**
 * It allocates the memory for the number of elements and calls
 * audition_msgs__action__CollectAtWaypoint_FeedbackMessage__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_audition_msgs
bool
audition_msgs__action__CollectAtWaypoint_FeedbackMessage__Sequence__init(audition_msgs__action__CollectAtWaypoint_FeedbackMessage__Sequence * array, size_t size);

/// Finalize array of action/CollectAtWaypoint messages.
/**
 * It calls
 * audition_msgs__action__CollectAtWaypoint_FeedbackMessage__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_audition_msgs
void
audition_msgs__action__CollectAtWaypoint_FeedbackMessage__Sequence__fini(audition_msgs__action__CollectAtWaypoint_FeedbackMessage__Sequence * array);

/// Create array of action/CollectAtWaypoint messages.
/**
 * It allocates the memory for the array and calls
 * audition_msgs__action__CollectAtWaypoint_FeedbackMessage__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_audition_msgs
audition_msgs__action__CollectAtWaypoint_FeedbackMessage__Sequence *
audition_msgs__action__CollectAtWaypoint_FeedbackMessage__Sequence__create(size_t size);

/// Destroy array of action/CollectAtWaypoint messages.
/**
 * It calls
 * audition_msgs__action__CollectAtWaypoint_FeedbackMessage__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_audition_msgs
void
audition_msgs__action__CollectAtWaypoint_FeedbackMessage__Sequence__destroy(audition_msgs__action__CollectAtWaypoint_FeedbackMessage__Sequence * array);

/// Check for action/CollectAtWaypoint message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_audition_msgs
bool
audition_msgs__action__CollectAtWaypoint_FeedbackMessage__Sequence__are_equal(const audition_msgs__action__CollectAtWaypoint_FeedbackMessage__Sequence * lhs, const audition_msgs__action__CollectAtWaypoint_FeedbackMessage__Sequence * rhs);

/// Copy an array of action/CollectAtWaypoint messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_audition_msgs
bool
audition_msgs__action__CollectAtWaypoint_FeedbackMessage__Sequence__copy(
  const audition_msgs__action__CollectAtWaypoint_FeedbackMessage__Sequence * input,
  audition_msgs__action__CollectAtWaypoint_FeedbackMessage__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // AUDITION_MSGS__ACTION__DETAIL__COLLECT_AT_WAYPOINT__FUNCTIONS_H_
