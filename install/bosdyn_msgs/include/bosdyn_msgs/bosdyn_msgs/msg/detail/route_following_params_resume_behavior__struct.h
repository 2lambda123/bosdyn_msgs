// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from bosdyn_msgs:msg/RouteFollowingParamsResumeBehavior.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__ROUTE_FOLLOWING_PARAMS_RESUME_BEHAVIOR__STRUCT_H_
#define BOSDYN_MSGS__MSG__DETAIL__ROUTE_FOLLOWING_PARAMS_RESUME_BEHAVIOR__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'RESUME_UNKNOWN'.
/**
  * The mode is unset.
 */
enum
{
  bosdyn_msgs__msg__RouteFollowingParamsResumeBehavior__RESUME_UNKNOWN = 0
};

/// Constant 'RESUME_RETURN_TO_UNFINISHED_ROUTE'.
/**
  * The robot will find the shortest path to any point on the route after the
  * furthest-along traversed edge, and go to the point that gives that shortest path.
  * Then, the robot will follow the rest of the route from that point.
  * This is the default.
 */
enum
{
  bosdyn_msgs__msg__RouteFollowingParamsResumeBehavior__RESUME_RETURN_TO_UNFINISHED_ROUTE = 1
};

/// Constant 'RESUME_FAIL_WHEN_NOT_ON_ROUTE'.
/**
  * The robot will fail the command with status STATUS_NOT_LOCALIZED_TO_ROUTE.
 */
enum
{
  bosdyn_msgs__msg__RouteFollowingParamsResumeBehavior__RESUME_FAIL_WHEN_NOT_ON_ROUTE = 2
};

/// Struct defined in msg/RouteFollowingParamsResumeBehavior in the package bosdyn_msgs.
/**
  * AUTOMATICALLY GENERATED BY PROTO CONVERSION
 */
typedef struct bosdyn_msgs__msg__RouteFollowingParamsResumeBehavior
{
  int8_t value;
} bosdyn_msgs__msg__RouteFollowingParamsResumeBehavior;

// Struct for a sequence of bosdyn_msgs__msg__RouteFollowingParamsResumeBehavior.
typedef struct bosdyn_msgs__msg__RouteFollowingParamsResumeBehavior__Sequence
{
  bosdyn_msgs__msg__RouteFollowingParamsResumeBehavior * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} bosdyn_msgs__msg__RouteFollowingParamsResumeBehavior__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // BOSDYN_MSGS__MSG__DETAIL__ROUTE_FOLLOWING_PARAMS_RESUME_BEHAVIOR__STRUCT_H_