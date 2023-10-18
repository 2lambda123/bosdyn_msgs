// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from bosdyn_msgs:msg/NetworkComputeCapability.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__NETWORK_COMPUTE_CAPABILITY__STRUCT_H_
#define BOSDYN_MSGS__MSG__DETAIL__NETWORK_COMPUTE_CAPABILITY__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'server_config'
#include "bosdyn_msgs/msg/detail/network_compute_server_configuration__struct.h"
// Member 'models'
#include "bosdyn_msgs/msg/detail/available_models__struct.h"

/// Struct defined in msg/NetworkComputeCapability in the package bosdyn_msgs.
/**
  * AUTOMATICALLY GENERATED BY PROTO CONVERSION
 */
typedef struct bosdyn_msgs__msg__NetworkComputeCapability
{
  /// Service information.
  bosdyn_msgs__msg__NetworkComputeServerConfiguration server_config;
  bool server_config_is_set;
  /// Provide list of available models.
  /// DEPRECATED as of 3.3. Replaced by AvailableModels.
  /// Information about available classes for each model.
  /// DEPRECATED as of 3.3. Replaced by AvailableModels.
  /// Envelope message for repeated ModelData.
  bosdyn_msgs__msg__AvailableModels models;
  bool models_is_set;
} bosdyn_msgs__msg__NetworkComputeCapability;

// Struct for a sequence of bosdyn_msgs__msg__NetworkComputeCapability.
typedef struct bosdyn_msgs__msg__NetworkComputeCapability__Sequence
{
  bosdyn_msgs__msg__NetworkComputeCapability * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} bosdyn_msgs__msg__NetworkComputeCapability__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // BOSDYN_MSGS__MSG__DETAIL__NETWORK_COMPUTE_CAPABILITY__STRUCT_H_