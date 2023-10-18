// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from bosdyn_msgs:msg/ActionWrapperRobotBodyPose.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__ACTION_WRAPPER_ROBOT_BODY_POSE__STRUCT_H_
#define BOSDYN_MSGS__MSG__DETAIL__ACTION_WRAPPER_ROBOT_BODY_POSE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'target_tform_body'
#include "geometry_msgs/msg/detail/pose__struct.h"

/// Struct defined in msg/ActionWrapperRobotBodyPose in the package bosdyn_msgs.
/**
  * AUTOMATICALLY GENERATED BY PROTO CONVERSION
 */
typedef struct bosdyn_msgs__msg__ActionWrapperRobotBodyPose
{
  /// If your Target is a graph_nav waypoint, this pose will be relative
  /// to the waypoint you are navigating to. If no target was specified,
  /// this parameter will be ignored and the robot will stand in a generic
  /// pose.
  geometry_msgs__msg__Pose target_tform_body;
  bool target_tform_body_is_set;
} bosdyn_msgs__msg__ActionWrapperRobotBodyPose;

// Struct for a sequence of bosdyn_msgs__msg__ActionWrapperRobotBodyPose.
typedef struct bosdyn_msgs__msg__ActionWrapperRobotBodyPose__Sequence
{
  bosdyn_msgs__msg__ActionWrapperRobotBodyPose * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} bosdyn_msgs__msg__ActionWrapperRobotBodyPose__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // BOSDYN_MSGS__MSG__DETAIL__ACTION_WRAPPER_ROBOT_BODY_POSE__STRUCT_H_