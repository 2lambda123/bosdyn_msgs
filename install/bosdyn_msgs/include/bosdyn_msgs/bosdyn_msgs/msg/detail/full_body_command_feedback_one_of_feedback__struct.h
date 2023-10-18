// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from bosdyn_msgs:msg/FullBodyCommandFeedbackOneOfFeedback.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__FULL_BODY_COMMAND_FEEDBACK_ONE_OF_FEEDBACK__STRUCT_H_
#define BOSDYN_MSGS__MSG__DETAIL__FULL_BODY_COMMAND_FEEDBACK_ONE_OF_FEEDBACK__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'FEEDBACK_NOT_SET'.
enum
{
  bosdyn_msgs__msg__FullBodyCommandFeedbackOneOfFeedback__FEEDBACK_NOT_SET = 0
};

/// Constant 'FEEDBACK_STOP_FEEDBACK_SET'.
enum
{
  bosdyn_msgs__msg__FullBodyCommandFeedbackOneOfFeedback__FEEDBACK_STOP_FEEDBACK_SET = 1
};

/// Constant 'FEEDBACK_FREEZE_FEEDBACK_SET'.
enum
{
  bosdyn_msgs__msg__FullBodyCommandFeedbackOneOfFeedback__FEEDBACK_FREEZE_FEEDBACK_SET = 2
};

/// Constant 'FEEDBACK_SELFRIGHT_FEEDBACK_SET'.
enum
{
  bosdyn_msgs__msg__FullBodyCommandFeedbackOneOfFeedback__FEEDBACK_SELFRIGHT_FEEDBACK_SET = 3
};

/// Constant 'FEEDBACK_SAFE_POWER_OFF_FEEDBACK_SET'.
enum
{
  bosdyn_msgs__msg__FullBodyCommandFeedbackOneOfFeedback__FEEDBACK_SAFE_POWER_OFF_FEEDBACK_SET = 4
};

/// Constant 'FEEDBACK_BATTERY_CHANGE_POSE_FEEDBACK_SET'.
enum
{
  bosdyn_msgs__msg__FullBodyCommandFeedbackOneOfFeedback__FEEDBACK_BATTERY_CHANGE_POSE_FEEDBACK_SET = 5
};

/// Constant 'FEEDBACK_PAYLOAD_ESTIMATION_FEEDBACK_SET'.
enum
{
  bosdyn_msgs__msg__FullBodyCommandFeedbackOneOfFeedback__FEEDBACK_PAYLOAD_ESTIMATION_FEEDBACK_SET = 6
};

/// Constant 'FEEDBACK_CONSTRAINED_MANIPULATION_FEEDBACK_SET'.
enum
{
  bosdyn_msgs__msg__FullBodyCommandFeedbackOneOfFeedback__FEEDBACK_CONSTRAINED_MANIPULATION_FEEDBACK_SET = 7
};

// Include directives for member types
// Member 'stop_feedback'
#include "bosdyn_msgs/msg/detail/stop_command_feedback__struct.h"
// Member 'freeze_feedback'
#include "bosdyn_msgs/msg/detail/freeze_command_feedback__struct.h"
// Member 'selfright_feedback'
#include "bosdyn_msgs/msg/detail/self_right_command_feedback__struct.h"
// Member 'safe_power_off_feedback'
#include "bosdyn_msgs/msg/detail/safe_power_off_command_feedback__struct.h"
// Member 'battery_change_pose_feedback'
#include "bosdyn_msgs/msg/detail/battery_change_pose_command_feedback__struct.h"
// Member 'payload_estimation_feedback'
#include "bosdyn_msgs/msg/detail/payload_estimation_command_feedback__struct.h"
// Member 'constrained_manipulation_feedback'
#include "bosdyn_msgs/msg/detail/constrained_manipulation_command_feedback__struct.h"

/// Struct defined in msg/FullBodyCommandFeedbackOneOfFeedback in the package bosdyn_msgs.
/**
  * AUTOMATICALLY GENERATED BY PROTO CONVERSION
 */
typedef struct bosdyn_msgs__msg__FullBodyCommandFeedbackOneOfFeedback
{
  /// ONEOF MESSAGE  Only one of the following can be set
  /// Feedback for the stop command request.
  bosdyn_msgs__msg__StopCommandFeedback stop_feedback;
  /// Feedback for the freeze command request.
  bosdyn_msgs__msg__FreezeCommandFeedback freeze_feedback;
  /// Feedback for the self-right command request.
  bosdyn_msgs__msg__SelfRightCommandFeedback selfright_feedback;
  /// Feedback for the safe power off command request.
  bosdyn_msgs__msg__SafePowerOffCommandFeedback safe_power_off_feedback;
  /// Feedback for the battery change pose command request.
  bosdyn_msgs__msg__BatteryChangePoseCommandFeedback battery_change_pose_feedback;
  /// Feedback for the payload estimation command request.
  bosdyn_msgs__msg__PayloadEstimationCommandFeedback payload_estimation_feedback;
  /// Feedback for the constrained manipulation command request
  bosdyn_msgs__msg__ConstrainedManipulationCommandFeedback constrained_manipulation_feedback;
  /// Only one of the above can be filled in.  Use the enum to choose which.
  int8_t feedback_choice;
} bosdyn_msgs__msg__FullBodyCommandFeedbackOneOfFeedback;

// Struct for a sequence of bosdyn_msgs__msg__FullBodyCommandFeedbackOneOfFeedback.
typedef struct bosdyn_msgs__msg__FullBodyCommandFeedbackOneOfFeedback__Sequence
{
  bosdyn_msgs__msg__FullBodyCommandFeedbackOneOfFeedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} bosdyn_msgs__msg__FullBodyCommandFeedbackOneOfFeedback__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // BOSDYN_MSGS__MSG__DETAIL__FULL_BODY_COMMAND_FEEDBACK_ONE_OF_FEEDBACK__STRUCT_H_