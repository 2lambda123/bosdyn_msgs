// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from bosdyn_msgs:msg/StoreMetadataRequest.idl
// generated code does not contain a copyright notice
#include "bosdyn_msgs/msg/detail/store_metadata_request__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "bosdyn_msgs/msg/detail/request_header__functions.h"
// Member `metadata`
#include "bosdyn_msgs/msg/detail/associated_metadata__functions.h"
// Member `data_id`
#include "bosdyn_msgs/msg/detail/data_identifier__functions.h"

bool
bosdyn_msgs__msg__StoreMetadataRequest__init(bosdyn_msgs__msg__StoreMetadataRequest * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!bosdyn_msgs__msg__RequestHeader__init(&msg->header)) {
    bosdyn_msgs__msg__StoreMetadataRequest__fini(msg);
    return false;
  }
  // header_is_set
  // metadata
  if (!bosdyn_msgs__msg__AssociatedMetadata__init(&msg->metadata)) {
    bosdyn_msgs__msg__StoreMetadataRequest__fini(msg);
    return false;
  }
  // metadata_is_set
  // data_id
  if (!bosdyn_msgs__msg__DataIdentifier__init(&msg->data_id)) {
    bosdyn_msgs__msg__StoreMetadataRequest__fini(msg);
    return false;
  }
  // data_id_is_set
  return true;
}

void
bosdyn_msgs__msg__StoreMetadataRequest__fini(bosdyn_msgs__msg__StoreMetadataRequest * msg)
{
  if (!msg) {
    return;
  }
  // header
  bosdyn_msgs__msg__RequestHeader__fini(&msg->header);
  // header_is_set
  // metadata
  bosdyn_msgs__msg__AssociatedMetadata__fini(&msg->metadata);
  // metadata_is_set
  // data_id
  bosdyn_msgs__msg__DataIdentifier__fini(&msg->data_id);
  // data_id_is_set
}

bool
bosdyn_msgs__msg__StoreMetadataRequest__are_equal(const bosdyn_msgs__msg__StoreMetadataRequest * lhs, const bosdyn_msgs__msg__StoreMetadataRequest * rhs)
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
  // metadata
  if (!bosdyn_msgs__msg__AssociatedMetadata__are_equal(
      &(lhs->metadata), &(rhs->metadata)))
  {
    return false;
  }
  // metadata_is_set
  if (lhs->metadata_is_set != rhs->metadata_is_set) {
    return false;
  }
  // data_id
  if (!bosdyn_msgs__msg__DataIdentifier__are_equal(
      &(lhs->data_id), &(rhs->data_id)))
  {
    return false;
  }
  // data_id_is_set
  if (lhs->data_id_is_set != rhs->data_id_is_set) {
    return false;
  }
  return true;
}

bool
bosdyn_msgs__msg__StoreMetadataRequest__copy(
  const bosdyn_msgs__msg__StoreMetadataRequest * input,
  bosdyn_msgs__msg__StoreMetadataRequest * output)
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
  // metadata
  if (!bosdyn_msgs__msg__AssociatedMetadata__copy(
      &(input->metadata), &(output->metadata)))
  {
    return false;
  }
  // metadata_is_set
  output->metadata_is_set = input->metadata_is_set;
  // data_id
  if (!bosdyn_msgs__msg__DataIdentifier__copy(
      &(input->data_id), &(output->data_id)))
  {
    return false;
  }
  // data_id_is_set
  output->data_id_is_set = input->data_id_is_set;
  return true;
}

bosdyn_msgs__msg__StoreMetadataRequest *
bosdyn_msgs__msg__StoreMetadataRequest__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__StoreMetadataRequest * msg = (bosdyn_msgs__msg__StoreMetadataRequest *)allocator.allocate(sizeof(bosdyn_msgs__msg__StoreMetadataRequest), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(bosdyn_msgs__msg__StoreMetadataRequest));
  bool success = bosdyn_msgs__msg__StoreMetadataRequest__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
bosdyn_msgs__msg__StoreMetadataRequest__destroy(bosdyn_msgs__msg__StoreMetadataRequest * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    bosdyn_msgs__msg__StoreMetadataRequest__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
bosdyn_msgs__msg__StoreMetadataRequest__Sequence__init(bosdyn_msgs__msg__StoreMetadataRequest__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__StoreMetadataRequest * data = NULL;

  if (size) {
    data = (bosdyn_msgs__msg__StoreMetadataRequest *)allocator.zero_allocate(size, sizeof(bosdyn_msgs__msg__StoreMetadataRequest), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = bosdyn_msgs__msg__StoreMetadataRequest__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        bosdyn_msgs__msg__StoreMetadataRequest__fini(&data[i - 1]);
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
bosdyn_msgs__msg__StoreMetadataRequest__Sequence__fini(bosdyn_msgs__msg__StoreMetadataRequest__Sequence * array)
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
      bosdyn_msgs__msg__StoreMetadataRequest__fini(&array->data[i]);
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

bosdyn_msgs__msg__StoreMetadataRequest__Sequence *
bosdyn_msgs__msg__StoreMetadataRequest__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__StoreMetadataRequest__Sequence * array = (bosdyn_msgs__msg__StoreMetadataRequest__Sequence *)allocator.allocate(sizeof(bosdyn_msgs__msg__StoreMetadataRequest__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = bosdyn_msgs__msg__StoreMetadataRequest__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
bosdyn_msgs__msg__StoreMetadataRequest__Sequence__destroy(bosdyn_msgs__msg__StoreMetadataRequest__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    bosdyn_msgs__msg__StoreMetadataRequest__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
bosdyn_msgs__msg__StoreMetadataRequest__Sequence__are_equal(const bosdyn_msgs__msg__StoreMetadataRequest__Sequence * lhs, const bosdyn_msgs__msg__StoreMetadataRequest__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!bosdyn_msgs__msg__StoreMetadataRequest__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
bosdyn_msgs__msg__StoreMetadataRequest__Sequence__copy(
  const bosdyn_msgs__msg__StoreMetadataRequest__Sequence * input,
  bosdyn_msgs__msg__StoreMetadataRequest__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(bosdyn_msgs__msg__StoreMetadataRequest);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    bosdyn_msgs__msg__StoreMetadataRequest * data =
      (bosdyn_msgs__msg__StoreMetadataRequest *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!bosdyn_msgs__msg__StoreMetadataRequest__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          bosdyn_msgs__msg__StoreMetadataRequest__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!bosdyn_msgs__msg__StoreMetadataRequest__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}