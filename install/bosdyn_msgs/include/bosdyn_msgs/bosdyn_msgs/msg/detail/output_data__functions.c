// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from bosdyn_msgs:msg/OutputData.idl
// generated code does not contain a copyright notice
#include "bosdyn_msgs/msg/detail/output_data__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `object_in_image`
#include "bosdyn_msgs/msg/detail/world_object__functions.h"
// Member `alert_data`
#include "bosdyn_msgs/msg/detail/alert_data__functions.h"

bool
bosdyn_msgs__msg__OutputData__init(bosdyn_msgs__msg__OutputData * msg)
{
  if (!msg) {
    return false;
  }
  // object_in_image
  if (!bosdyn_msgs__msg__WorldObject__Sequence__init(&msg->object_in_image, 0)) {
    bosdyn_msgs__msg__OutputData__fini(msg);
    return false;
  }
  // alert_data
  if (!bosdyn_msgs__msg__AlertData__init(&msg->alert_data)) {
    bosdyn_msgs__msg__OutputData__fini(msg);
    return false;
  }
  // alert_data_is_set
  return true;
}

void
bosdyn_msgs__msg__OutputData__fini(bosdyn_msgs__msg__OutputData * msg)
{
  if (!msg) {
    return;
  }
  // object_in_image
  bosdyn_msgs__msg__WorldObject__Sequence__fini(&msg->object_in_image);
  // alert_data
  bosdyn_msgs__msg__AlertData__fini(&msg->alert_data);
  // alert_data_is_set
}

bool
bosdyn_msgs__msg__OutputData__are_equal(const bosdyn_msgs__msg__OutputData * lhs, const bosdyn_msgs__msg__OutputData * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // object_in_image
  if (!bosdyn_msgs__msg__WorldObject__Sequence__are_equal(
      &(lhs->object_in_image), &(rhs->object_in_image)))
  {
    return false;
  }
  // alert_data
  if (!bosdyn_msgs__msg__AlertData__are_equal(
      &(lhs->alert_data), &(rhs->alert_data)))
  {
    return false;
  }
  // alert_data_is_set
  if (lhs->alert_data_is_set != rhs->alert_data_is_set) {
    return false;
  }
  return true;
}

bool
bosdyn_msgs__msg__OutputData__copy(
  const bosdyn_msgs__msg__OutputData * input,
  bosdyn_msgs__msg__OutputData * output)
{
  if (!input || !output) {
    return false;
  }
  // object_in_image
  if (!bosdyn_msgs__msg__WorldObject__Sequence__copy(
      &(input->object_in_image), &(output->object_in_image)))
  {
    return false;
  }
  // alert_data
  if (!bosdyn_msgs__msg__AlertData__copy(
      &(input->alert_data), &(output->alert_data)))
  {
    return false;
  }
  // alert_data_is_set
  output->alert_data_is_set = input->alert_data_is_set;
  return true;
}

bosdyn_msgs__msg__OutputData *
bosdyn_msgs__msg__OutputData__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__OutputData * msg = (bosdyn_msgs__msg__OutputData *)allocator.allocate(sizeof(bosdyn_msgs__msg__OutputData), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(bosdyn_msgs__msg__OutputData));
  bool success = bosdyn_msgs__msg__OutputData__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
bosdyn_msgs__msg__OutputData__destroy(bosdyn_msgs__msg__OutputData * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    bosdyn_msgs__msg__OutputData__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
bosdyn_msgs__msg__OutputData__Sequence__init(bosdyn_msgs__msg__OutputData__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__OutputData * data = NULL;

  if (size) {
    data = (bosdyn_msgs__msg__OutputData *)allocator.zero_allocate(size, sizeof(bosdyn_msgs__msg__OutputData), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = bosdyn_msgs__msg__OutputData__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        bosdyn_msgs__msg__OutputData__fini(&data[i - 1]);
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
bosdyn_msgs__msg__OutputData__Sequence__fini(bosdyn_msgs__msg__OutputData__Sequence * array)
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
      bosdyn_msgs__msg__OutputData__fini(&array->data[i]);
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

bosdyn_msgs__msg__OutputData__Sequence *
bosdyn_msgs__msg__OutputData__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__OutputData__Sequence * array = (bosdyn_msgs__msg__OutputData__Sequence *)allocator.allocate(sizeof(bosdyn_msgs__msg__OutputData__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = bosdyn_msgs__msg__OutputData__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
bosdyn_msgs__msg__OutputData__Sequence__destroy(bosdyn_msgs__msg__OutputData__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    bosdyn_msgs__msg__OutputData__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
bosdyn_msgs__msg__OutputData__Sequence__are_equal(const bosdyn_msgs__msg__OutputData__Sequence * lhs, const bosdyn_msgs__msg__OutputData__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!bosdyn_msgs__msg__OutputData__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
bosdyn_msgs__msg__OutputData__Sequence__copy(
  const bosdyn_msgs__msg__OutputData__Sequence * input,
  bosdyn_msgs__msg__OutputData__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(bosdyn_msgs__msg__OutputData);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    bosdyn_msgs__msg__OutputData * data =
      (bosdyn_msgs__msg__OutputData *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!bosdyn_msgs__msg__OutputData__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          bosdyn_msgs__msg__OutputData__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!bosdyn_msgs__msg__OutputData__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}