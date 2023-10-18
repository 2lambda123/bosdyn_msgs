// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from bosdyn_msgs:msg/ArmVelocityCommandRequest.idl
// generated code does not contain a copyright notice
#include "bosdyn_msgs/msg/detail/arm_velocity_command_request__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `command`
#include "bosdyn_msgs/msg/detail/arm_velocity_command_request_one_of_command__functions.h"
// Member `angular_velocity_of_hand_rt_odom_in_hand`
#include "geometry_msgs/msg/detail/vector3__functions.h"
// Member `end_time`
#include "builtin_interfaces/msg/detail/time__functions.h"

bool
bosdyn_msgs__msg__ArmVelocityCommandRequest__init(bosdyn_msgs__msg__ArmVelocityCommandRequest * msg)
{
  if (!msg) {
    return false;
  }
  // command
  if (!bosdyn_msgs__msg__ArmVelocityCommandRequestOneOfCommand__init(&msg->command)) {
    bosdyn_msgs__msg__ArmVelocityCommandRequest__fini(msg);
    return false;
  }
  // angular_velocity_of_hand_rt_odom_in_hand
  if (!geometry_msgs__msg__Vector3__init(&msg->angular_velocity_of_hand_rt_odom_in_hand)) {
    bosdyn_msgs__msg__ArmVelocityCommandRequest__fini(msg);
    return false;
  }
  // angular_velocity_of_hand_rt_odom_in_hand_is_set
  // maximum_acceleration
  // maximum_acceleration_is_set
  // end_time
  if (!builtin_interfaces__msg__Time__init(&msg->end_time)) {
    bosdyn_msgs__msg__ArmVelocityCommandRequest__fini(msg);
    return false;
  }
  // end_time_is_set
  return true;
}

void
bosdyn_msgs__msg__ArmVelocityCommandRequest__fini(bosdyn_msgs__msg__ArmVelocityCommandRequest * msg)
{
  if (!msg) {
    return;
  }
  // command
  bosdyn_msgs__msg__ArmVelocityCommandRequestOneOfCommand__fini(&msg->command);
  // angular_velocity_of_hand_rt_odom_in_hand
  geometry_msgs__msg__Vector3__fini(&msg->angular_velocity_of_hand_rt_odom_in_hand);
  // angular_velocity_of_hand_rt_odom_in_hand_is_set
  // maximum_acceleration
  // maximum_acceleration_is_set
  // end_time
  builtin_interfaces__msg__Time__fini(&msg->end_time);
  // end_time_is_set
}

bool
bosdyn_msgs__msg__ArmVelocityCommandRequest__are_equal(const bosdyn_msgs__msg__ArmVelocityCommandRequest * lhs, const bosdyn_msgs__msg__ArmVelocityCommandRequest * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // command
  if (!bosdyn_msgs__msg__ArmVelocityCommandRequestOneOfCommand__are_equal(
      &(lhs->command), &(rhs->command)))
  {
    return false;
  }
  // angular_velocity_of_hand_rt_odom_in_hand
  if (!geometry_msgs__msg__Vector3__are_equal(
      &(lhs->angular_velocity_of_hand_rt_odom_in_hand), &(rhs->angular_velocity_of_hand_rt_odom_in_hand)))
  {
    return false;
  }
  // angular_velocity_of_hand_rt_odom_in_hand_is_set
  if (lhs->angular_velocity_of_hand_rt_odom_in_hand_is_set != rhs->angular_velocity_of_hand_rt_odom_in_hand_is_set) {
    return false;
  }
  // maximum_acceleration
  if (lhs->maximum_acceleration != rhs->maximum_acceleration) {
    return false;
  }
  // maximum_acceleration_is_set
  if (lhs->maximum_acceleration_is_set != rhs->maximum_acceleration_is_set) {
    return false;
  }
  // end_time
  if (!builtin_interfaces__msg__Time__are_equal(
      &(lhs->end_time), &(rhs->end_time)))
  {
    return false;
  }
  // end_time_is_set
  if (lhs->end_time_is_set != rhs->end_time_is_set) {
    return false;
  }
  return true;
}

bool
bosdyn_msgs__msg__ArmVelocityCommandRequest__copy(
  const bosdyn_msgs__msg__ArmVelocityCommandRequest * input,
  bosdyn_msgs__msg__ArmVelocityCommandRequest * output)
{
  if (!input || !output) {
    return false;
  }
  // command
  if (!bosdyn_msgs__msg__ArmVelocityCommandRequestOneOfCommand__copy(
      &(input->command), &(output->command)))
  {
    return false;
  }
  // angular_velocity_of_hand_rt_odom_in_hand
  if (!geometry_msgs__msg__Vector3__copy(
      &(input->angular_velocity_of_hand_rt_odom_in_hand), &(output->angular_velocity_of_hand_rt_odom_in_hand)))
  {
    return false;
  }
  // angular_velocity_of_hand_rt_odom_in_hand_is_set
  output->angular_velocity_of_hand_rt_odom_in_hand_is_set = input->angular_velocity_of_hand_rt_odom_in_hand_is_set;
  // maximum_acceleration
  output->maximum_acceleration = input->maximum_acceleration;
  // maximum_acceleration_is_set
  output->maximum_acceleration_is_set = input->maximum_acceleration_is_set;
  // end_time
  if (!builtin_interfaces__msg__Time__copy(
      &(input->end_time), &(output->end_time)))
  {
    return false;
  }
  // end_time_is_set
  output->end_time_is_set = input->end_time_is_set;
  return true;
}

bosdyn_msgs__msg__ArmVelocityCommandRequest *
bosdyn_msgs__msg__ArmVelocityCommandRequest__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__ArmVelocityCommandRequest * msg = (bosdyn_msgs__msg__ArmVelocityCommandRequest *)allocator.allocate(sizeof(bosdyn_msgs__msg__ArmVelocityCommandRequest), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(bosdyn_msgs__msg__ArmVelocityCommandRequest));
  bool success = bosdyn_msgs__msg__ArmVelocityCommandRequest__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
bosdyn_msgs__msg__ArmVelocityCommandRequest__destroy(bosdyn_msgs__msg__ArmVelocityCommandRequest * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    bosdyn_msgs__msg__ArmVelocityCommandRequest__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
bosdyn_msgs__msg__ArmVelocityCommandRequest__Sequence__init(bosdyn_msgs__msg__ArmVelocityCommandRequest__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__ArmVelocityCommandRequest * data = NULL;

  if (size) {
    data = (bosdyn_msgs__msg__ArmVelocityCommandRequest *)allocator.zero_allocate(size, sizeof(bosdyn_msgs__msg__ArmVelocityCommandRequest), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = bosdyn_msgs__msg__ArmVelocityCommandRequest__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        bosdyn_msgs__msg__ArmVelocityCommandRequest__fini(&data[i - 1]);
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
bosdyn_msgs__msg__ArmVelocityCommandRequest__Sequence__fini(bosdyn_msgs__msg__ArmVelocityCommandRequest__Sequence * array)
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
      bosdyn_msgs__msg__ArmVelocityCommandRequest__fini(&array->data[i]);
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

bosdyn_msgs__msg__ArmVelocityCommandRequest__Sequence *
bosdyn_msgs__msg__ArmVelocityCommandRequest__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__ArmVelocityCommandRequest__Sequence * array = (bosdyn_msgs__msg__ArmVelocityCommandRequest__Sequence *)allocator.allocate(sizeof(bosdyn_msgs__msg__ArmVelocityCommandRequest__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = bosdyn_msgs__msg__ArmVelocityCommandRequest__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
bosdyn_msgs__msg__ArmVelocityCommandRequest__Sequence__destroy(bosdyn_msgs__msg__ArmVelocityCommandRequest__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    bosdyn_msgs__msg__ArmVelocityCommandRequest__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
bosdyn_msgs__msg__ArmVelocityCommandRequest__Sequence__are_equal(const bosdyn_msgs__msg__ArmVelocityCommandRequest__Sequence * lhs, const bosdyn_msgs__msg__ArmVelocityCommandRequest__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!bosdyn_msgs__msg__ArmVelocityCommandRequest__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
bosdyn_msgs__msg__ArmVelocityCommandRequest__Sequence__copy(
  const bosdyn_msgs__msg__ArmVelocityCommandRequest__Sequence * input,
  bosdyn_msgs__msg__ArmVelocityCommandRequest__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(bosdyn_msgs__msg__ArmVelocityCommandRequest);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    bosdyn_msgs__msg__ArmVelocityCommandRequest * data =
      (bosdyn_msgs__msg__ArmVelocityCommandRequest *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!bosdyn_msgs__msg__ArmVelocityCommandRequest__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          bosdyn_msgs__msg__ArmVelocityCommandRequest__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!bosdyn_msgs__msg__ArmVelocityCommandRequest__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}