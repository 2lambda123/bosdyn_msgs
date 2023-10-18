// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from bosdyn_msgs:msg/ConstrainedManipulationCommandFeedbackStatus.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__CONSTRAINED_MANIPULATION_COMMAND_FEEDBACK_STATUS__STRUCT_H_
#define BOSDYN_MSGS__MSG__DETAIL__CONSTRAINED_MANIPULATION_COMMAND_FEEDBACK_STATUS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'STATUS_UNKNOWN'.
/**
  * STATUS_UNKNOWN should never be used. If used, an internal error has happened.
 */
enum
{
  bosdyn_msgs__msg__ConstrainedManipulationCommandFeedbackStatus__STATUS_UNKNOWN = 0
};

/// Constant 'STATUS_RUNNING'.
/**
  * Constrained manipulation is working as expected
 */
enum
{
  bosdyn_msgs__msg__ConstrainedManipulationCommandFeedbackStatus__STATUS_RUNNING = 1
};

/// Constant 'STATUS_ARM_IS_STUCK'.
/**
  * Arm is stuck, either force is being applied in a direction
  * where the affordance can't move or not enough force is applied
 */
enum
{
  bosdyn_msgs__msg__ConstrainedManipulationCommandFeedbackStatus__STATUS_ARM_IS_STUCK = 2
};

/// Constant 'STATUS_GRASP_IS_LOST'.
/**
  * The grasp was lost. In this situation, constrained manipulation
  * will stop applying force, and will hold the last position.
 */
enum
{
  bosdyn_msgs__msg__ConstrainedManipulationCommandFeedbackStatus__STATUS_GRASP_IS_LOST = 3
};

/// Struct defined in msg/ConstrainedManipulationCommandFeedbackStatus in the package bosdyn_msgs.
/**
  * AUTOMATICALLY GENERATED BY PROTO CONVERSION
 */
typedef struct bosdyn_msgs__msg__ConstrainedManipulationCommandFeedbackStatus
{
  int8_t value;
} bosdyn_msgs__msg__ConstrainedManipulationCommandFeedbackStatus;

// Struct for a sequence of bosdyn_msgs__msg__ConstrainedManipulationCommandFeedbackStatus.
typedef struct bosdyn_msgs__msg__ConstrainedManipulationCommandFeedbackStatus__Sequence
{
  bosdyn_msgs__msg__ConstrainedManipulationCommandFeedbackStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} bosdyn_msgs__msg__ConstrainedManipulationCommandFeedbackStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // BOSDYN_MSGS__MSG__DETAIL__CONSTRAINED_MANIPULATION_COMMAND_FEEDBACK_STATUS__STRUCT_H_