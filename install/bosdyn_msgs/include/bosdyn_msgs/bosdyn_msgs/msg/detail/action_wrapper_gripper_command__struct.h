// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from bosdyn_msgs:msg/ActionWrapperGripperCommand.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__ACTION_WRAPPER_GRIPPER_COMMAND__STRUCT_H_
#define BOSDYN_MSGS__MSG__DETAIL__ACTION_WRAPPER_GRIPPER_COMMAND__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'request'
#include "bosdyn_msgs/msg/detail/gripper_command_request__struct.h"

/// Struct defined in msg/ActionWrapperGripperCommand in the package bosdyn_msgs.
/**
  * AUTOMATICALLY GENERATED BY PROTO CONVERSION
 */
typedef struct bosdyn_msgs__msg__ActionWrapperGripperCommand
{
  bosdyn_msgs__msg__GripperCommandRequest request;
  bool request_is_set;
} bosdyn_msgs__msg__ActionWrapperGripperCommand;

// Struct for a sequence of bosdyn_msgs__msg__ActionWrapperGripperCommand.
typedef struct bosdyn_msgs__msg__ActionWrapperGripperCommand__Sequence
{
  bosdyn_msgs__msg__ActionWrapperGripperCommand * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} bosdyn_msgs__msg__ActionWrapperGripperCommand__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // BOSDYN_MSGS__MSG__DETAIL__ACTION_WRAPPER_GRIPPER_COMMAND__STRUCT_H_