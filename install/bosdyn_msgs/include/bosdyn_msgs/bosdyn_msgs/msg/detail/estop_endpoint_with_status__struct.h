// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from bosdyn_msgs:msg/EstopEndpointWithStatus.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__ESTOP_ENDPOINT_WITH_STATUS__STRUCT_H_
#define BOSDYN_MSGS__MSG__DETAIL__ESTOP_ENDPOINT_WITH_STATUS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'endpoint'
#include "bosdyn_msgs/msg/detail/estop_endpoint__struct.h"
// Member 'stop_level'
#include "bosdyn_msgs/msg/detail/estop_stop_level__struct.h"
// Member 'time_since_valid_response'
#include "builtin_interfaces/msg/detail/duration__struct.h"

/// Struct defined in msg/EstopEndpointWithStatus in the package bosdyn_msgs.
/**
  * AUTOMATICALLY GENERATED BY PROTO CONVERSION
 */
typedef struct bosdyn_msgs__msg__EstopEndpointWithStatus
{
  /// EstopEndpoint with some extra status data.
  /// The endpoint.
  bosdyn_msgs__msg__EstopEndpoint endpoint;
  bool endpoint_is_set;
  /// Stop level most recently requested by the endpoint.
  bosdyn_msgs__msg__EstopStopLevel stop_level;
  /// Time since a valid response was provided by the endpoint.
  builtin_interfaces__msg__Duration time_since_valid_response;
  bool time_since_valid_response_is_set;
} bosdyn_msgs__msg__EstopEndpointWithStatus;

// Struct for a sequence of bosdyn_msgs__msg__EstopEndpointWithStatus.
typedef struct bosdyn_msgs__msg__EstopEndpointWithStatus__Sequence
{
  bosdyn_msgs__msg__EstopEndpointWithStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} bosdyn_msgs__msg__EstopEndpointWithStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // BOSDYN_MSGS__MSG__DETAIL__ESTOP_ENDPOINT_WITH_STATUS__STRUCT_H_