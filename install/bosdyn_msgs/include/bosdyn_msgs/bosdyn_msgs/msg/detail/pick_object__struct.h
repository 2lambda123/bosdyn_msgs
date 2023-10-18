// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from bosdyn_msgs:msg/PickObject.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__PICK_OBJECT__STRUCT_H_
#define BOSDYN_MSGS__MSG__DETAIL__PICK_OBJECT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'frame_name'
#include "rosidl_runtime_c/string.h"
// Member 'object_rt_frame'
#include "geometry_msgs/msg/detail/vector3__struct.h"
// Member 'grasp_params'
#include "bosdyn_msgs/msg/detail/grasp_params__struct.h"

/// Struct defined in msg/PickObject in the package bosdyn_msgs.
/**
  * AUTOMATICALLY GENERATED BY PROTO CONVERSION
 */
typedef struct bosdyn_msgs__msg__PickObject
{
  /// Name of the frame you want to give your input in.
  rosidl_runtime_c__String frame_name;
  /// Pickup an object at the location, given in the frame named above.
  geometry_msgs__msg__Vector3 object_rt_frame;
  bool object_rt_frame_is_set;
  /// Optional parameters for the grasp.
  bosdyn_msgs__msg__GraspParams grasp_params;
  bool grasp_params_is_set;
} bosdyn_msgs__msg__PickObject;

// Struct for a sequence of bosdyn_msgs__msg__PickObject.
typedef struct bosdyn_msgs__msg__PickObject__Sequence
{
  bosdyn_msgs__msg__PickObject * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} bosdyn_msgs__msg__PickObject__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // BOSDYN_MSGS__MSG__DETAIL__PICK_OBJECT__STRUCT_H_