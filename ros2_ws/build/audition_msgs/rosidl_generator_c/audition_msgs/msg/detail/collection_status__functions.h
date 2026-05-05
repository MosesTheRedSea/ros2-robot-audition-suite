// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from audition_msgs:msg/CollectionStatus.idl
// generated code does not contain a copyright notice

#ifndef AUDITION_MSGS__MSG__DETAIL__COLLECTION_STATUS__FUNCTIONS_H_
#define AUDITION_MSGS__MSG__DETAIL__COLLECTION_STATUS__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "audition_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "audition_msgs/msg/detail/collection_status__struct.h"

/// Initialize msg/CollectionStatus message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * audition_msgs__msg__CollectionStatus
 * )) before or use
 * audition_msgs__msg__CollectionStatus__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_audition_msgs
bool
audition_msgs__msg__CollectionStatus__init(audition_msgs__msg__CollectionStatus * msg);

/// Finalize msg/CollectionStatus message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_audition_msgs
void
audition_msgs__msg__CollectionStatus__fini(audition_msgs__msg__CollectionStatus * msg);

/// Create msg/CollectionStatus message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * audition_msgs__msg__CollectionStatus__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_audition_msgs
audition_msgs__msg__CollectionStatus *
audition_msgs__msg__CollectionStatus__create();

/// Destroy msg/CollectionStatus message.
/**
 * It calls
 * audition_msgs__msg__CollectionStatus__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_audition_msgs
void
audition_msgs__msg__CollectionStatus__destroy(audition_msgs__msg__CollectionStatus * msg);

/// Check for msg/CollectionStatus message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_audition_msgs
bool
audition_msgs__msg__CollectionStatus__are_equal(const audition_msgs__msg__CollectionStatus * lhs, const audition_msgs__msg__CollectionStatus * rhs);

/// Copy a msg/CollectionStatus message.
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
audition_msgs__msg__CollectionStatus__copy(
  const audition_msgs__msg__CollectionStatus * input,
  audition_msgs__msg__CollectionStatus * output);

/// Initialize array of msg/CollectionStatus messages.
/**
 * It allocates the memory for the number of elements and calls
 * audition_msgs__msg__CollectionStatus__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_audition_msgs
bool
audition_msgs__msg__CollectionStatus__Sequence__init(audition_msgs__msg__CollectionStatus__Sequence * array, size_t size);

/// Finalize array of msg/CollectionStatus messages.
/**
 * It calls
 * audition_msgs__msg__CollectionStatus__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_audition_msgs
void
audition_msgs__msg__CollectionStatus__Sequence__fini(audition_msgs__msg__CollectionStatus__Sequence * array);

/// Create array of msg/CollectionStatus messages.
/**
 * It allocates the memory for the array and calls
 * audition_msgs__msg__CollectionStatus__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_audition_msgs
audition_msgs__msg__CollectionStatus__Sequence *
audition_msgs__msg__CollectionStatus__Sequence__create(size_t size);

/// Destroy array of msg/CollectionStatus messages.
/**
 * It calls
 * audition_msgs__msg__CollectionStatus__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_audition_msgs
void
audition_msgs__msg__CollectionStatus__Sequence__destroy(audition_msgs__msg__CollectionStatus__Sequence * array);

/// Check for msg/CollectionStatus message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_audition_msgs
bool
audition_msgs__msg__CollectionStatus__Sequence__are_equal(const audition_msgs__msg__CollectionStatus__Sequence * lhs, const audition_msgs__msg__CollectionStatus__Sequence * rhs);

/// Copy an array of msg/CollectionStatus messages.
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
audition_msgs__msg__CollectionStatus__Sequence__copy(
  const audition_msgs__msg__CollectionStatus__Sequence * input,
  audition_msgs__msg__CollectionStatus__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // AUDITION_MSGS__MSG__DETAIL__COLLECTION_STATUS__FUNCTIONS_H_
