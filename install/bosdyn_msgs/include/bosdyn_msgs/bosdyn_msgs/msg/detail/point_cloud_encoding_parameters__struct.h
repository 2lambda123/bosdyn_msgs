// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from bosdyn_msgs:msg/PointCloudEncodingParameters.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__POINT_CLOUD_ENCODING_PARAMETERS__STRUCT_H_
#define BOSDYN_MSGS__MSG__DETAIL__POINT_CLOUD_ENCODING_PARAMETERS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/PointCloudEncodingParameters in the package bosdyn_msgs.
/**
  * AUTOMATICALLY GENERATED BY PROTO CONVERSION
 */
typedef struct bosdyn_msgs__msg__PointCloudEncodingParameters
{
  /// Used in the remapping process from bytes to metric units. (unitless)
  int32_t scale_factor;
  /// In XYZ_4SC and XYZ_5SC, the point cloud is assumed to lie inside a box
  /// centered in the data frame. max_x, max_y, max_z are half the dimensions
  /// of that box. These dimensions should be assumed to be meters.
  double max_x;
  /// max_y is half the dimensions of the assumed box (for XYZ_4SC and XYZ_5SC). These
  /// dimensions should be assumed to be meters.
  double max_y;
  /// max_z is half the dimensions of the assumed box (for XYZ_4SC and XYZ_5SC). These
  /// dimensions should be assumed to be meters.
  double max_z;
  /// Used in the remapping process from bytes to metric units. (unitless)
  /// For XYZ_4SC and XYZ_5C, this should equal 127.
  double remapping_constant;
  /// Number of bytes in each point in this encoding.
  int32_t bytes_per_point;
} bosdyn_msgs__msg__PointCloudEncodingParameters;

// Struct for a sequence of bosdyn_msgs__msg__PointCloudEncodingParameters.
typedef struct bosdyn_msgs__msg__PointCloudEncodingParameters__Sequence
{
  bosdyn_msgs__msg__PointCloudEncodingParameters * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} bosdyn_msgs__msg__PointCloudEncodingParameters__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // BOSDYN_MSGS__MSG__DETAIL__POINT_CLOUD_ENCODING_PARAMETERS__STRUCT_H_