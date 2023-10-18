// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from bosdyn_msgs:msg/PageInfo.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__PAGE_INFO__STRUCT_H_
#define BOSDYN_MSGS__MSG__DETAIL__PAGE_INFO__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'id'
// Member 'path'
// Member 'source'
#include "rosidl_runtime_c/string.h"
// Member 'time_range'
#include "bosdyn_msgs/msg/detail/time_range__struct.h"
// Member 'format'
#include "bosdyn_msgs/msg/detail/page_info_page_format__struct.h"
// Member 'compression'
#include "bosdyn_msgs/msg/detail/page_info_compression__struct.h"
// Member 'deleted_timestamp'
// Member 'download_started_timestamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in msg/PageInfo in the package bosdyn_msgs.
/**
  * AUTOMATICALLY GENERATED BY PROTO CONVERSION
 */
typedef struct bosdyn_msgs__msg__PageInfo
{
  /// A unit of data storage.
  /// This may be a bddf data file.
  /// Like a file, this data may be downloaded or deleted all together for example.
  /// Identifier unique to robot.
  rosidl_runtime_c__String id;
  /// Relative path to file, if file storage.
  rosidl_runtime_c__String path;
  /// Name of service/client which provided the data.
  rosidl_runtime_c__String source;
  /// Time range of the relevant data in the page.
  bosdyn_msgs__msg__TimeRange time_range;
  bool time_range_is_set;
  /// Number of time samples or blobs.
  int64_t num_ticks;
  /// Total size of data in the page.
  int64_t total_bytes;
  bosdyn_msgs__msg__PageInfoPageFormat format;
  bosdyn_msgs__msg__PageInfoCompression compression;
  /// True if data is still being written into this page, false if page is complete.
  bool is_open;
  /// True if data is marked as having been downloaded.
  bool is_downloaded;
  /// If this exists, the page was deleted from the robot at the specified time.
  builtin_interfaces__msg__Time deleted_timestamp;
  bool deleted_timestamp_is_set;
  /// If this exists, download from this page was started at the specified time.
  builtin_interfaces__msg__Time download_started_timestamp;
  bool download_started_timestamp_is_set;
  /// True if data has been requested to be preserved.
  bool request_preserve;
} bosdyn_msgs__msg__PageInfo;

// Struct for a sequence of bosdyn_msgs__msg__PageInfo.
typedef struct bosdyn_msgs__msg__PageInfo__Sequence
{
  bosdyn_msgs__msg__PageInfo * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} bosdyn_msgs__msg__PageInfo__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // BOSDYN_MSGS__MSG__DETAIL__PAGE_INFO__STRUCT_H_