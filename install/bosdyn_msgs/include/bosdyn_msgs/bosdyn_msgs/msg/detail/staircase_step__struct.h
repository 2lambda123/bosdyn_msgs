// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from bosdyn_msgs:msg/StaircaseStep.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__STAIRCASE_STEP__STRUCT_H_
#define BOSDYN_MSGS__MSG__DETAIL__STAIRCASE_STEP__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'point'
#include "geometry_msgs/msg/detail/vector3__struct.h"
// Member 'north'
#include "bosdyn_msgs/msg/detail/vec2__struct.h"
// Member 'width'
#include "bosdyn_msgs/msg/detail/staircase_width__struct.h"

/// Struct defined in msg/StaircaseStep in the package bosdyn_msgs.
/**
  * AUTOMATICALLY GENERATED BY PROTO CONVERSION
 */
typedef struct bosdyn_msgs__msg__StaircaseStep
{
  /// Center of edge in stairs frame.
  geometry_msgs__msg__Vector3 point;
  bool point_is_set;
  /// Unit vector pointing up the stairs in stairs frame, perpendicular to edge.
  bosdyn_msgs__msg__Vec2 north;
  bool north_is_set;
  /// Width of stairs at this step.
  bosdyn_msgs__msg__StaircaseWidth width;
  bool width_is_set;
} bosdyn_msgs__msg__StaircaseStep;

// Struct for a sequence of bosdyn_msgs__msg__StaircaseStep.
typedef struct bosdyn_msgs__msg__StaircaseStep__Sequence
{
  bosdyn_msgs__msg__StaircaseStep * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} bosdyn_msgs__msg__StaircaseStep__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // BOSDYN_MSGS__MSG__DETAIL__STAIRCASE_STEP__STRUCT_H_