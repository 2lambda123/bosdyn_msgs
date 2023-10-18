// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from bosdyn_msgs:msg/NamedArmPositionsCommandPositions.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__NAMED_ARM_POSITIONS_COMMAND_POSITIONS__STRUCT_H_
#define BOSDYN_MSGS__MSG__DETAIL__NAMED_ARM_POSITIONS_COMMAND_POSITIONS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'POSITIONS_UNKNOWN'.
/**
  * Invalid request; do not use.
 */
enum
{
  bosdyn_msgs__msg__NamedArmPositionsCommandPositions__POSITIONS_UNKNOWN = 0
};

/// Constant 'POSITIONS_CARRY'.
/**
  * The carry position is a damped, force limited position close to stow, with the hand
  * slightly in front of the robot.
 */
enum
{
  bosdyn_msgs__msg__NamedArmPositionsCommandPositions__POSITIONS_CARRY = 1
};

/// Constant 'POSITIONS_READY'.
/**
  * Move arm to ready position. The ready position is defined with the hand directly in
  * front of and slightly above the body, with the hand facing forward in the robot body +X
  * direction.
 */
enum
{
  bosdyn_msgs__msg__NamedArmPositionsCommandPositions__POSITIONS_READY = 2
};

/// Constant 'POSITIONS_STOW'.
/**
  * Stow the arm, safely. If the robot is holding something, it will freeze the arm instead
  * of stowing.  Overriding the carry_state to CARRY_STATE_CARRIABLE_AND_STOWABLE, will allow
  * the robot to stow the arm while grasping an item.
 */
enum
{
  bosdyn_msgs__msg__NamedArmPositionsCommandPositions__POSITIONS_STOW = 3
};

/// Struct defined in msg/NamedArmPositionsCommandPositions in the package bosdyn_msgs.
/**
  * AUTOMATICALLY GENERATED BY PROTO CONVERSION
 */
typedef struct bosdyn_msgs__msg__NamedArmPositionsCommandPositions
{
  int8_t value;
} bosdyn_msgs__msg__NamedArmPositionsCommandPositions;

// Struct for a sequence of bosdyn_msgs__msg__NamedArmPositionsCommandPositions.
typedef struct bosdyn_msgs__msg__NamedArmPositionsCommandPositions__Sequence
{
  bosdyn_msgs__msg__NamedArmPositionsCommandPositions * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} bosdyn_msgs__msg__NamedArmPositionsCommandPositions__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // BOSDYN_MSGS__MSG__DETAIL__NAMED_ARM_POSITIONS_COMMAND_POSITIONS__STRUCT_H_