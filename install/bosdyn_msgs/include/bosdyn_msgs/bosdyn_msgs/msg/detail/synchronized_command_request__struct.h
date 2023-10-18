// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from bosdyn_msgs:msg/SynchronizedCommandRequest.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__SYNCHRONIZED_COMMAND_REQUEST__STRUCT_H_
#define BOSDYN_MSGS__MSG__DETAIL__SYNCHRONIZED_COMMAND_REQUEST__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'arm_command'
#include "bosdyn_msgs/msg/detail/arm_command_request__struct.h"
// Member 'mobility_command'
#include "bosdyn_msgs/msg/detail/mobility_command_request__struct.h"
// Member 'gripper_command'
#include "bosdyn_msgs/msg/detail/gripper_command_request__struct.h"

/// Struct defined in msg/SynchronizedCommandRequest in the package bosdyn_msgs.
/**
  * AUTOMATICALLY GENERATED BY PROTO CONVERSION
 */
typedef struct bosdyn_msgs__msg__SynchronizedCommandRequest
{
  bosdyn_msgs__msg__ArmCommandRequest arm_command;
  bool arm_command_is_set;
  bosdyn_msgs__msg__MobilityCommandRequest mobility_command;
  bool mobility_command_is_set;
  bosdyn_msgs__msg__GripperCommandRequest gripper_command;
  bool gripper_command_is_set;
} bosdyn_msgs__msg__SynchronizedCommandRequest;

// Struct for a sequence of bosdyn_msgs__msg__SynchronizedCommandRequest.
typedef struct bosdyn_msgs__msg__SynchronizedCommandRequest__Sequence
{
  bosdyn_msgs__msg__SynchronizedCommandRequest * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} bosdyn_msgs__msg__SynchronizedCommandRequest__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // BOSDYN_MSGS__MSG__DETAIL__SYNCHRONIZED_COMMAND_REQUEST__STRUCT_H_