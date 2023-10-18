// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from bosdyn_msgs:msg/SafePowerOffCommandFeedback.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__SAFE_POWER_OFF_COMMAND_FEEDBACK__STRUCT_H_
#define BOSDYN_MSGS__MSG__DETAIL__SAFE_POWER_OFF_COMMAND_FEEDBACK__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'status'
#include "bosdyn_msgs/msg/detail/safe_power_off_command_feedback_status__struct.h"

/// Struct defined in msg/SafePowerOffCommandFeedback in the package bosdyn_msgs.
/**
  * AUTOMATICALLY GENERATED BY PROTO CONVERSION
 */
typedef struct bosdyn_msgs__msg__SafePowerOffCommandFeedback
{
  /// The SafePowerOff will provide feedback on whether or not it has succeeded in powering off
  /// the robot yet.
  /// Current status of the command.
  bosdyn_msgs__msg__SafePowerOffCommandFeedbackStatus status;
} bosdyn_msgs__msg__SafePowerOffCommandFeedback;

// Struct for a sequence of bosdyn_msgs__msg__SafePowerOffCommandFeedback.
typedef struct bosdyn_msgs__msg__SafePowerOffCommandFeedback__Sequence
{
  bosdyn_msgs__msg__SafePowerOffCommandFeedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} bosdyn_msgs__msg__SafePowerOffCommandFeedback__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // BOSDYN_MSGS__MSG__DETAIL__SAFE_POWER_OFF_COMMAND_FEEDBACK__STRUCT_H_