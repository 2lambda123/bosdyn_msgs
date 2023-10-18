// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from bosdyn_msgs:msg/ArmJointMoveCommandFeedback.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__ARM_JOINT_MOVE_COMMAND_FEEDBACK__STRUCT_H_
#define BOSDYN_MSGS__MSG__DETAIL__ARM_JOINT_MOVE_COMMAND_FEEDBACK__STRUCT_H_

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
#include "bosdyn_msgs/msg/detail/arm_joint_move_command_feedback_status__struct.h"
// Member 'planner_status'
#include "bosdyn_msgs/msg/detail/arm_joint_move_command_feedback_planner_status__struct.h"
// Member 'planned_points'
#include "bosdyn_msgs/msg/detail/arm_joint_trajectory_point__struct.h"
// Member 'time_to_goal'
#include "builtin_interfaces/msg/detail/duration__struct.h"

/// Struct defined in msg/ArmJointMoveCommandFeedback in the package bosdyn_msgs.
/**
  * AUTOMATICALLY GENERATED BY PROTO CONVERSION
 */
typedef struct bosdyn_msgs__msg__ArmJointMoveCommandFeedback
{
  /// Current status of the request.
  bosdyn_msgs__msg__ArmJointMoveCommandFeedbackStatus status;
  /// Current status of the trajectory planner.
  bosdyn_msgs__msg__ArmJointMoveCommandFeedbackPlannerStatus planner_status;
  /// Based on the user trajectory, the planned knot points that obey acceleration and
  /// velocity constraints. If these knot points don't match the requested knot points,
  /// consider increasing velocity/acceleration limits, and/or staying further away from
  /// joint position limits. In situations where we've modified you last point, we append
  /// a minimum time trajectory (that obeys the velocity and acceleration limits) from the
  /// planner's final point to the requested final point. This means that the length of
  /// planned_points may be one point larger than the requested.
  bosdyn_msgs__msg__ArmJointTrajectoryPoint__Sequence planned_points;
  /// Returns amount of time remaining until the joints are at the goal position.  For
  /// multiple point trajectories, this is the time remaining to the final point.
  builtin_interfaces__msg__Duration time_to_goal;
  bool time_to_goal_is_set;
} bosdyn_msgs__msg__ArmJointMoveCommandFeedback;

// Struct for a sequence of bosdyn_msgs__msg__ArmJointMoveCommandFeedback.
typedef struct bosdyn_msgs__msg__ArmJointMoveCommandFeedback__Sequence
{
  bosdyn_msgs__msg__ArmJointMoveCommandFeedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} bosdyn_msgs__msg__ArmJointMoveCommandFeedback__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // BOSDYN_MSGS__MSG__DETAIL__ARM_JOINT_MOVE_COMMAND_FEEDBACK__STRUCT_H_