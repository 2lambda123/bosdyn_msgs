// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from bosdyn_msgs:msg/BosdynGripperCameraParamsState.idl
// generated code does not contain a copyright notice
#include "bosdyn_msgs/msg/detail/bosdyn_gripper_camera_params_state__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `service_name`
// Member `host`
// Member `state_name`
#include "rosidl_runtime_c/string_functions.h"
// Member `child`
#include "bosdyn_msgs/msg/detail/node__functions.h"

bool
bosdyn_msgs__msg__BosdynGripperCameraParamsState__init(bosdyn_msgs__msg__BosdynGripperCameraParamsState * msg)
{
  if (!msg) {
    return false;
  }
  // service_name
  if (!rosidl_runtime_c__String__init(&msg->service_name)) {
    bosdyn_msgs__msg__BosdynGripperCameraParamsState__fini(msg);
    return false;
  }
  // host
  if (!rosidl_runtime_c__String__init(&msg->host)) {
    bosdyn_msgs__msg__BosdynGripperCameraParamsState__fini(msg);
    return false;
  }
  // child
  if (!bosdyn_msgs__msg__Node__init(&msg->child)) {
    bosdyn_msgs__msg__BosdynGripperCameraParamsState__fini(msg);
    return false;
  }
  // child_is_set
  // state_name
  if (!rosidl_runtime_c__String__init(&msg->state_name)) {
    bosdyn_msgs__msg__BosdynGripperCameraParamsState__fini(msg);
    return false;
  }
  return true;
}

void
bosdyn_msgs__msg__BosdynGripperCameraParamsState__fini(bosdyn_msgs__msg__BosdynGripperCameraParamsState * msg)
{
  if (!msg) {
    return;
  }
  // service_name
  rosidl_runtime_c__String__fini(&msg->service_name);
  // host
  rosidl_runtime_c__String__fini(&msg->host);
  // child
  bosdyn_msgs__msg__Node__fini(&msg->child);
  // child_is_set
  // state_name
  rosidl_runtime_c__String__fini(&msg->state_name);
}

bool
bosdyn_msgs__msg__BosdynGripperCameraParamsState__are_equal(const bosdyn_msgs__msg__BosdynGripperCameraParamsState * lhs, const bosdyn_msgs__msg__BosdynGripperCameraParamsState * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // service_name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->service_name), &(rhs->service_name)))
  {
    return false;
  }
  // host
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->host), &(rhs->host)))
  {
    return false;
  }
  // child
  if (!bosdyn_msgs__msg__Node__are_equal(
      &(lhs->child), &(rhs->child)))
  {
    return false;
  }
  // child_is_set
  if (lhs->child_is_set != rhs->child_is_set) {
    return false;
  }
  // state_name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->state_name), &(rhs->state_name)))
  {
    return false;
  }
  return true;
}

bool
bosdyn_msgs__msg__BosdynGripperCameraParamsState__copy(
  const bosdyn_msgs__msg__BosdynGripperCameraParamsState * input,
  bosdyn_msgs__msg__BosdynGripperCameraParamsState * output)
{
  if (!input || !output) {
    return false;
  }
  // service_name
  if (!rosidl_runtime_c__String__copy(
      &(input->service_name), &(output->service_name)))
  {
    return false;
  }
  // host
  if (!rosidl_runtime_c__String__copy(
      &(input->host), &(output->host)))
  {
    return false;
  }
  // child
  if (!bosdyn_msgs__msg__Node__copy(
      &(input->child), &(output->child)))
  {
    return false;
  }
  // child_is_set
  output->child_is_set = input->child_is_set;
  // state_name
  if (!rosidl_runtime_c__String__copy(
      &(input->state_name), &(output->state_name)))
  {
    return false;
  }
  return true;
}

bosdyn_msgs__msg__BosdynGripperCameraParamsState *
bosdyn_msgs__msg__BosdynGripperCameraParamsState__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__BosdynGripperCameraParamsState * msg = (bosdyn_msgs__msg__BosdynGripperCameraParamsState *)allocator.allocate(sizeof(bosdyn_msgs__msg__BosdynGripperCameraParamsState), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(bosdyn_msgs__msg__BosdynGripperCameraParamsState));
  bool success = bosdyn_msgs__msg__BosdynGripperCameraParamsState__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
bosdyn_msgs__msg__BosdynGripperCameraParamsState__destroy(bosdyn_msgs__msg__BosdynGripperCameraParamsState * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    bosdyn_msgs__msg__BosdynGripperCameraParamsState__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
bosdyn_msgs__msg__BosdynGripperCameraParamsState__Sequence__init(bosdyn_msgs__msg__BosdynGripperCameraParamsState__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__BosdynGripperCameraParamsState * data = NULL;

  if (size) {
    data = (bosdyn_msgs__msg__BosdynGripperCameraParamsState *)allocator.zero_allocate(size, sizeof(bosdyn_msgs__msg__BosdynGripperCameraParamsState), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = bosdyn_msgs__msg__BosdynGripperCameraParamsState__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        bosdyn_msgs__msg__BosdynGripperCameraParamsState__fini(&data[i - 1]);
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
bosdyn_msgs__msg__BosdynGripperCameraParamsState__Sequence__fini(bosdyn_msgs__msg__BosdynGripperCameraParamsState__Sequence * array)
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
      bosdyn_msgs__msg__BosdynGripperCameraParamsState__fini(&array->data[i]);
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

bosdyn_msgs__msg__BosdynGripperCameraParamsState__Sequence *
bosdyn_msgs__msg__BosdynGripperCameraParamsState__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__BosdynGripperCameraParamsState__Sequence * array = (bosdyn_msgs__msg__BosdynGripperCameraParamsState__Sequence *)allocator.allocate(sizeof(bosdyn_msgs__msg__BosdynGripperCameraParamsState__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = bosdyn_msgs__msg__BosdynGripperCameraParamsState__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
bosdyn_msgs__msg__BosdynGripperCameraParamsState__Sequence__destroy(bosdyn_msgs__msg__BosdynGripperCameraParamsState__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    bosdyn_msgs__msg__BosdynGripperCameraParamsState__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
bosdyn_msgs__msg__BosdynGripperCameraParamsState__Sequence__are_equal(const bosdyn_msgs__msg__BosdynGripperCameraParamsState__Sequence * lhs, const bosdyn_msgs__msg__BosdynGripperCameraParamsState__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!bosdyn_msgs__msg__BosdynGripperCameraParamsState__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
bosdyn_msgs__msg__BosdynGripperCameraParamsState__Sequence__copy(
  const bosdyn_msgs__msg__BosdynGripperCameraParamsState__Sequence * input,
  bosdyn_msgs__msg__BosdynGripperCameraParamsState__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(bosdyn_msgs__msg__BosdynGripperCameraParamsState);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    bosdyn_msgs__msg__BosdynGripperCameraParamsState * data =
      (bosdyn_msgs__msg__BosdynGripperCameraParamsState *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!bosdyn_msgs__msg__BosdynGripperCameraParamsState__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          bosdyn_msgs__msg__BosdynGripperCameraParamsState__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!bosdyn_msgs__msg__BosdynGripperCameraParamsState__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}