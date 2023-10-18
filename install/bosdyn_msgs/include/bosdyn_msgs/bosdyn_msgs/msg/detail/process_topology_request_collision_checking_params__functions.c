// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from bosdyn_msgs:msg/ProcessTopologyRequestCollisionCheckingParams.idl
// generated code does not contain a copyright notice
#include "bosdyn_msgs/msg/detail/process_topology_request_collision_checking_params__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
bosdyn_msgs__msg__ProcessTopologyRequestCollisionCheckingParams__init(bosdyn_msgs__msg__ProcessTopologyRequestCollisionCheckingParams * msg)
{
  if (!msg) {
    return false;
  }
  // check_edges_for_collision
  // check_edges_for_collision_is_set
  // collision_check_robot_radius
  // collision_check_robot_radius_is_set
  // collision_check_height_variation
  // collision_check_height_variation_is_set
  return true;
}

void
bosdyn_msgs__msg__ProcessTopologyRequestCollisionCheckingParams__fini(bosdyn_msgs__msg__ProcessTopologyRequestCollisionCheckingParams * msg)
{
  if (!msg) {
    return;
  }
  // check_edges_for_collision
  // check_edges_for_collision_is_set
  // collision_check_robot_radius
  // collision_check_robot_radius_is_set
  // collision_check_height_variation
  // collision_check_height_variation_is_set
}

bool
bosdyn_msgs__msg__ProcessTopologyRequestCollisionCheckingParams__are_equal(const bosdyn_msgs__msg__ProcessTopologyRequestCollisionCheckingParams * lhs, const bosdyn_msgs__msg__ProcessTopologyRequestCollisionCheckingParams * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // check_edges_for_collision
  if (lhs->check_edges_for_collision != rhs->check_edges_for_collision) {
    return false;
  }
  // check_edges_for_collision_is_set
  if (lhs->check_edges_for_collision_is_set != rhs->check_edges_for_collision_is_set) {
    return false;
  }
  // collision_check_robot_radius
  if (lhs->collision_check_robot_radius != rhs->collision_check_robot_radius) {
    return false;
  }
  // collision_check_robot_radius_is_set
  if (lhs->collision_check_robot_radius_is_set != rhs->collision_check_robot_radius_is_set) {
    return false;
  }
  // collision_check_height_variation
  if (lhs->collision_check_height_variation != rhs->collision_check_height_variation) {
    return false;
  }
  // collision_check_height_variation_is_set
  if (lhs->collision_check_height_variation_is_set != rhs->collision_check_height_variation_is_set) {
    return false;
  }
  return true;
}

bool
bosdyn_msgs__msg__ProcessTopologyRequestCollisionCheckingParams__copy(
  const bosdyn_msgs__msg__ProcessTopologyRequestCollisionCheckingParams * input,
  bosdyn_msgs__msg__ProcessTopologyRequestCollisionCheckingParams * output)
{
  if (!input || !output) {
    return false;
  }
  // check_edges_for_collision
  output->check_edges_for_collision = input->check_edges_for_collision;
  // check_edges_for_collision_is_set
  output->check_edges_for_collision_is_set = input->check_edges_for_collision_is_set;
  // collision_check_robot_radius
  output->collision_check_robot_radius = input->collision_check_robot_radius;
  // collision_check_robot_radius_is_set
  output->collision_check_robot_radius_is_set = input->collision_check_robot_radius_is_set;
  // collision_check_height_variation
  output->collision_check_height_variation = input->collision_check_height_variation;
  // collision_check_height_variation_is_set
  output->collision_check_height_variation_is_set = input->collision_check_height_variation_is_set;
  return true;
}

bosdyn_msgs__msg__ProcessTopologyRequestCollisionCheckingParams *
bosdyn_msgs__msg__ProcessTopologyRequestCollisionCheckingParams__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__ProcessTopologyRequestCollisionCheckingParams * msg = (bosdyn_msgs__msg__ProcessTopologyRequestCollisionCheckingParams *)allocator.allocate(sizeof(bosdyn_msgs__msg__ProcessTopologyRequestCollisionCheckingParams), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(bosdyn_msgs__msg__ProcessTopologyRequestCollisionCheckingParams));
  bool success = bosdyn_msgs__msg__ProcessTopologyRequestCollisionCheckingParams__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
bosdyn_msgs__msg__ProcessTopologyRequestCollisionCheckingParams__destroy(bosdyn_msgs__msg__ProcessTopologyRequestCollisionCheckingParams * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    bosdyn_msgs__msg__ProcessTopologyRequestCollisionCheckingParams__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
bosdyn_msgs__msg__ProcessTopologyRequestCollisionCheckingParams__Sequence__init(bosdyn_msgs__msg__ProcessTopologyRequestCollisionCheckingParams__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__ProcessTopologyRequestCollisionCheckingParams * data = NULL;

  if (size) {
    data = (bosdyn_msgs__msg__ProcessTopologyRequestCollisionCheckingParams *)allocator.zero_allocate(size, sizeof(bosdyn_msgs__msg__ProcessTopologyRequestCollisionCheckingParams), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = bosdyn_msgs__msg__ProcessTopologyRequestCollisionCheckingParams__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        bosdyn_msgs__msg__ProcessTopologyRequestCollisionCheckingParams__fini(&data[i - 1]);
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
bosdyn_msgs__msg__ProcessTopologyRequestCollisionCheckingParams__Sequence__fini(bosdyn_msgs__msg__ProcessTopologyRequestCollisionCheckingParams__Sequence * array)
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
      bosdyn_msgs__msg__ProcessTopologyRequestCollisionCheckingParams__fini(&array->data[i]);
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

bosdyn_msgs__msg__ProcessTopologyRequestCollisionCheckingParams__Sequence *
bosdyn_msgs__msg__ProcessTopologyRequestCollisionCheckingParams__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__ProcessTopologyRequestCollisionCheckingParams__Sequence * array = (bosdyn_msgs__msg__ProcessTopologyRequestCollisionCheckingParams__Sequence *)allocator.allocate(sizeof(bosdyn_msgs__msg__ProcessTopologyRequestCollisionCheckingParams__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = bosdyn_msgs__msg__ProcessTopologyRequestCollisionCheckingParams__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
bosdyn_msgs__msg__ProcessTopologyRequestCollisionCheckingParams__Sequence__destroy(bosdyn_msgs__msg__ProcessTopologyRequestCollisionCheckingParams__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    bosdyn_msgs__msg__ProcessTopologyRequestCollisionCheckingParams__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
bosdyn_msgs__msg__ProcessTopologyRequestCollisionCheckingParams__Sequence__are_equal(const bosdyn_msgs__msg__ProcessTopologyRequestCollisionCheckingParams__Sequence * lhs, const bosdyn_msgs__msg__ProcessTopologyRequestCollisionCheckingParams__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!bosdyn_msgs__msg__ProcessTopologyRequestCollisionCheckingParams__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
bosdyn_msgs__msg__ProcessTopologyRequestCollisionCheckingParams__Sequence__copy(
  const bosdyn_msgs__msg__ProcessTopologyRequestCollisionCheckingParams__Sequence * input,
  bosdyn_msgs__msg__ProcessTopologyRequestCollisionCheckingParams__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(bosdyn_msgs__msg__ProcessTopologyRequestCollisionCheckingParams);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    bosdyn_msgs__msg__ProcessTopologyRequestCollisionCheckingParams * data =
      (bosdyn_msgs__msg__ProcessTopologyRequestCollisionCheckingParams *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!bosdyn_msgs__msg__ProcessTopologyRequestCollisionCheckingParams__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          bosdyn_msgs__msg__ProcessTopologyRequestCollisionCheckingParams__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!bosdyn_msgs__msg__ProcessTopologyRequestCollisionCheckingParams__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}