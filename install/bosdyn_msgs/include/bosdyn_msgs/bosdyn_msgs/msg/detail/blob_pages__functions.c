// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from bosdyn_msgs:msg/BlobPages.idl
// generated code does not contain a copyright notice
#include "bosdyn_msgs/msg/detail/blob_pages__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `time_range`
#include "bosdyn_msgs/msg/detail/time_range__functions.h"
// Member `pages`
#include "bosdyn_msgs/msg/detail/blob_page__functions.h"

bool
bosdyn_msgs__msg__BlobPages__init(bosdyn_msgs__msg__BlobPages * msg)
{
  if (!msg) {
    return false;
  }
  // time_range
  if (!bosdyn_msgs__msg__TimeRange__init(&msg->time_range)) {
    bosdyn_msgs__msg__BlobPages__fini(msg);
    return false;
  }
  // time_range_is_set
  // pages
  if (!bosdyn_msgs__msg__BlobPage__Sequence__init(&msg->pages, 0)) {
    bosdyn_msgs__msg__BlobPages__fini(msg);
    return false;
  }
  return true;
}

void
bosdyn_msgs__msg__BlobPages__fini(bosdyn_msgs__msg__BlobPages * msg)
{
  if (!msg) {
    return;
  }
  // time_range
  bosdyn_msgs__msg__TimeRange__fini(&msg->time_range);
  // time_range_is_set
  // pages
  bosdyn_msgs__msg__BlobPage__Sequence__fini(&msg->pages);
}

bool
bosdyn_msgs__msg__BlobPages__are_equal(const bosdyn_msgs__msg__BlobPages * lhs, const bosdyn_msgs__msg__BlobPages * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // time_range
  if (!bosdyn_msgs__msg__TimeRange__are_equal(
      &(lhs->time_range), &(rhs->time_range)))
  {
    return false;
  }
  // time_range_is_set
  if (lhs->time_range_is_set != rhs->time_range_is_set) {
    return false;
  }
  // pages
  if (!bosdyn_msgs__msg__BlobPage__Sequence__are_equal(
      &(lhs->pages), &(rhs->pages)))
  {
    return false;
  }
  return true;
}

bool
bosdyn_msgs__msg__BlobPages__copy(
  const bosdyn_msgs__msg__BlobPages * input,
  bosdyn_msgs__msg__BlobPages * output)
{
  if (!input || !output) {
    return false;
  }
  // time_range
  if (!bosdyn_msgs__msg__TimeRange__copy(
      &(input->time_range), &(output->time_range)))
  {
    return false;
  }
  // time_range_is_set
  output->time_range_is_set = input->time_range_is_set;
  // pages
  if (!bosdyn_msgs__msg__BlobPage__Sequence__copy(
      &(input->pages), &(output->pages)))
  {
    return false;
  }
  return true;
}

bosdyn_msgs__msg__BlobPages *
bosdyn_msgs__msg__BlobPages__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__BlobPages * msg = (bosdyn_msgs__msg__BlobPages *)allocator.allocate(sizeof(bosdyn_msgs__msg__BlobPages), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(bosdyn_msgs__msg__BlobPages));
  bool success = bosdyn_msgs__msg__BlobPages__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
bosdyn_msgs__msg__BlobPages__destroy(bosdyn_msgs__msg__BlobPages * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    bosdyn_msgs__msg__BlobPages__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
bosdyn_msgs__msg__BlobPages__Sequence__init(bosdyn_msgs__msg__BlobPages__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__BlobPages * data = NULL;

  if (size) {
    data = (bosdyn_msgs__msg__BlobPages *)allocator.zero_allocate(size, sizeof(bosdyn_msgs__msg__BlobPages), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = bosdyn_msgs__msg__BlobPages__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        bosdyn_msgs__msg__BlobPages__fini(&data[i - 1]);
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
bosdyn_msgs__msg__BlobPages__Sequence__fini(bosdyn_msgs__msg__BlobPages__Sequence * array)
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
      bosdyn_msgs__msg__BlobPages__fini(&array->data[i]);
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

bosdyn_msgs__msg__BlobPages__Sequence *
bosdyn_msgs__msg__BlobPages__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__BlobPages__Sequence * array = (bosdyn_msgs__msg__BlobPages__Sequence *)allocator.allocate(sizeof(bosdyn_msgs__msg__BlobPages__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = bosdyn_msgs__msg__BlobPages__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
bosdyn_msgs__msg__BlobPages__Sequence__destroy(bosdyn_msgs__msg__BlobPages__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    bosdyn_msgs__msg__BlobPages__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
bosdyn_msgs__msg__BlobPages__Sequence__are_equal(const bosdyn_msgs__msg__BlobPages__Sequence * lhs, const bosdyn_msgs__msg__BlobPages__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!bosdyn_msgs__msg__BlobPages__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
bosdyn_msgs__msg__BlobPages__Sequence__copy(
  const bosdyn_msgs__msg__BlobPages__Sequence * input,
  bosdyn_msgs__msg__BlobPages__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(bosdyn_msgs__msg__BlobPages);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    bosdyn_msgs__msg__BlobPages * data =
      (bosdyn_msgs__msg__BlobPages *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!bosdyn_msgs__msg__BlobPages__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          bosdyn_msgs__msg__BlobPages__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!bosdyn_msgs__msg__BlobPages__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}