// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from bosdyn_msgs:msg/RaycastRequest.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__RAYCAST_REQUEST__STRUCT_H_
#define BOSDYN_MSGS__MSG__DETAIL__RAYCAST_REQUEST__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "bosdyn_msgs/msg/detail/request_header__struct.h"
// Member 'ray_frame_name'
#include "rosidl_runtime_c/string.h"
// Member 'ray'
#include "bosdyn_msgs/msg/detail/ray__struct.h"
// Member 'intersection_types'
#include "bosdyn_msgs/msg/detail/ray_intersection_type__struct.h"

/// Struct defined in msg/RaycastRequest in the package bosdyn_msgs.
/**
  * AUTOMATICALLY GENERATED BY PROTO CONVERSION
 */
typedef struct bosdyn_msgs__msg__RaycastRequest
{
  /// Common request header.
  bosdyn_msgs__msg__RequestHeader header;
  bool header_is_set;
  /// The ray's coordinate frame. When unset, this will default to vision frame.
  rosidl_runtime_c__String ray_frame_name;
  /// The ray, containing and origin and an direction.
  bosdyn_msgs__msg__Ray ray;
  bool ray_is_set;
  /// Ignore intersections closer than this location on the ray.
  /// Defaults to 0 if not provided.
  float min_intersection_distance;
  /// Type of the raycast you want to perform.  If multiple are set, the result will wait until
  /// all raycasts are complete and return a single result proto.
  ///
  /// If this field is left empty, all available sources are used.
  bosdyn_msgs__msg__RayIntersectionType__Sequence intersection_types;
} bosdyn_msgs__msg__RaycastRequest;

// Struct for a sequence of bosdyn_msgs__msg__RaycastRequest.
typedef struct bosdyn_msgs__msg__RaycastRequest__Sequence
{
  bosdyn_msgs__msg__RaycastRequest * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} bosdyn_msgs__msg__RaycastRequest__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // BOSDYN_MSGS__MSG__DETAIL__RAYCAST_REQUEST__STRUCT_H_