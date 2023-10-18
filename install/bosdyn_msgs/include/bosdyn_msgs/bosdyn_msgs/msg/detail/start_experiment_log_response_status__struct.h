// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from bosdyn_msgs:msg/StartExperimentLogResponseStatus.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__START_EXPERIMENT_LOG_RESPONSE_STATUS__STRUCT_H_
#define BOSDYN_MSGS__MSG__DETAIL__START_EXPERIMENT_LOG_RESPONSE_STATUS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'STATUS_UNKNOWN'.
enum
{
  bosdyn_msgs__msg__StartExperimentLogResponseStatus__STATUS_UNKNOWN = 0
};

/// Constant 'STATUS_OK'.
enum
{
  bosdyn_msgs__msg__StartExperimentLogResponseStatus__STATUS_OK = 1
};

/// Constant 'STATUS_EXPERIMENT_LOG_RUNNING'.
/**
  * Cannot start another experiment log, one is already running.
 */
enum
{
  bosdyn_msgs__msg__StartExperimentLogResponseStatus__STATUS_EXPERIMENT_LOG_RUNNING = 2
};

/// Struct defined in msg/StartExperimentLogResponseStatus in the package bosdyn_msgs.
/**
  * AUTOMATICALLY GENERATED BY PROTO CONVERSION
 */
typedef struct bosdyn_msgs__msg__StartExperimentLogResponseStatus
{
  int8_t value;
} bosdyn_msgs__msg__StartExperimentLogResponseStatus;

// Struct for a sequence of bosdyn_msgs__msg__StartExperimentLogResponseStatus.
typedef struct bosdyn_msgs__msg__StartExperimentLogResponseStatus__Sequence
{
  bosdyn_msgs__msg__StartExperimentLogResponseStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} bosdyn_msgs__msg__StartExperimentLogResponseStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // BOSDYN_MSGS__MSG__DETAIL__START_EXPERIMENT_LOG_RESPONSE_STATUS__STRUCT_H_