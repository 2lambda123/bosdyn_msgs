// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from bosdyn_msgs:msg/RequestHeader.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__REQUEST_HEADER__STRUCT_H_
#define BOSDYN_MSGS__MSG__DETAIL__REQUEST_HEADER__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'request_timestamp'
#include "builtin_interfaces/msg/detail/time__struct.h"
// Member 'client_name'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/RequestHeader in the package bosdyn_msgs.
/**
  * AUTOMATICALLY GENERATED BY PROTO CONVERSION
 */
typedef struct bosdyn_msgs__msg__RequestHeader
{
  /// Standard header attached to all GRPC requests to services.
  /// Time that the request was sent, as measured by the client's local system clock.
  builtin_interfaces__msg__Time request_timestamp;
  bool request_timestamp_is_set;
  /// Name of the client to identify itself. The name will typically include a
  /// symbolic string to identify the program, and a unique integer to identify
  /// the specific instance of the process running.
  rosidl_runtime_c__String client_name;
  /// If Set to true, request that request and response messages for this call are not recorded
  /// in the GRPC log.
  bool disable_rpc_logging;
} bosdyn_msgs__msg__RequestHeader;

// Struct for a sequence of bosdyn_msgs__msg__RequestHeader.
typedef struct bosdyn_msgs__msg__RequestHeader__Sequence
{
  bosdyn_msgs__msg__RequestHeader * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} bosdyn_msgs__msg__RequestHeader__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // BOSDYN_MSGS__MSG__DETAIL__REQUEST_HEADER__STRUCT_H_