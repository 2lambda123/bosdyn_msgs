// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from bosdyn_msgs:msg/ListParam.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__LIST_PARAM__STRUCT_H_
#define BOSDYN_MSGS__MSG__DETAIL__LIST_PARAM__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'values'
#include "bosdyn_msgs/msg/detail/serialized_message__struct.h"

/// Struct defined in msg/ListParam in the package bosdyn_msgs.
/**
  * AUTOMATICALLY GENERATED BY PROTO CONVERSION
 */
typedef struct bosdyn_msgs__msg__ListParam
{
  /// A list of elements of given types.
  /// Serialized bosdyn_msgs/CustomParam to break recursion
  bosdyn_msgs__msg__SerializedMessage__Sequence values;
} bosdyn_msgs__msg__ListParam;

// Struct for a sequence of bosdyn_msgs__msg__ListParam.
typedef struct bosdyn_msgs__msg__ListParam__Sequence
{
  bosdyn_msgs__msg__ListParam * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} bosdyn_msgs__msg__ListParam__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // BOSDYN_MSGS__MSG__DETAIL__LIST_PARAM__STRUCT_H_