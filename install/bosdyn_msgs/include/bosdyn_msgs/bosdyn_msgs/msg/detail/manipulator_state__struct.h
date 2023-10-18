// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from bosdyn_msgs:msg/ManipulatorState.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__MANIPULATOR_STATE__STRUCT_H_
#define BOSDYN_MSGS__MSG__DETAIL__MANIPULATOR_STATE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'estimated_end_effector_force_in_hand'
#include "geometry_msgs/msg/detail/vector3__struct.h"
// Member 'stow_state'
#include "bosdyn_msgs/msg/detail/manipulator_state_stow_state__struct.h"
// Member 'velocity_of_hand_in_vision'
// Member 'velocity_of_hand_in_odom'
#include "geometry_msgs/msg/detail/twist__struct.h"
// Member 'carry_state'
#include "bosdyn_msgs/msg/detail/manipulator_state_carry_state__struct.h"

/// Struct defined in msg/ManipulatorState in the package bosdyn_msgs.
/**
  * AUTOMATICALLY GENERATED BY PROTO CONVERSION
 */
typedef struct bosdyn_msgs__msg__ManipulatorState
{
  /// / Additional state published if an arm is attached to the robot.
  ///  How open the gripper is, measured in percent.
  ///  0 = fully closed, 100 = fully open.
  double gripper_open_percentage;
  /// / Will be true if the gripper is holding an item, false otherwise.
  bool is_gripper_holding_item;
  /// The estimated force on the end-effector expressed in the hand frame.
  geometry_msgs__msg__Vector3 estimated_end_effector_force_in_hand;
  bool estimated_end_effector_force_in_hand_is_set;
  /// / Information on if the arm is stowed, or deployed.
  bosdyn_msgs__msg__ManipulatorStateStowState stow_state;
  /// Velocity of the hand frame with respect to vision frame and expressed in vision frame.
  /// The linear velocity is applied at the origin of the hand frame.
  geometry_msgs__msg__Twist velocity_of_hand_in_vision;
  bool velocity_of_hand_in_vision_is_set;
  /// Velocity of the hand frame with respect to odom frame and expressed in odom frame.
  /// Again, the linear velocity is applied at the origin of the hand frame.
  geometry_msgs__msg__Twist velocity_of_hand_in_odom;
  bool velocity_of_hand_in_odom_is_set;
  /// The stowing behavior is modified as a function of the Carry State.  If holding an item, the
  /// stowing behavior will be modified as follows:
  ///  NOT_CARRIABLE - The arm will not stow, instead entering stop
  ///  CARRIABLE - The arm will not stow, instead entering stop
  ///  CARRIABLE_AND_STOWABLE - The arm will stow while continuing to grasp the item
  /// The comms loss behavior of the arm is also modified as follows:
  ///  NOT_CARRIABLE - The arm will release the item and stow
  ///  CARRIABLE - The arm will not stow, instead entering stop
  ///  CARRIABLE_AND_STOWABLE - The arm will stow while continuing to grasp the item
  bosdyn_msgs__msg__ManipulatorStateCarryState carry_state;
} bosdyn_msgs__msg__ManipulatorState;

// Struct for a sequence of bosdyn_msgs__msg__ManipulatorState.
typedef struct bosdyn_msgs__msg__ManipulatorState__Sequence
{
  bosdyn_msgs__msg__ManipulatorState * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} bosdyn_msgs__msg__ManipulatorState__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // BOSDYN_MSGS__MSG__DETAIL__MANIPULATOR_STATE__STRUCT_H_