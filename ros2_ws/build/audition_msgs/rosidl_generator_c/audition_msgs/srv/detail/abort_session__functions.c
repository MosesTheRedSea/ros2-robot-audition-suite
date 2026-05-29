// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from audition_msgs:srv/AbortSession.idl
// generated code does not contain a copyright notice
#include "audition_msgs/srv/detail/abort_session__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

// Include directives for member types
// Member `reason`
#include "rosidl_runtime_c/string_functions.h"

bool
audition_msgs__srv__AbortSession_Request__init(audition_msgs__srv__AbortSession_Request * msg)
{
  if (!msg) {
    return false;
  }
  // reason
  if (!rosidl_runtime_c__String__init(&msg->reason)) {
    audition_msgs__srv__AbortSession_Request__fini(msg);
    return false;
  }
  return true;
}

void
audition_msgs__srv__AbortSession_Request__fini(audition_msgs__srv__AbortSession_Request * msg)
{
  if (!msg) {
    return;
  }
  // reason
  rosidl_runtime_c__String__fini(&msg->reason);
}

bool
audition_msgs__srv__AbortSession_Request__are_equal(const audition_msgs__srv__AbortSession_Request * lhs, const audition_msgs__srv__AbortSession_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // reason
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->reason), &(rhs->reason)))
  {
    return false;
  }
  return true;
}

bool
audition_msgs__srv__AbortSession_Request__copy(
  const audition_msgs__srv__AbortSession_Request * input,
  audition_msgs__srv__AbortSession_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // reason
  if (!rosidl_runtime_c__String__copy(
      &(input->reason), &(output->reason)))
  {
    return false;
  }
  return true;
}

audition_msgs__srv__AbortSession_Request *
audition_msgs__srv__AbortSession_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  audition_msgs__srv__AbortSession_Request * msg = (audition_msgs__srv__AbortSession_Request *)allocator.allocate(sizeof(audition_msgs__srv__AbortSession_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(audition_msgs__srv__AbortSession_Request));
  bool success = audition_msgs__srv__AbortSession_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
audition_msgs__srv__AbortSession_Request__destroy(audition_msgs__srv__AbortSession_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    audition_msgs__srv__AbortSession_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
audition_msgs__srv__AbortSession_Request__Sequence__init(audition_msgs__srv__AbortSession_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  audition_msgs__srv__AbortSession_Request * data = NULL;

  if (size) {
    data = (audition_msgs__srv__AbortSession_Request *)allocator.zero_allocate(size, sizeof(audition_msgs__srv__AbortSession_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = audition_msgs__srv__AbortSession_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        audition_msgs__srv__AbortSession_Request__fini(&data[i - 1]);
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
audition_msgs__srv__AbortSession_Request__Sequence__fini(audition_msgs__srv__AbortSession_Request__Sequence * array)
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
      audition_msgs__srv__AbortSession_Request__fini(&array->data[i]);
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

audition_msgs__srv__AbortSession_Request__Sequence *
audition_msgs__srv__AbortSession_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  audition_msgs__srv__AbortSession_Request__Sequence * array = (audition_msgs__srv__AbortSession_Request__Sequence *)allocator.allocate(sizeof(audition_msgs__srv__AbortSession_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = audition_msgs__srv__AbortSession_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
audition_msgs__srv__AbortSession_Request__Sequence__destroy(audition_msgs__srv__AbortSession_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    audition_msgs__srv__AbortSession_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
audition_msgs__srv__AbortSession_Request__Sequence__are_equal(const audition_msgs__srv__AbortSession_Request__Sequence * lhs, const audition_msgs__srv__AbortSession_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!audition_msgs__srv__AbortSession_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
audition_msgs__srv__AbortSession_Request__Sequence__copy(
  const audition_msgs__srv__AbortSession_Request__Sequence * input,
  audition_msgs__srv__AbortSession_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(audition_msgs__srv__AbortSession_Request);
    audition_msgs__srv__AbortSession_Request * data =
      (audition_msgs__srv__AbortSession_Request *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!audition_msgs__srv__AbortSession_Request__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          audition_msgs__srv__AbortSession_Request__fini(&data[i]);
        }
        free(data);
        return false;
      }
    }
    output->data = data;
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!audition_msgs__srv__AbortSession_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `message`
// already included above
// #include "rosidl_runtime_c/string_functions.h"

bool
audition_msgs__srv__AbortSession_Response__init(audition_msgs__srv__AbortSession_Response * msg)
{
  if (!msg) {
    return false;
  }
  // accepted
  // message
  if (!rosidl_runtime_c__String__init(&msg->message)) {
    audition_msgs__srv__AbortSession_Response__fini(msg);
    return false;
  }
  return true;
}

void
audition_msgs__srv__AbortSession_Response__fini(audition_msgs__srv__AbortSession_Response * msg)
{
  if (!msg) {
    return;
  }
  // accepted
  // message
  rosidl_runtime_c__String__fini(&msg->message);
}

bool
audition_msgs__srv__AbortSession_Response__are_equal(const audition_msgs__srv__AbortSession_Response * lhs, const audition_msgs__srv__AbortSession_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // accepted
  if (lhs->accepted != rhs->accepted) {
    return false;
  }
  // message
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->message), &(rhs->message)))
  {
    return false;
  }
  return true;
}

bool
audition_msgs__srv__AbortSession_Response__copy(
  const audition_msgs__srv__AbortSession_Response * input,
  audition_msgs__srv__AbortSession_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // accepted
  output->accepted = input->accepted;
  // message
  if (!rosidl_runtime_c__String__copy(
      &(input->message), &(output->message)))
  {
    return false;
  }
  return true;
}

audition_msgs__srv__AbortSession_Response *
audition_msgs__srv__AbortSession_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  audition_msgs__srv__AbortSession_Response * msg = (audition_msgs__srv__AbortSession_Response *)allocator.allocate(sizeof(audition_msgs__srv__AbortSession_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(audition_msgs__srv__AbortSession_Response));
  bool success = audition_msgs__srv__AbortSession_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
audition_msgs__srv__AbortSession_Response__destroy(audition_msgs__srv__AbortSession_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    audition_msgs__srv__AbortSession_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
audition_msgs__srv__AbortSession_Response__Sequence__init(audition_msgs__srv__AbortSession_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  audition_msgs__srv__AbortSession_Response * data = NULL;

  if (size) {
    data = (audition_msgs__srv__AbortSession_Response *)allocator.zero_allocate(size, sizeof(audition_msgs__srv__AbortSession_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = audition_msgs__srv__AbortSession_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        audition_msgs__srv__AbortSession_Response__fini(&data[i - 1]);
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
audition_msgs__srv__AbortSession_Response__Sequence__fini(audition_msgs__srv__AbortSession_Response__Sequence * array)
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
      audition_msgs__srv__AbortSession_Response__fini(&array->data[i]);
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

audition_msgs__srv__AbortSession_Response__Sequence *
audition_msgs__srv__AbortSession_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  audition_msgs__srv__AbortSession_Response__Sequence * array = (audition_msgs__srv__AbortSession_Response__Sequence *)allocator.allocate(sizeof(audition_msgs__srv__AbortSession_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = audition_msgs__srv__AbortSession_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
audition_msgs__srv__AbortSession_Response__Sequence__destroy(audition_msgs__srv__AbortSession_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    audition_msgs__srv__AbortSession_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
audition_msgs__srv__AbortSession_Response__Sequence__are_equal(const audition_msgs__srv__AbortSession_Response__Sequence * lhs, const audition_msgs__srv__AbortSession_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!audition_msgs__srv__AbortSession_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
audition_msgs__srv__AbortSession_Response__Sequence__copy(
  const audition_msgs__srv__AbortSession_Response__Sequence * input,
  audition_msgs__srv__AbortSession_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(audition_msgs__srv__AbortSession_Response);
    audition_msgs__srv__AbortSession_Response * data =
      (audition_msgs__srv__AbortSession_Response *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!audition_msgs__srv__AbortSession_Response__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          audition_msgs__srv__AbortSession_Response__fini(&data[i]);
        }
        free(data);
        return false;
      }
    }
    output->data = data;
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!audition_msgs__srv__AbortSession_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
