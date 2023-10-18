// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from bosdyn_msgs:msg/UpdateExperimentLogRequest.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__UPDATE_EXPERIMENT_LOG_REQUEST__STRUCT_H_
#define BOSDYN_MSGS__MSG__DETAIL__UPDATE_EXPERIMENT_LOG_REQUEST__STRUCT_H_

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
// Member 'keep_alive'
#include "builtin_interfaces/msg/detail/duration__struct.h"
// Member 'id'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/UpdateExperimentLogRequest in the package bosdyn_msgs.
/**
  * AUTOMATICALLY GENERATED BY PROTO CONVERSION
 */
typedef struct bosdyn_msgs__msg__UpdateExperimentLogRequest
{
  /// Common request header.
  bosdyn_msgs__msg__RequestHeader header;
  bool header_is_set;
  /// How long into the future should this log continue?
  builtin_interfaces__msg__Duration keep_alive;
  bool keep_alive_is_set;
  /// Id of log to be extended.
  rosidl_runtime_c__String id;
} bosdyn_msgs__msg__UpdateExperimentLogRequest;

// Struct for a sequence of bosdyn_msgs__msg__UpdateExperimentLogRequest.
typedef struct bosdyn_msgs__msg__UpdateExperimentLogRequest__Sequence
{
  bosdyn_msgs__msg__UpdateExperimentLogRequest * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} bosdyn_msgs__msg__UpdateExperimentLogRequest__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // BOSDYN_MSGS__MSG__DETAIL__UPDATE_EXPERIMENT_LOG_REQUEST__STRUCT_H_