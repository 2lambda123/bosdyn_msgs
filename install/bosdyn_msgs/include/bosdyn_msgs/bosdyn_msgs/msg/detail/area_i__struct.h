// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from bosdyn_msgs:msg/AreaI.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__AREA_I__STRUCT_H_
#define BOSDYN_MSGS__MSG__DETAIL__AREA_I__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'geometry'
#include "bosdyn_msgs/msg/detail/area_i_one_of_geometry__struct.h"

/// Struct defined in msg/AreaI in the package bosdyn_msgs.
/**
  * AUTOMATICALLY GENERATED BY PROTO CONVERSION
 */
typedef struct bosdyn_msgs__msg__AreaI
{
  /// Represents an area in the XY plane, with integer indices
  bosdyn_msgs__msg__AreaIOneOfGeometry geometry;
} bosdyn_msgs__msg__AreaI;

// Struct for a sequence of bosdyn_msgs__msg__AreaI.
typedef struct bosdyn_msgs__msg__AreaI__Sequence
{
  bosdyn_msgs__msg__AreaI * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} bosdyn_msgs__msg__AreaI__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // BOSDYN_MSGS__MSG__DETAIL__AREA_I__STRUCT_H_