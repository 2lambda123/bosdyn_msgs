// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from bosdyn_msgs:msg/KeyInt32ValueBosdynMsgsNode.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__KEY_INT32_VALUE_BOSDYN_MSGS_NODE__STRUCT_H_
#define BOSDYN_MSGS__MSG__DETAIL__KEY_INT32_VALUE_BOSDYN_MSGS_NODE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'value'
#include "bosdyn_msgs/msg/detail/node__struct.h"

/// Struct defined in msg/KeyInt32ValueBosdynMsgsNode in the package bosdyn_msgs.
/**
  * AUTOMATICALLY GENERATED BY PROTO CONVERSION
 */
typedef struct bosdyn_msgs__msg__KeyInt32ValueBosdynMsgsNode
{
  int32_t key;
  bosdyn_msgs__msg__Node value;
} bosdyn_msgs__msg__KeyInt32ValueBosdynMsgsNode;

// Struct for a sequence of bosdyn_msgs__msg__KeyInt32ValueBosdynMsgsNode.
typedef struct bosdyn_msgs__msg__KeyInt32ValueBosdynMsgsNode__Sequence
{
  bosdyn_msgs__msg__KeyInt32ValueBosdynMsgsNode * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} bosdyn_msgs__msg__KeyInt32ValueBosdynMsgsNode__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // BOSDYN_MSGS__MSG__DETAIL__KEY_INT32_VALUE_BOSDYN_MSGS_NODE__STRUCT_H_