// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from bosdyn_msgs:msg/GetLocalGridTypesResponse.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__GET_LOCAL_GRID_TYPES_RESPONSE__STRUCT_H_
#define BOSDYN_MSGS__MSG__DETAIL__GET_LOCAL_GRID_TYPES_RESPONSE__STRUCT_H_

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
#include "bosdyn_msgs/msg/detail/response_header__struct.h"
// Member 'local_grid_type'
#include "bosdyn_msgs/msg/detail/local_grid_type__struct.h"

/// Struct defined in msg/GetLocalGridTypesResponse in the package bosdyn_msgs.
/**
  * AUTOMATICALLY GENERATED BY PROTO CONVERSION
 */
typedef struct bosdyn_msgs__msg__GetLocalGridTypesResponse
{
  /// The GetLocalGridTypes response message returns to get all known string names for local grid types.
  /// Common response header.
  bosdyn_msgs__msg__ResponseHeader header;
  bool header_is_set;
  /// The list of available local grid types.
  bosdyn_msgs__msg__LocalGridType__Sequence local_grid_type;
} bosdyn_msgs__msg__GetLocalGridTypesResponse;

// Struct for a sequence of bosdyn_msgs__msg__GetLocalGridTypesResponse.
typedef struct bosdyn_msgs__msg__GetLocalGridTypesResponse__Sequence
{
  bosdyn_msgs__msg__GetLocalGridTypesResponse * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} bosdyn_msgs__msg__GetLocalGridTypesResponse__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // BOSDYN_MSGS__MSG__DETAIL__GET_LOCAL_GRID_TYPES_RESPONSE__STRUCT_H_