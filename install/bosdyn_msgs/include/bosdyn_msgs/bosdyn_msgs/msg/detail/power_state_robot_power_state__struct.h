// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from bosdyn_msgs:msg/PowerStateRobotPowerState.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__POWER_STATE_ROBOT_POWER_STATE__STRUCT_H_
#define BOSDYN_MSGS__MSG__DETAIL__POWER_STATE_ROBOT_POWER_STATE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'ROBOT_POWER_STATE_UNKNOWN'.
/**
  * Unknown robot power state. Do not use this field.
 */
enum
{
  bosdyn_msgs__msg__PowerStateRobotPowerState__ROBOT_POWER_STATE_UNKNOWN = 0
};

/// Constant 'ROBOT_POWER_STATE_ON'.
/**
  * The robot is powered on.
 */
enum
{
  bosdyn_msgs__msg__PowerStateRobotPowerState__ROBOT_POWER_STATE_ON = 1
};

/// Constant 'ROBOT_POWER_STATE_OFF'.
/**
  * The robot does not have power.
  * Impossible to get this response, as the robot cannot respond if it is powered off.
 */
enum
{
  bosdyn_msgs__msg__PowerStateRobotPowerState__ROBOT_POWER_STATE_OFF = 2
};

/// Struct defined in msg/PowerStateRobotPowerState in the package bosdyn_msgs.
/**
  * AUTOMATICALLY GENERATED BY PROTO CONVERSION
 */
typedef struct bosdyn_msgs__msg__PowerStateRobotPowerState
{
  int8_t value;
} bosdyn_msgs__msg__PowerStateRobotPowerState;

// Struct for a sequence of bosdyn_msgs__msg__PowerStateRobotPowerState.
typedef struct bosdyn_msgs__msg__PowerStateRobotPowerState__Sequence
{
  bosdyn_msgs__msg__PowerStateRobotPowerState * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} bosdyn_msgs__msg__PowerStateRobotPowerState__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // BOSDYN_MSGS__MSG__DETAIL__POWER_STATE_ROBOT_POWER_STATE__STRUCT_H_