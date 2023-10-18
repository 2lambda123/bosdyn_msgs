// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from bosdyn_msgs:msg/BatteryChangePoseCommandFeedbackStatus.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__BATTERY_CHANGE_POSE_COMMAND_FEEDBACK_STATUS__STRUCT_H_
#define BOSDYN_MSGS__MSG__DETAIL__BATTERY_CHANGE_POSE_COMMAND_FEEDBACK_STATUS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'STATUS_UNKNOWN'.
enum
{
  bosdyn_msgs__msg__BatteryChangePoseCommandFeedbackStatus__STATUS_UNKNOWN = 0
};

/// Constant 'STATUS_COMPLETED'.
/**
  * Robot is finished rolling
 */
enum
{
  bosdyn_msgs__msg__BatteryChangePoseCommandFeedbackStatus__STATUS_COMPLETED = 1
};

/// Constant 'STATUS_IN_PROGRESS'.
/**
  * Robot still in process of rolling over
 */
enum
{
  bosdyn_msgs__msg__BatteryChangePoseCommandFeedbackStatus__STATUS_IN_PROGRESS = 2
};

/// Constant 'STATUS_FAILED'.
/**
  * Robot has failed to roll onto its side
 */
enum
{
  bosdyn_msgs__msg__BatteryChangePoseCommandFeedbackStatus__STATUS_FAILED = 3
};

/// Struct defined in msg/BatteryChangePoseCommandFeedbackStatus in the package bosdyn_msgs.
/**
  * AUTOMATICALLY GENERATED BY PROTO CONVERSION
 */
typedef struct bosdyn_msgs__msg__BatteryChangePoseCommandFeedbackStatus
{
  int8_t value;
} bosdyn_msgs__msg__BatteryChangePoseCommandFeedbackStatus;

// Struct for a sequence of bosdyn_msgs__msg__BatteryChangePoseCommandFeedbackStatus.
typedef struct bosdyn_msgs__msg__BatteryChangePoseCommandFeedbackStatus__Sequence
{
  bosdyn_msgs__msg__BatteryChangePoseCommandFeedbackStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} bosdyn_msgs__msg__BatteryChangePoseCommandFeedbackStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // BOSDYN_MSGS__MSG__DETAIL__BATTERY_CHANGE_POSE_COMMAND_FEEDBACK_STATUS__STRUCT_H_