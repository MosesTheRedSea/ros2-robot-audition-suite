// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from audition_msgs:msg/CollectionStatus.idl
// generated code does not contain a copyright notice
#include "audition_msgs/msg/detail/collection_status__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `current_waypoint_label`
// Member `state`
#include "rosidl_runtime_c/string_functions.h"

bool
audition_msgs__msg__CollectionStatus__init(audition_msgs__msg__CollectionStatus * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    audition_msgs__msg__CollectionStatus__fini(msg);
    return false;
  }
  // current_waypoint_id
  // current_waypoint_label
  if (!rosidl_runtime_c__String__init(&msg->current_waypoint_label)) {
    audition_msgs__msg__CollectionStatus__fini(msg);
    return false;
  }
  // state
  if (!rosidl_runtime_c__String__init(&msg->state)) {
    audition_msgs__msg__CollectionStatus__fini(msg);
    return false;
  }
  // recording
  // total_waypoints
  // completed_waypoints
  return true;
}

void
audition_msgs__msg__CollectionStatus__fini(audition_msgs__msg__CollectionStatus * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // current_waypoint_id
  // current_waypoint_label
  rosidl_runtime_c__String__fini(&msg->current_waypoint_label);
  // state
  rosidl_runtime_c__String__fini(&msg->state);
  // recording
  // total_waypoints
  // completed_waypoints
}

bool
audition_msgs__msg__CollectionStatus__are_equal(const audition_msgs__msg__CollectionStatus * lhs, const audition_msgs__msg__CollectionStatus * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__are_equal(
      &(lhs->header), &(rhs->header)))
  {
    return false;
  }
  // current_waypoint_id
  if (lhs->current_waypoint_id != rhs->current_waypoint_id) {
    return false;
  }
  // current_waypoint_label
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->current_waypoint_label), &(rhs->current_waypoint_label)))
  {
    return false;
  }
  // state
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->state), &(rhs->state)))
  {
    return false;
  }
  // recording
  if (lhs->recording != rhs->recording) {
    return false;
  }
  // total_waypoints
  if (lhs->total_waypoints != rhs->total_waypoints) {
    return false;
  }
  // completed_waypoints
  if (lhs->completed_waypoints != rhs->completed_waypoints) {
    return false;
  }
  return true;
}

bool
audition_msgs__msg__CollectionStatus__copy(
  const audition_msgs__msg__CollectionStatus * input,
  audition_msgs__msg__CollectionStatus * output)
{
  if (!input || !output) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__copy(
      &(input->header), &(output->header)))
  {
    return false;
  }
  // current_waypoint_id
  output->current_waypoint_id = input->current_waypoint_id;
  // current_waypoint_label
  if (!rosidl_runtime_c__String__copy(
      &(input->current_waypoint_label), &(output->current_waypoint_label)))
  {
    return false;
  }
  // state
  if (!rosidl_runtime_c__String__copy(
      &(input->state), &(output->state)))
  {
    return false;
  }
  // recording
  output->recording = input->recording;
  // total_waypoints
  output->total_waypoints = input->total_waypoints;
  // completed_waypoints
  output->completed_waypoints = input->completed_waypoints;
  return true;
}

audition_msgs__msg__CollectionStatus *
audition_msgs__msg__CollectionStatus__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  audition_msgs__msg__CollectionStatus * msg = (audition_msgs__msg__CollectionStatus *)allocator.allocate(sizeof(audition_msgs__msg__CollectionStatus), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(audition_msgs__msg__CollectionStatus));
  bool success = audition_msgs__msg__CollectionStatus__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
audition_msgs__msg__CollectionStatus__destroy(audition_msgs__msg__CollectionStatus * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    audition_msgs__msg__CollectionStatus__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
audition_msgs__msg__CollectionStatus__Sequence__init(audition_msgs__msg__CollectionStatus__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  audition_msgs__msg__CollectionStatus * data = NULL;

  if (size) {
    data = (audition_msgs__msg__CollectionStatus *)allocator.zero_allocate(size, sizeof(audition_msgs__msg__CollectionStatus), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = audition_msgs__msg__CollectionStatus__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        audition_msgs__msg__CollectionStatus__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
audition_msgs__msg__CollectionStatus__Sequence__fini(audition_msgs__msg__CollectionStatus__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      audition_msgs__msg__CollectionStatus__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

audition_msgs__msg__CollectionStatus__Sequence *
audition_msgs__msg__CollectionStatus__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  audition_msgs__msg__CollectionStatus__Sequence * array = (audition_msgs__msg__CollectionStatus__Sequence *)allocator.allocate(sizeof(audition_msgs__msg__CollectionStatus__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = audition_msgs__msg__CollectionStatus__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
audition_msgs__msg__CollectionStatus__Sequence__destroy(audition_msgs__msg__CollectionStatus__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    audition_msgs__msg__CollectionStatus__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
audition_msgs__msg__CollectionStatus__Sequence__are_equal(const audition_msgs__msg__CollectionStatus__Sequence * lhs, const audition_msgs__msg__CollectionStatus__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!audition_msgs__msg__CollectionStatus__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
audition_msgs__msg__CollectionStatus__Sequence__copy(
  const audition_msgs__msg__CollectionStatus__Sequence * input,
  audition_msgs__msg__CollectionStatus__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(audition_msgs__msg__CollectionStatus);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    audition_msgs__msg__CollectionStatus * data =
      (audition_msgs__msg__CollectionStatus *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!audition_msgs__msg__CollectionStatus__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          audition_msgs__msg__CollectionStatus__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!audition_msgs__msg__CollectionStatus__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
