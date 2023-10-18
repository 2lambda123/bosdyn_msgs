// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from bosdyn_msgs:msg/GetBITStatusRequest.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__GET_BIT_STATUS_REQUEST__STRUCT_H_
#define BOSDYN_MSGS__MSG__DETAIL__GET_BIT_STATUS_REQUEST__STRUCT_H_

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

/// Struct defined in msg/GetBITStatusRequest in the package bosdyn_msgs.
/**
  * AUTOMATICALLY GENERATED BY PROTO CONVERSION
 */
typedef struct bosdyn_msgs__msg__GetBITStatusRequest
{
  /// Request the status of all built-in tests.
  /// Common request header.
  bosdyn_msgs__msg__RequestHeader header;
  bool header_is_set;
} bosdyn_msgs__msg__GetBITStatusRequest;

// Struct for a sequence of bosdyn_msgs__msg__GetBITStatusRequest.
typedef struct bosdyn_msgs__msg__GetBITStatusRequest__Sequence
{
  bosdyn_msgs__msg__GetBITStatusRequest * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} bosdyn_msgs__msg__GetBITStatusRequest__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // BOSDYN_MSGS__MSG__DETAIL__GET_BIT_STATUS_REQUEST__STRUCT_H_