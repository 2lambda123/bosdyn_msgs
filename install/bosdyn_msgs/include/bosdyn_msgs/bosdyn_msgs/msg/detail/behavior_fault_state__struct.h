// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from bosdyn_msgs:msg/BehaviorFaultState.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__BEHAVIOR_FAULT_STATE__STRUCT_H_
#define BOSDYN_MSGS__MSG__DETAIL__BEHAVIOR_FAULT_STATE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'faults'
#include "bosdyn_msgs/msg/detail/behavior_fault__struct.h"

/// Struct defined in msg/BehaviorFaultState in the package bosdyn_msgs.
/**
  * AUTOMATICALLY GENERATED BY PROTO CONVERSION
 */
typedef struct bosdyn_msgs__msg__BehaviorFaultState
{
  /// This describes any current behaviror faults on the robot, which would block any robot commands
  /// from going through. These can be cleared using the ClearBehaviorFault rpc in the robot command
  /// service.
  /// Current errors potentially blocking commands on robot
  bosdyn_msgs__msg__BehaviorFault__Sequence faults;
} bosdyn_msgs__msg__BehaviorFaultState;

// Struct for a sequence of bosdyn_msgs__msg__BehaviorFaultState.
typedef struct bosdyn_msgs__msg__BehaviorFaultState__Sequence
{
  bosdyn_msgs__msg__BehaviorFaultState * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} bosdyn_msgs__msg__BehaviorFaultState__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // BOSDYN_MSGS__MSG__DETAIL__BEHAVIOR_FAULT_STATE__STRUCT_H_