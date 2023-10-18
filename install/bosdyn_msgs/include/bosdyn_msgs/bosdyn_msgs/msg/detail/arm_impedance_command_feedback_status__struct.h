// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from bosdyn_msgs:msg/ArmImpedanceCommandFeedbackStatus.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__ARM_IMPEDANCE_COMMAND_FEEDBACK_STATUS__STRUCT_H_
#define BOSDYN_MSGS__MSG__DETAIL__ARM_IMPEDANCE_COMMAND_FEEDBACK_STATUS__STRUCT_H_

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
  bosdyn_msgs__msg__ArmImpedanceCommandFeedbackStatus__STATUS_UNKNOWN = 0
};

/// Constant 'STATUS_TRAJECTORY_COMPLETE'.
/**
  * Tool frame has reached the end of the trajectory, and is close to the `desired_tool`
  * in directions with high stiffness and no feed forwards
 */
enum
{
  bosdyn_msgs__msg__ArmImpedanceCommandFeedbackStatus__STATUS_TRAJECTORY_COMPLETE = 1
};

/// Constant 'STATUS_IN_PROGRESS'.
/**
  * Robot is moving along the `desired_tool` trajectory
 */
enum
{
  bosdyn_msgs__msg__ArmImpedanceCommandFeedbackStatus__STATUS_IN_PROGRESS = 2
};

/// Constant 'STATUS_TRAJECTORY_STALLED'.
/**
  * The arm has stopped making progress to the goal and the measured tool frame is far
  * from the `desired_tool` along directions where we expect good tracking
 */
enum
{
  bosdyn_msgs__msg__ArmImpedanceCommandFeedbackStatus__STATUS_TRAJECTORY_STALLED = 3
};

/// Struct defined in msg/ArmImpedanceCommandFeedbackStatus in the package bosdyn_msgs.
/**
  * AUTOMATICALLY GENERATED BY PROTO CONVERSION
 */
typedef struct bosdyn_msgs__msg__ArmImpedanceCommandFeedbackStatus
{
  int8_t value;
} bosdyn_msgs__msg__ArmImpedanceCommandFeedbackStatus;

// Struct for a sequence of bosdyn_msgs__msg__ArmImpedanceCommandFeedbackStatus.
typedef struct bosdyn_msgs__msg__ArmImpedanceCommandFeedbackStatus__Sequence
{
  bosdyn_msgs__msg__ArmImpedanceCommandFeedbackStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} bosdyn_msgs__msg__ArmImpedanceCommandFeedbackStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // BOSDYN_MSGS__MSG__DETAIL__ARM_IMPEDANCE_COMMAND_FEEDBACK_STATUS__STRUCT_H_