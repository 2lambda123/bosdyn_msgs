// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from bosdyn_msgs:msg/BodyControlParamsBodyPose.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__BODY_CONTROL_PARAMS_BODY_POSE__STRUCT_H_
#define BOSDYN_MSGS__MSG__DETAIL__BODY_CONTROL_PARAMS_BODY_POSE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'root_frame_name'
#include "rosidl_runtime_c/string.h"
// Member 'base_offset_rt_root'
#include "bosdyn_msgs/msg/detail/se3_trajectory__struct.h"

/// Struct defined in msg/BodyControlParamsBodyPose in the package bosdyn_msgs.
/**
  * AUTOMATICALLY GENERATED BY PROTO CONVERSION
 */
typedef struct bosdyn_msgs__msg__BodyControlParamsBodyPose
{
  /// The root frame for the desired pose, e.g. "vision" or "odom"
  rosidl_runtime_c__String root_frame_name;
  /// The SE3 pose trajectory
  bosdyn_msgs__msg__SE3Trajectory base_offset_rt_root;
  bool base_offset_rt_root_is_set;
} bosdyn_msgs__msg__BodyControlParamsBodyPose;

// Struct for a sequence of bosdyn_msgs__msg__BodyControlParamsBodyPose.
typedef struct bosdyn_msgs__msg__BodyControlParamsBodyPose__Sequence
{
  bosdyn_msgs__msg__BodyControlParamsBodyPose * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} bosdyn_msgs__msg__BodyControlParamsBodyPose__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // BOSDYN_MSGS__MSG__DETAIL__BODY_CONTROL_PARAMS_BODY_POSE__STRUCT_H_