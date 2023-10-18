// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from bosdyn_msgs:msg/ArmDragCommandFeedback.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__ARM_DRAG_COMMAND_FEEDBACK__STRUCT_H_
#define BOSDYN_MSGS__MSG__DETAIL__ARM_DRAG_COMMAND_FEEDBACK__STRUCT_H_

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
#include "bosdyn_msgs/msg/detail/arm_drag_command_feedback_status__struct.h"

/// Struct defined in msg/ArmDragCommandFeedback in the package bosdyn_msgs.
/**
  * AUTOMATICALLY GENERATED BY PROTO CONVERSION
 */
typedef struct bosdyn_msgs__msg__ArmDragCommandFeedback
{
  bosdyn_msgs__msg__ArmDragCommandFeedbackStatus status;
} bosdyn_msgs__msg__ArmDragCommandFeedback;

// Struct for a sequence of bosdyn_msgs__msg__ArmDragCommandFeedback.
typedef struct bosdyn_msgs__msg__ArmDragCommandFeedback__Sequence
{
  bosdyn_msgs__msg__ArmDragCommandFeedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} bosdyn_msgs__msg__ArmDragCommandFeedback__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // BOSDYN_MSGS__MSG__DETAIL__ARM_DRAG_COMMAND_FEEDBACK__STRUCT_H_