// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from bosdyn_msgs:msg/ListStoredImagesRequest.idl
// generated code does not contain a copyright notice
#include "bosdyn_msgs/msg/detail/list_stored_images_request__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "bosdyn_msgs/msg/detail/request_header__functions.h"
// Member `query`
#include "bosdyn_msgs/msg/detail/data_query_params__functions.h"

bool
bosdyn_msgs__msg__ListStoredImagesRequest__init(bosdyn_msgs__msg__ListStoredImagesRequest * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!bosdyn_msgs__msg__RequestHeader__init(&msg->header)) {
    bosdyn_msgs__msg__ListStoredImagesRequest__fini(msg);
    return false;
  }
  // header_is_set
  // query
  if (!bosdyn_msgs__msg__DataQueryParams__init(&msg->query)) {
    bosdyn_msgs__msg__ListStoredImagesRequest__fini(msg);
    return false;
  }
  // query_is_set
  return true;
}

void
bosdyn_msgs__msg__ListStoredImagesRequest__fini(bosdyn_msgs__msg__ListStoredImagesRequest * msg)
{
  if (!msg) {
    return;
  }
  // header
  bosdyn_msgs__msg__RequestHeader__fini(&msg->header);
  // header_is_set
  // query
  bosdyn_msgs__msg__DataQueryParams__fini(&msg->query);
  // query_is_set
}

bool
bosdyn_msgs__msg__ListStoredImagesRequest__are_equal(const bosdyn_msgs__msg__ListStoredImagesRequest * lhs, const bosdyn_msgs__msg__ListStoredImagesRequest * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // header
  if (!bosdyn_msgs__msg__RequestHeader__are_equal(
      &(lhs->header), &(rhs->header)))
  {
    return false;
  }
  // header_is_set
  if (lhs->header_is_set != rhs->header_is_set) {
    return false;
  }
  // query
  if (!bosdyn_msgs__msg__DataQueryParams__are_equal(
      &(lhs->query), &(rhs->query)))
  {
    return false;
  }
  // query_is_set
  if (lhs->query_is_set != rhs->query_is_set) {
    return false;
  }
  return true;
}

bool
bosdyn_msgs__msg__ListStoredImagesRequest__copy(
  const bosdyn_msgs__msg__ListStoredImagesRequest * input,
  bosdyn_msgs__msg__ListStoredImagesRequest * output)
{
  if (!input || !output) {
    return false;
  }
  // header
  if (!bosdyn_msgs__msg__RequestHeader__copy(
      &(input->header), &(output->header)))
  {
    return false;
  }
  // header_is_set
  output->header_is_set = input->header_is_set;
  // query
  if (!bosdyn_msgs__msg__DataQueryParams__copy(
      &(input->query), &(output->query)))
  {
    return false;
  }
  // query_is_set
  output->query_is_set = input->query_is_set;
  return true;
}

bosdyn_msgs__msg__ListStoredImagesRequest *
bosdyn_msgs__msg__ListStoredImagesRequest__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__ListStoredImagesRequest * msg = (bosdyn_msgs__msg__ListStoredImagesRequest *)allocator.allocate(sizeof(bosdyn_msgs__msg__ListStoredImagesRequest), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(bosdyn_msgs__msg__ListStoredImagesRequest));
  bool success = bosdyn_msgs__msg__ListStoredImagesRequest__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
bosdyn_msgs__msg__ListStoredImagesRequest__destroy(bosdyn_msgs__msg__ListStoredImagesRequest * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    bosdyn_msgs__msg__ListStoredImagesRequest__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
bosdyn_msgs__msg__ListStoredImagesRequest__Sequence__init(bosdyn_msgs__msg__ListStoredImagesRequest__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__ListStoredImagesRequest * data = NULL;

  if (size) {
    data = (bosdyn_msgs__msg__ListStoredImagesRequest *)allocator.zero_allocate(size, sizeof(bosdyn_msgs__msg__ListStoredImagesRequest), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = bosdyn_msgs__msg__ListStoredImagesRequest__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        bosdyn_msgs__msg__ListStoredImagesRequest__fini(&data[i - 1]);
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
bosdyn_msgs__msg__ListStoredImagesRequest__Sequence__fini(bosdyn_msgs__msg__ListStoredImagesRequest__Sequence * array)
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
      bosdyn_msgs__msg__ListStoredImagesRequest__fini(&array->data[i]);
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

bosdyn_msgs__msg__ListStoredImagesRequest__Sequence *
bosdyn_msgs__msg__ListStoredImagesRequest__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__ListStoredImagesRequest__Sequence * array = (bosdyn_msgs__msg__ListStoredImagesRequest__Sequence *)allocator.allocate(sizeof(bosdyn_msgs__msg__ListStoredImagesRequest__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = bosdyn_msgs__msg__ListStoredImagesRequest__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
bosdyn_msgs__msg__ListStoredImagesRequest__Sequence__destroy(bosdyn_msgs__msg__ListStoredImagesRequest__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    bosdyn_msgs__msg__ListStoredImagesRequest__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
bosdyn_msgs__msg__ListStoredImagesRequest__Sequence__are_equal(const bosdyn_msgs__msg__ListStoredImagesRequest__Sequence * lhs, const bosdyn_msgs__msg__ListStoredImagesRequest__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!bosdyn_msgs__msg__ListStoredImagesRequest__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
bosdyn_msgs__msg__ListStoredImagesRequest__Sequence__copy(
  const bosdyn_msgs__msg__ListStoredImagesRequest__Sequence * input,
  bosdyn_msgs__msg__ListStoredImagesRequest__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(bosdyn_msgs__msg__ListStoredImagesRequest);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    bosdyn_msgs__msg__ListStoredImagesRequest * data =
      (bosdyn_msgs__msg__ListStoredImagesRequest *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!bosdyn_msgs__msg__ListStoredImagesRequest__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          bosdyn_msgs__msg__ListStoredImagesRequest__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!bosdyn_msgs__msg__ListStoredImagesRequest__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}