// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from bosdyn_msgs:msg/DownloadEdgeSnapshotResponse.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__DOWNLOAD_EDGE_SNAPSHOT_RESPONSE__STRUCT_H_
#define BOSDYN_MSGS__MSG__DETAIL__DOWNLOAD_EDGE_SNAPSHOT_RESPONSE__STRUCT_H_

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
#include "bosdyn_msgs/msg/detail/response_header__struct.h"
// Member 'status'
#include "bosdyn_msgs/msg/detail/download_edge_snapshot_response_status__struct.h"
// Member 'edge_snapshot_id'
#include "rosidl_runtime_c/string.h"
// Member 'chunk'
#include "bosdyn_msgs/msg/detail/data_chunk__struct.h"

/// Struct defined in msg/DownloadEdgeSnapshotResponse in the package bosdyn_msgs.
/**
  * AUTOMATICALLY GENERATED BY PROTO CONVERSION
 */
typedef struct bosdyn_msgs__msg__DownloadEdgeSnapshotResponse
{
  /// The DownloadEdgeSnapshot response streams the data of the edge snapshot id
  /// currently being downloaded in data chunks no larger than 4MB in size. It is necessary
  /// to stream these data to avoid overwhelming gRPC with large http requests.
  /// Common response header.
  bosdyn_msgs__msg__ResponseHeader header;
  bool header_is_set;
  /// Return status for the request.
  bosdyn_msgs__msg__DownloadEdgeSnapshotResponseStatus status;
  /// ID of the snapshot associated with an edge.
  rosidl_runtime_c__String edge_snapshot_id;
  /// Chunk of data to download. Responses are sent in sequence until the
  /// data chunk is complete. After receiving all chunks, concatenate them
  /// into a single byte string. Then, deserialize the byte string into an
  /// EdgeSnapshot object.
  bosdyn_msgs__msg__DataChunk chunk;
  bool chunk_is_set;
} bosdyn_msgs__msg__DownloadEdgeSnapshotResponse;

// Struct for a sequence of bosdyn_msgs__msg__DownloadEdgeSnapshotResponse.
typedef struct bosdyn_msgs__msg__DownloadEdgeSnapshotResponse__Sequence
{
  bosdyn_msgs__msg__DownloadEdgeSnapshotResponse * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} bosdyn_msgs__msg__DownloadEdgeSnapshotResponse__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // BOSDYN_MSGS__MSG__DETAIL__DOWNLOAD_EDGE_SNAPSHOT_RESPONSE__STRUCT_H_