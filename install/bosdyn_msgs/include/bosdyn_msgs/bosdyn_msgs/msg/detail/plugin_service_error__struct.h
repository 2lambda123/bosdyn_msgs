// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from bosdyn_msgs:msg/PluginServiceError.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__PLUGIN_SERVICE_ERROR__STRUCT_H_
#define BOSDYN_MSGS__MSG__DETAIL__PLUGIN_SERVICE_ERROR__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'service_name'
// Member 'message'
#include "rosidl_runtime_c/string.h"
// Member 'error'
#include "bosdyn_msgs/msg/detail/plugin_service_error_error_code__struct.h"

/// Struct defined in msg/PluginServiceError in the package bosdyn_msgs.
/**
  * AUTOMATICALLY GENERATED BY PROTO CONVERSION
 */
typedef struct bosdyn_msgs__msg__PluginServiceError
{
  /// An error associated with a particular data acquisition plugin service that was
  /// Name of the service with the error
  rosidl_runtime_c__String service_name;
  /// Possible ways a plugin can fail.
  /// Failure mode.
  bosdyn_msgs__msg__PluginServiceErrorErrorCode error;
  /// Description of the error.
  rosidl_runtime_c__String message;
} bosdyn_msgs__msg__PluginServiceError;

// Struct for a sequence of bosdyn_msgs__msg__PluginServiceError.
typedef struct bosdyn_msgs__msg__PluginServiceError__Sequence
{
  bosdyn_msgs__msg__PluginServiceError * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} bosdyn_msgs__msg__PluginServiceError__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // BOSDYN_MSGS__MSG__DETAIL__PLUGIN_SERVICE_ERROR__STRUCT_H_