// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from bosdyn_msgs:msg/RobotCommandFeedbackResponse.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__ROBOT_COMMAND_FEEDBACK_RESPONSE__STRUCT_H_
#define BOSDYN_MSGS__MSG__DETAIL__ROBOT_COMMAND_FEEDBACK_RESPONSE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "bosdyn_msgs/msg/detail/response_header__struct.h"
// Member 'lease_use_result'
#include "bosdyn_msgs/msg/detail/lease_use_result__struct.h"
// Member 'feedback'
#include "bosdyn_msgs/msg/detail/robot_command_feedback__struct.h"

/// Struct defined in msg/RobotCommandFeedbackResponse in the package bosdyn_msgs.
/**
  * AUTOMATICALLY GENERATED BY PROTO CONVERSION
 */
typedef struct bosdyn_msgs__msg__RobotCommandFeedbackResponse
{
  /// The RobotCommandFeedback response message, which contains the progress of the robot command.
  /// Common response header.
  bosdyn_msgs__msg__ResponseHeader header;
  bool header_is_set;
  /// Details about how the lease was used.
  bosdyn_msgs__msg__LeaseUseResult lease_use_result;
  bool lease_use_result_is_set;
  /// DEPRECATED as of 2.1.0. Will be removed in 4.0.  Please use RobotCommandResponse.status.
  /// General status whether or not command is still processing.
  /// DEPRECATED as of 2.1.0. Will be removed in 4.0. RobotCommandResponse.message.
  /// Human-readable status message.  Not for programmatic analysis.
  /// Command specific feedback.
  bosdyn_msgs__msg__RobotCommandFeedback feedback;
  bool feedback_is_set;
} bosdyn_msgs__msg__RobotCommandFeedbackResponse;

// Struct for a sequence of bosdyn_msgs__msg__RobotCommandFeedbackResponse.
typedef struct bosdyn_msgs__msg__RobotCommandFeedbackResponse__Sequence
{
  bosdyn_msgs__msg__RobotCommandFeedbackResponse * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} bosdyn_msgs__msg__RobotCommandFeedbackResponse__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // BOSDYN_MSGS__MSG__DETAIL__ROBOT_COMMAND_FEEDBACK_RESPONSE__STRUCT_H_