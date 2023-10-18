// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from bosdyn_msgs:msg/IrColorMapScalingPair.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__IR_COLOR_MAP_SCALING_PAIR__STRUCT_H_
#define BOSDYN_MSGS__MSG__DETAIL__IR_COLOR_MAP_SCALING_PAIR__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/IrColorMapScalingPair in the package bosdyn_msgs.
/**
  * AUTOMATICALLY GENERATED BY PROTO CONVERSION
 */
typedef struct bosdyn_msgs__msg__IrColorMapScalingPair
{
  /// the minimum value to do color mapping, in degrees Celsius
  double min;
  /// the maximum value to do color mapping, in degrees Celsius
  double max;
} bosdyn_msgs__msg__IrColorMapScalingPair;

// Struct for a sequence of bosdyn_msgs__msg__IrColorMapScalingPair.
typedef struct bosdyn_msgs__msg__IrColorMapScalingPair__Sequence
{
  bosdyn_msgs__msg__IrColorMapScalingPair * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} bosdyn_msgs__msg__IrColorMapScalingPair__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // BOSDYN_MSGS__MSG__DETAIL__IR_COLOR_MAP_SCALING_PAIR__STRUCT_H_