// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from bosdyn_msgs:msg/ProcessTopologyResponse.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__PROCESS_TOPOLOGY_RESPONSE__STRUCT_H_
#define BOSDYN_MSGS__MSG__DETAIL__PROCESS_TOPOLOGY_RESPONSE__STRUCT_H_

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
#include "bosdyn_msgs/msg/detail/process_topology_response_status__struct.h"
// Member 'new_subgraph'
#include "bosdyn_msgs/msg/detail/graph__struct.h"
// Member 'missing_snapshot_ids'
// Member 'missing_waypoint_ids'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/ProcessTopologyResponse in the package bosdyn_msgs.
/**
  * AUTOMATICALLY GENERATED BY PROTO CONVERSION
 */
typedef struct bosdyn_msgs__msg__ProcessTopologyResponse
{
  /// Result of the topology processing RPC. If successful, contains a subgraph of new
  /// waypoints or edges created by this process.
  /// Standard message header.
  bosdyn_msgs__msg__ResponseHeader header;
  bool header_is_set;
  /// Result of the processing.
  bosdyn_msgs__msg__ProcessTopologyResponseStatus status;
  /// This graph contains the new edge(s) created by map processing. Note that these edges will be
  /// annotated with their creation method. Note that several subgraphs may be returned via
  /// streaming as the map is processed.
  bosdyn_msgs__msg__Graph new_subgraph;
  bool new_subgraph_is_set;
  /// If modify_map_on_server was set to true in the request, then the map currently on the server
  /// was modified using map processing. If this is set to false, then either an error occurred during
  /// processing, or modify_map_on_server was set to false in the request.
  /// When map_on_server_was_modified is set to false, the client is expected to upload the results
  /// back to the server to commit the changes.
  bool map_on_server_was_modified;
  /// When there are missing waypoint snapshots, these are the IDs of the missing snapshots.
  /// Upload them to continue.
  rosidl_runtime_c__String__Sequence missing_snapshot_ids;
  /// When there are missing waypoints, these are the IDs of the missing waypoints. Upload them
  /// to continue.
  rosidl_runtime_c__String__Sequence missing_waypoint_ids;
  /// If true, the processing timed out. Note that this is not considered an error. Run topology processing again
  /// to continue adding edges.
  bool timed_out;
} bosdyn_msgs__msg__ProcessTopologyResponse;

// Struct for a sequence of bosdyn_msgs__msg__ProcessTopologyResponse.
typedef struct bosdyn_msgs__msg__ProcessTopologyResponse__Sequence
{
  bosdyn_msgs__msg__ProcessTopologyResponse * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} bosdyn_msgs__msg__ProcessTopologyResponse__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // BOSDYN_MSGS__MSG__DETAIL__PROCESS_TOPOLOGY_RESPONSE__STRUCT_H_