// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from bosdyn_msgs:msg/ServiceFaultState.idl
// generated code does not contain a copyright notice
#include "bosdyn_msgs/msg/detail/service_fault_state__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `faults`
// Member `historical_faults`
#include "bosdyn_msgs/msg/detail/service_fault__functions.h"
// Member `aggregated`
#include "bosdyn_msgs/msg/detail/key_string_value_bosdyn_msgs_service_fault_severity__functions.h"

bool
bosdyn_msgs__msg__ServiceFaultState__init(bosdyn_msgs__msg__ServiceFaultState * msg)
{
  if (!msg) {
    return false;
  }
  // faults
  if (!bosdyn_msgs__msg__ServiceFault__Sequence__init(&msg->faults, 0)) {
    bosdyn_msgs__msg__ServiceFaultState__fini(msg);
    return false;
  }
  // historical_faults
  if (!bosdyn_msgs__msg__ServiceFault__Sequence__init(&msg->historical_faults, 0)) {
    bosdyn_msgs__msg__ServiceFaultState__fini(msg);
    return false;
  }
  // aggregated
  if (!bosdyn_msgs__msg__KeyStringValueBosdynMsgsServiceFaultSeverity__Sequence__init(&msg->aggregated, 0)) {
    bosdyn_msgs__msg__ServiceFaultState__fini(msg);
    return false;
  }
  return true;
}

void
bosdyn_msgs__msg__ServiceFaultState__fini(bosdyn_msgs__msg__ServiceFaultState * msg)
{
  if (!msg) {
    return;
  }
  // faults
  bosdyn_msgs__msg__ServiceFault__Sequence__fini(&msg->faults);
  // historical_faults
  bosdyn_msgs__msg__ServiceFault__Sequence__fini(&msg->historical_faults);
  // aggregated
  bosdyn_msgs__msg__KeyStringValueBosdynMsgsServiceFaultSeverity__Sequence__fini(&msg->aggregated);
}

bool
bosdyn_msgs__msg__ServiceFaultState__are_equal(const bosdyn_msgs__msg__ServiceFaultState * lhs, const bosdyn_msgs__msg__ServiceFaultState * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // faults
  if (!bosdyn_msgs__msg__ServiceFault__Sequence__are_equal(
      &(lhs->faults), &(rhs->faults)))
  {
    return false;
  }
  // historical_faults
  if (!bosdyn_msgs__msg__ServiceFault__Sequence__are_equal(
      &(lhs->historical_faults), &(rhs->historical_faults)))
  {
    return false;
  }
  // aggregated
  if (!bosdyn_msgs__msg__KeyStringValueBosdynMsgsServiceFaultSeverity__Sequence__are_equal(
      &(lhs->aggregated), &(rhs->aggregated)))
  {
    return false;
  }
  return true;
}

bool
bosdyn_msgs__msg__ServiceFaultState__copy(
  const bosdyn_msgs__msg__ServiceFaultState * input,
  bosdyn_msgs__msg__ServiceFaultState * output)
{
  if (!input || !output) {
    return false;
  }
  // faults
  if (!bosdyn_msgs__msg__ServiceFault__Sequence__copy(
      &(input->faults), &(output->faults)))
  {
    return false;
  }
  // historical_faults
  if (!bosdyn_msgs__msg__ServiceFault__Sequence__copy(
      &(input->historical_faults), &(output->historical_faults)))
  {
    return false;
  }
  // aggregated
  if (!bosdyn_msgs__msg__KeyStringValueBosdynMsgsServiceFaultSeverity__Sequence__copy(
      &(input->aggregated), &(output->aggregated)))
  {
    return false;
  }
  return true;
}

bosdyn_msgs__msg__ServiceFaultState *
bosdyn_msgs__msg__ServiceFaultState__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__ServiceFaultState * msg = (bosdyn_msgs__msg__ServiceFaultState *)allocator.allocate(sizeof(bosdyn_msgs__msg__ServiceFaultState), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(bosdyn_msgs__msg__ServiceFaultState));
  bool success = bosdyn_msgs__msg__ServiceFaultState__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
bosdyn_msgs__msg__ServiceFaultState__destroy(bosdyn_msgs__msg__ServiceFaultState * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    bosdyn_msgs__msg__ServiceFaultState__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
bosdyn_msgs__msg__ServiceFaultState__Sequence__init(bosdyn_msgs__msg__ServiceFaultState__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__ServiceFaultState * data = NULL;

  if (size) {
    data = (bosdyn_msgs__msg__ServiceFaultState *)allocator.zero_allocate(size, sizeof(bosdyn_msgs__msg__ServiceFaultState), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = bosdyn_msgs__msg__ServiceFaultState__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        bosdyn_msgs__msg__ServiceFaultState__fini(&data[i - 1]);
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
bosdyn_msgs__msg__ServiceFaultState__Sequence__fini(bosdyn_msgs__msg__ServiceFaultState__Sequence * array)
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
      bosdyn_msgs__msg__ServiceFaultState__fini(&array->data[i]);
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

bosdyn_msgs__msg__ServiceFaultState__Sequence *
bosdyn_msgs__msg__ServiceFaultState__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__ServiceFaultState__Sequence * array = (bosdyn_msgs__msg__ServiceFaultState__Sequence *)allocator.allocate(sizeof(bosdyn_msgs__msg__ServiceFaultState__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = bosdyn_msgs__msg__ServiceFaultState__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
bosdyn_msgs__msg__ServiceFaultState__Sequence__destroy(bosdyn_msgs__msg__ServiceFaultState__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    bosdyn_msgs__msg__ServiceFaultState__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
bosdyn_msgs__msg__ServiceFaultState__Sequence__are_equal(const bosdyn_msgs__msg__ServiceFaultState__Sequence * lhs, const bosdyn_msgs__msg__ServiceFaultState__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!bosdyn_msgs__msg__ServiceFaultState__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
bosdyn_msgs__msg__ServiceFaultState__Sequence__copy(
  const bosdyn_msgs__msg__ServiceFaultState__Sequence * input,
  bosdyn_msgs__msg__ServiceFaultState__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(bosdyn_msgs__msg__ServiceFaultState);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    bosdyn_msgs__msg__ServiceFaultState * data =
      (bosdyn_msgs__msg__ServiceFaultState *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!bosdyn_msgs__msg__ServiceFaultState__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          bosdyn_msgs__msg__ServiceFaultState__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!bosdyn_msgs__msg__ServiceFaultState__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}