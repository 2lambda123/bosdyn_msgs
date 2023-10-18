// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from bosdyn_msgs:msg/RobotCommandFeedbackOneOfCommand.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__ROBOT_COMMAND_FEEDBACK_ONE_OF_COMMAND__STRUCT_H_
#define BOSDYN_MSGS__MSG__DETAIL__ROBOT_COMMAND_FEEDBACK_ONE_OF_COMMAND__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'COMMAND_NOT_SET'.
/**
  * DEPRECATED as of 2.1.0.  Will be removed in 4.0.  Please use
  * RobotCommand.synchronized_command and synchronized_feedback instead.
  * Command to control mobility system of a robot.
 */
enum
{
  bosdyn_msgs__msg__RobotCommandFeedbackOneOfCommand__COMMAND_NOT_SET = 0
};

/// Constant 'COMMAND_FULL_BODY_FEEDBACK_SET'.
enum
{
  bosdyn_msgs__msg__RobotCommandFeedbackOneOfCommand__COMMAND_FULL_BODY_FEEDBACK_SET = 1
};

/// Constant 'COMMAND_SYNCHRONIZED_FEEDBACK_SET'.
enum
{
  bosdyn_msgs__msg__RobotCommandFeedbackOneOfCommand__COMMAND_SYNCHRONIZED_FEEDBACK_SET = 2
};

// Include directives for member types
// Member 'full_body_feedback'
#include "bosdyn_msgs/msg/detail/full_body_command_feedback__struct.h"
// Member 'synchronized_feedback'
#include "bosdyn_msgs/msg/detail/synchronized_command_feedback__struct.h"

/// Struct defined in msg/RobotCommandFeedbackOneOfCommand in the package bosdyn_msgs.
/**
  * AUTOMATICALLY GENERATED BY PROTO CONVERSION
 */
typedef struct bosdyn_msgs__msg__RobotCommandFeedbackOneOfCommand
{
  /// ONEOF MESSAGE  Only one of the following can be set
  /// Commands which require control of entire robot.
  bosdyn_msgs__msg__FullBodyCommandFeedback full_body_feedback;
  /// A synchronized command, for partial or full control of robot.
  bosdyn_msgs__msg__SynchronizedCommandFeedback synchronized_feedback;
  /// Only one of the above can be filled in.  Use the enum to choose which.
  int8_t command_choice;
} bosdyn_msgs__msg__RobotCommandFeedbackOneOfCommand;

// Struct for a sequence of bosdyn_msgs__msg__RobotCommandFeedbackOneOfCommand.
typedef struct bosdyn_msgs__msg__RobotCommandFeedbackOneOfCommand__Sequence
{
  bosdyn_msgs__msg__RobotCommandFeedbackOneOfCommand * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} bosdyn_msgs__msg__RobotCommandFeedbackOneOfCommand__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // BOSDYN_MSGS__MSG__DETAIL__ROBOT_COMMAND_FEEDBACK_ONE_OF_COMMAND__STRUCT_H_