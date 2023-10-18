// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from bosdyn_msgs:msg/ListLogpointsResponse.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__LIST_LOGPOINTS_RESPONSE__STRUCT_H_
#define BOSDYN_MSGS__MSG__DETAIL__LIST_LOGPOINTS_RESPONSE__STRUCT_H_

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
// Member 'logpoints'
#include "bosdyn_msgs/msg/detail/logpoint__struct.h"

/// Struct defined in msg/ListLogpointsResponse in the package bosdyn_msgs.
/**
  * AUTOMATICALLY GENERATED BY PROTO CONVERSION
 */
typedef struct bosdyn_msgs__msg__ListLogpointsResponse
{
  /// Provide all log points in the system.
  /// Common response header.
  bosdyn_msgs__msg__ResponseHeader header;
  bool header_is_set;
  /// List of all the individual log points concatenated into a list.
  /// This stream may take a long time to complete if there are a lot of stored images.
  bosdyn_msgs__msg__Logpoint__Sequence logpoints;
} bosdyn_msgs__msg__ListLogpointsResponse;

// Struct for a sequence of bosdyn_msgs__msg__ListLogpointsResponse.
typedef struct bosdyn_msgs__msg__ListLogpointsResponse__Sequence
{
  bosdyn_msgs__msg__ListLogpointsResponse * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} bosdyn_msgs__msg__ListLogpointsResponse__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // BOSDYN_MSGS__MSG__DETAIL__LIST_LOGPOINTS_RESPONSE__STRUCT_H_