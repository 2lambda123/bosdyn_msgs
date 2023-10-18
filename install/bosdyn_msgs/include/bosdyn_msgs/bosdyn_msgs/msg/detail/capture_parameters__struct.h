// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from bosdyn_msgs:msg/CaptureParameters.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__CAPTURE_PARAMETERS__STRUCT_H_
#define BOSDYN_MSGS__MSG__DETAIL__CAPTURE_PARAMETERS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'exposure_duration'
#include "builtin_interfaces/msg/detail/duration__struct.h"
// Member 'custom_params'
#include "bosdyn_msgs/msg/detail/dict_param__struct.h"

/// Struct defined in msg/CaptureParameters in the package bosdyn_msgs.
/**
  * AUTOMATICALLY GENERATED BY PROTO CONVERSION
 */
typedef struct bosdyn_msgs__msg__CaptureParameters
{
  /// Sensor parameters associated with an image capture.
  /// The duration of exposure in microseconds.
  builtin_interfaces__msg__Duration exposure_duration;
  bool exposure_duration_is_set;
  /// Sensor gain in dB.
  double gain;
  /// Any other custom parameters used in the image capture.
  bosdyn_msgs__msg__DictParam custom_params;
  bool custom_params_is_set;
} bosdyn_msgs__msg__CaptureParameters;

// Struct for a sequence of bosdyn_msgs__msg__CaptureParameters.
typedef struct bosdyn_msgs__msg__CaptureParameters__Sequence
{
  bosdyn_msgs__msg__CaptureParameters * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} bosdyn_msgs__msg__CaptureParameters__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // BOSDYN_MSGS__MSG__DETAIL__CAPTURE_PARAMETERS__STRUCT_H_