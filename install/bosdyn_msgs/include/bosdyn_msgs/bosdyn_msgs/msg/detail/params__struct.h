// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from bosdyn_msgs:msg/Params.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__PARAMS__STRUCT_H_
#define BOSDYN_MSGS__MSG__DETAIL__PARAMS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'max_duration'
#include "builtin_interfaces/msg/detail/duration__struct.h"

/// Struct defined in msg/Params in the package bosdyn_msgs.
/**
  * AUTOMATICALLY GENERATED BY PROTO CONVERSION
 */
typedef struct bosdyn_msgs__msg__Params
{
  /// Parameters to AutoReturn actions.
  /// Robot-specific mobility parameters to use.
  /// For example, see bosdyn.api.spot.MobilityParams.
  ///     google.protobuf.Any mobility_params = 1;
  /// Allow AutoReturn to move the robot this far in the XY plane from the location where
  /// AutoReturn started. Travel along the Z axis (which is gravity-aligned) does not count.
  /// Must be > 0.
  /// meters
  float max_displacement;
  /// Optionally specify the maximum amount of time AutoReturn can take.
  /// If this duration is exceeded, AutoReturn will stop trying to move the robot.
  /// Omit to try indefinitely. Robot may become stuck and never take other comms loss actions!
  builtin_interfaces__msg__Duration max_duration;
  bool max_duration_is_set;
} bosdyn_msgs__msg__Params;

// Struct for a sequence of bosdyn_msgs__msg__Params.
typedef struct bosdyn_msgs__msg__Params__Sequence
{
  bosdyn_msgs__msg__Params * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} bosdyn_msgs__msg__Params__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // BOSDYN_MSGS__MSG__DETAIL__PARAMS__STRUCT_H_