// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from bosdyn_msgs:msg/Target.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__TARGET__STRUCT_H_
#define BOSDYN_MSGS__MSG__DETAIL__TARGET__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'target'
#include "bosdyn_msgs/msg/detail/target_one_of_target__struct.h"
// Member 'relocalize'
#include "bosdyn_msgs/msg/detail/target_relocalize__struct.h"

/// Struct defined in msg/Target in the package bosdyn_msgs.
/**
  * AUTOMATICALLY GENERATED BY PROTO CONVERSION
 */
typedef struct bosdyn_msgs__msg__Target
{
  /// A Target is the location the robot should navigate to.
  /// Tell the robot to navigate to a waypoint. It will choose its route.
  /// Tell the robot to follow a route to a waypoint.
  /// If the robot is off the route (i.e., "far" from the route) when
  /// NavigateRoute is sent, the robot may navigate in unexpected ways.
  bosdyn_msgs__msg__TargetOneOfTarget target;
  /// If set, upon reaching the target the robot will perform an explicit relocalization.
  /// This should increase the accuracy of the robots belief of it's position on the map.
  /// After relocalizing, the robot will re-navigate to the target.
  bosdyn_msgs__msg__TargetRelocalize relocalize;
  bool relocalize_is_set;
} bosdyn_msgs__msg__Target;

// Struct for a sequence of bosdyn_msgs__msg__Target.
typedef struct bosdyn_msgs__msg__Target__Sequence
{
  bosdyn_msgs__msg__Target * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} bosdyn_msgs__msg__Target__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // BOSDYN_MSGS__MSG__DETAIL__TARGET__STRUCT_H_