// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from bosdyn_msgs:msg/Keypoint.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__KEYPOINT__STRUCT_H_
#define BOSDYN_MSGS__MSG__DETAIL__KEYPOINT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'coordinates'
#include "bosdyn_msgs/msg/detail/vec2__struct.h"
// Member 'binary_descriptor'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/Keypoint in the package bosdyn_msgs.
/**
  * AUTOMATICALLY GENERATED BY PROTO CONVERSION
 */
typedef struct bosdyn_msgs__msg__Keypoint
{
  /// A point of interest in an image expressed as a pixel coordinate with associated metadata.
  /// The image pixel coordinates of the keypoint.
  bosdyn_msgs__msg__Vec2 coordinates;
  bool coordinates_is_set;
  /// A binary descriptor representing the keypoint.
  rosidl_runtime_c__octet__Sequence binary_descriptor;
  /// The score of this keypoint from the underlying keypoint detector, if applicable.
  float score;
  /// The diameter in pixels of the local neighborhood used to construct the descriptor.
  float size;
  /// The orientation of the keypoint, if applicable.
  float angle;
} bosdyn_msgs__msg__Keypoint;

// Struct for a sequence of bosdyn_msgs__msg__Keypoint.
typedef struct bosdyn_msgs__msg__Keypoint__Sequence
{
  bosdyn_msgs__msg__Keypoint * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} bosdyn_msgs__msg__Keypoint__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // BOSDYN_MSGS__MSG__DETAIL__KEYPOINT__STRUCT_H_