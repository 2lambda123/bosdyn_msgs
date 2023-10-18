// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from bosdyn_msgs:msg/ListPayloadsRequest.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__LIST_PAYLOADS_REQUEST__STRUCT_H_
#define BOSDYN_MSGS__MSG__DETAIL__LIST_PAYLOADS_REQUEST__STRUCT_H_

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

/// Struct defined in msg/ListPayloadsRequest in the package bosdyn_msgs.
/**
  * AUTOMATICALLY GENERATED BY PROTO CONVERSION
 */
typedef struct bosdyn_msgs__msg__ListPayloadsRequest
{
  /// The ListPayloads request message sent to the robot to get all known payloads.
  /// Common request header.
  bosdyn_msgs__msg__RequestHeader header;
  bool header_is_set;
} bosdyn_msgs__msg__ListPayloadsRequest;

// Struct for a sequence of bosdyn_msgs__msg__ListPayloadsRequest.
typedef struct bosdyn_msgs__msg__ListPayloadsRequest__Sequence
{
  bosdyn_msgs__msg__ListPayloadsRequest * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} bosdyn_msgs__msg__ListPayloadsRequest__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // BOSDYN_MSGS__MSG__DETAIL__LIST_PAYLOADS_REQUEST__STRUCT_H_