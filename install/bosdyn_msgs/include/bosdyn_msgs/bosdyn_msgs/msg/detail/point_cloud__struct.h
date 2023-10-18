// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from bosdyn_msgs:msg/PointCloud.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__POINT_CLOUD__STRUCT_H_
#define BOSDYN_MSGS__MSG__DETAIL__POINT_CLOUD__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'source'
#include "bosdyn_msgs/msg/detail/point_cloud_source__struct.h"
// Member 'encoding'
#include "bosdyn_msgs/msg/detail/point_cloud_encoding__struct.h"
// Member 'encoding_parameters'
#include "bosdyn_msgs/msg/detail/point_cloud_encoding_parameters__struct.h"
// Member 'data'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/PointCloud in the package bosdyn_msgs.
/**
  * AUTOMATICALLY GENERATED BY PROTO CONVERSION
 */
typedef struct bosdyn_msgs__msg__PointCloud
{
  /// Data from a point-cloud producing sensor or process.
  /// The sensor or process that produced the point cloud.
  bosdyn_msgs__msg__PointCloudSource source;
  bool source_is_set;
  /// The number of points in the point cloud.
  int32_t num_points;
  /// Point clouds may be encoded in different ways to preserve bandwidth or disk space.
  /// Parameters needed to decode the point cloud.
  /// Representation of the underlying point cloud data.
  bosdyn_msgs__msg__PointCloudEncoding encoding;
  /// Constants needed to decode the point cloud.
  bosdyn_msgs__msg__PointCloudEncodingParameters encoding_parameters;
  bool encoding_parameters_is_set;
  /// Raw byte data representing the points.
  rosidl_runtime_c__octet__Sequence data;
} bosdyn_msgs__msg__PointCloud;

// Struct for a sequence of bosdyn_msgs__msg__PointCloud.
typedef struct bosdyn_msgs__msg__PointCloud__Sequence
{
  bosdyn_msgs__msg__PointCloud * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} bosdyn_msgs__msg__PointCloud__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // BOSDYN_MSGS__MSG__DETAIL__POINT_CLOUD__STRUCT_H_