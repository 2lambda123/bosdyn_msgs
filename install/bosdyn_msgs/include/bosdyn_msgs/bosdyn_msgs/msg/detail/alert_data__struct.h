// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from bosdyn_msgs:msg/AlertData.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__ALERT_DATA__STRUCT_H_
#define BOSDYN_MSGS__MSG__DETAIL__ALERT_DATA__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'severity'
#include "bosdyn_msgs/msg/detail/alert_data_severity_level__struct.h"
// Member 'title'
// Member 'source'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/AlertData in the package bosdyn_msgs.
/**
  * AUTOMATICALLY GENERATED BY PROTO CONVERSION
 */
typedef struct bosdyn_msgs__msg__AlertData
{
  /// Structured data indicating an alert detected off the robot that can be stored in the DataBuffer
  /// and associated with with previously stored data.
  /// Severity of this alert.
  bosdyn_msgs__msg__AlertDataSeverityLevel severity;
  /// Human readable alert title/summary.
  rosidl_runtime_c__String title;
  /// The source that triggered the alert.
  rosidl_runtime_c__String source;
} bosdyn_msgs__msg__AlertData;

// Struct for a sequence of bosdyn_msgs__msg__AlertData.
typedef struct bosdyn_msgs__msg__AlertData__Sequence
{
  bosdyn_msgs__msg__AlertData * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} bosdyn_msgs__msg__AlertData__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // BOSDYN_MSGS__MSG__DETAIL__ALERT_DATA__STRUCT_H_