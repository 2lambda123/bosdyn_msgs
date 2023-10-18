// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from bosdyn_msgs:msg/TimeSyncUpdateRequest.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__TIME_SYNC_UPDATE_REQUEST__STRUCT_H_
#define BOSDYN_MSGS__MSG__DETAIL__TIME_SYNC_UPDATE_REQUEST__STRUCT_H_

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
// Member 'previous_round_trip'
#include "bosdyn_msgs/msg/detail/time_sync_round_trip__struct.h"
// Member 'clock_identifier'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/TimeSyncUpdateRequest in the package bosdyn_msgs.
/**
  * AUTOMATICALLY GENERATED BY PROTO CONVERSION
 */
typedef struct bosdyn_msgs__msg__TimeSyncUpdateRequest
{
  /// Request message for a time-sync Update RPC.
  /// Common request header.
  bosdyn_msgs__msg__RequestHeader header;
  bool header_is_set;
  /// Round-trip timing information from the previous Update request.
  bosdyn_msgs__msg__TimeSyncRoundTrip previous_round_trip;
  bool previous_round_trip_is_set;
  /// Identifier to verify time sync between robot and client. If unset, server will assign
  /// one to client.
  rosidl_runtime_c__String clock_identifier;
} bosdyn_msgs__msg__TimeSyncUpdateRequest;

// Struct for a sequence of bosdyn_msgs__msg__TimeSyncUpdateRequest.
typedef struct bosdyn_msgs__msg__TimeSyncUpdateRequest__Sequence
{
  bosdyn_msgs__msg__TimeSyncUpdateRequest * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} bosdyn_msgs__msg__TimeSyncUpdateRequest__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // BOSDYN_MSGS__MSG__DETAIL__TIME_SYNC_UPDATE_REQUEST__STRUCT_H_