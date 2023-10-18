// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from bosdyn_msgs:msg/DataError.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__DATA_ERROR__STRUCT_H_
#define BOSDYN_MSGS__MSG__DETAIL__DATA_ERROR__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'data_id'
#include "bosdyn_msgs/msg/detail/data_identifier__struct.h"
// Member 'error_message'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/DataError in the package bosdyn_msgs.
/**
  * AUTOMATICALLY GENERATED BY PROTO CONVERSION
 */
typedef struct bosdyn_msgs__msg__DataError
{
  /// An error associated with a particular capture action and piece of data.
  /// Identifier for the data to be saved.
  bosdyn_msgs__msg__DataIdentifier data_id;
  bool data_id_is_set;
  /// Human-readable message describing the error.
  /// If a capability was misconfigured, e.g. by an invalid CustomParam in one of the requests,
  /// it should show up here.
  rosidl_runtime_c__String error_message;
} bosdyn_msgs__msg__DataError;

// Struct for a sequence of bosdyn_msgs__msg__DataError.
typedef struct bosdyn_msgs__msg__DataError__Sequence
{
  bosdyn_msgs__msg__DataError * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} bosdyn_msgs__msg__DataError__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // BOSDYN_MSGS__MSG__DETAIL__DATA_ERROR__STRUCT_H_