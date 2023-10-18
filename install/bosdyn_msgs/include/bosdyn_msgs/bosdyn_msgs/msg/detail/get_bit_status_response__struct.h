// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from bosdyn_msgs:msg/GetBITStatusResponse.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__GET_BIT_STATUS_RESPONSE__STRUCT_H_
#define BOSDYN_MSGS__MSG__DETAIL__GET_BIT_STATUS_RESPONSE__STRUCT_H_

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
// Member 'events'
#include "bosdyn_msgs/msg/detail/system_fault__struct.h"
// Member 'degradations'
#include "bosdyn_msgs/msg/detail/get_bit_status_response_degradation__struct.h"

/// Struct defined in msg/GetBITStatusResponse in the package bosdyn_msgs.
/**
  * AUTOMATICALLY GENERATED BY PROTO CONVERSION
 */
typedef struct bosdyn_msgs__msg__GetBITStatusResponse
{
  /// Data on the current status of built-in tests.
  /// Common response header.
  bosdyn_msgs__msg__ResponseHeader header;
  bool header_is_set;
  /// Fault events that have been reported.
  bosdyn_msgs__msg__SystemFault__Sequence events;
  /// Degredations are not necessesarily faults; a unit
  /// with no installed mechanical PTZ will behave differently,
  /// but nothing's actually wrong.
  /// List of system states that may effect performance.
  bosdyn_msgs__msg__GetBITStatusResponseDegradation__Sequence degradations;
} bosdyn_msgs__msg__GetBITStatusResponse;

// Struct for a sequence of bosdyn_msgs__msg__GetBITStatusResponse.
typedef struct bosdyn_msgs__msg__GetBITStatusResponse__Sequence
{
  bosdyn_msgs__msg__GetBITStatusResponse * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} bosdyn_msgs__msg__GetBITStatusResponse__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // BOSDYN_MSGS__MSG__DETAIL__GET_BIT_STATUS_RESPONSE__STRUCT_H_