// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from bosdyn_msgs:msg/RegisterEstopEndpointRequest.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__REGISTER_ESTOP_ENDPOINT_REQUEST__STRUCT_H_
#define BOSDYN_MSGS__MSG__DETAIL__REGISTER_ESTOP_ENDPOINT_REQUEST__STRUCT_H_

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
// Member 'target_endpoint'
// Member 'new_endpoint'
#include "bosdyn_msgs/msg/detail/estop_endpoint__struct.h"
// Member 'target_config_id'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/RegisterEstopEndpointRequest in the package bosdyn_msgs.
/**
  * AUTOMATICALLY GENERATED BY PROTO CONVERSION
 */
typedef struct bosdyn_msgs__msg__RegisterEstopEndpointRequest
{
  /// Register an endpoint.
  /// EstopEndpoints must be registered before they can send commands or request challenges.
  /// Common request header
  bosdyn_msgs__msg__RequestHeader header;
  bool header_is_set;
  /// The endpoint to replace.
  /// Set the endpoint's unique ID if replacing an active endpoint.
  bosdyn_msgs__msg__EstopEndpoint target_endpoint;
  bool target_endpoint_is_set;
  /// ID of the configuration we are registering against.
  rosidl_runtime_c__String target_config_id;
  /// The description of the new endpoint.
  /// Do not set the unique ID. It will be ignored.
  bosdyn_msgs__msg__EstopEndpoint new_endpoint;
  bool new_endpoint_is_set;
} bosdyn_msgs__msg__RegisterEstopEndpointRequest;

// Struct for a sequence of bosdyn_msgs__msg__RegisterEstopEndpointRequest.
typedef struct bosdyn_msgs__msg__RegisterEstopEndpointRequest__Sequence
{
  bosdyn_msgs__msg__RegisterEstopEndpointRequest * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} bosdyn_msgs__msg__RegisterEstopEndpointRequest__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // BOSDYN_MSGS__MSG__DETAIL__REGISTER_ESTOP_ENDPOINT_REQUEST__STRUCT_H_