// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from bosdyn_msgs:msg/SE3Velocity.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__SE3_VELOCITY__STRUCT_H_
#define BOSDYN_MSGS__MSG__DETAIL__SE3_VELOCITY__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'linear'
// Member 'angular'
#include "geometry_msgs/msg/detail/vector3__struct.h"

/// Struct defined in msg/SE3Velocity in the package bosdyn_msgs.
/**
  * AUTOMATICALLY GENERATED BY PROTO CONVERSION
 */
typedef struct bosdyn_msgs__msg__SE3Velocity
{
  /// Geometric primitive that describes a 3D velocity through it's linear and angular components.
  /// (m/s)
  geometry_msgs__msg__Vector3 linear;
  bool linear_is_set;
  /// (rad/s)
  geometry_msgs__msg__Vector3 angular;
  bool angular_is_set;
} bosdyn_msgs__msg__SE3Velocity;

// Struct for a sequence of bosdyn_msgs__msg__SE3Velocity.
typedef struct bosdyn_msgs__msg__SE3Velocity__Sequence
{
  bosdyn_msgs__msg__SE3Velocity * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} bosdyn_msgs__msg__SE3Velocity__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // BOSDYN_MSGS__MSG__DETAIL__SE3_VELOCITY__STRUCT_H_