// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from bosdyn_msgs:msg/DataAcquisitionOnInterruption.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__DATA_ACQUISITION_ON_INTERRUPTION__STRUCT_H_
#define BOSDYN_MSGS__MSG__DETAIL__DATA_ACQUISITION_ON_INTERRUPTION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'child'
#include "bosdyn_msgs/msg/detail/node__struct.h"
// Member 'request_when_interrupted'
#include "bosdyn_msgs/msg/detail/data_acquisition__struct.h"
// Member 'pause_mission_metadata'
// Member 'restart_mission_metadata'
// Member 'load_mission_metadata'
// Member 'stop_mission_metadata'
// Member 'lease_use_error_metadata'
// Member 'play_mission_timeout_metadata'
// Member 'child_node_error_metadata'
// Member 'child_node_exception_metadata'
// Member 'default_metadata'
#include "bosdyn_msgs/msg/detail/metadata__struct.h"
// Member 'keys_for_lease_use_error_message'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/DataAcquisitionOnInterruption in the package bosdyn_msgs.
/**
  * AUTOMATICALLY GENERATED BY PROTO CONVERSION
 */
typedef struct bosdyn_msgs__msg__DataAcquisitionOnInterruption
{
  /// Send an AcquireDataRequest to the data acquisition service when the mission is interrupted.
  /// Interuptions are anything that causes the mission to stop ticking automatically.
  /// Child to run when node starts. If mission is interrupted while the child is still running,
  /// the mission service will send an AcquireDataRequest to the data acquisition service. The
  /// child will resume when the mission resumes. The DataAcquisitionOnInterruption node will
  /// always return the status of this child node.
  bosdyn_msgs__msg__Node child;
  bool child_is_set;
  /// Data acquisition request that will be sent if the mission is interrupted.
  /// This is not an actual node. It will only be used for the data acquisition request details.
  /// The completion_behavior and request_name_in_blackboard fields will not be used.
  bosdyn_msgs__msg__DataAcquisition request_when_interrupted;
  bool request_when_interrupted_is_set;
  /// Clients can specify a chunk of metadata for each possible interruption reason (fields 4-11).
  /// When an interruption occurs the metdata corresponding to the interruption reason will be
  /// merged with request_when_interrupted.request.metadata.
  /// Interruption reason: PauseMission RPC called.
  bosdyn_msgs__msg__Metadata pause_mission_metadata;
  bool pause_mission_metadata_is_set;
  /// Interruption reason: RestartMission RPC called.
  bosdyn_msgs__msg__Metadata restart_mission_metadata;
  bool restart_mission_metadata_is_set;
  /// Interruption reason: LoadMission RPC called.
  bosdyn_msgs__msg__Metadata load_mission_metadata;
  bool load_mission_metadata_is_set;
  /// Interruption reason: StopMission RPC called.
  bosdyn_msgs__msg__Metadata stop_mission_metadata;
  bool stop_mission_metadata_is_set;
  /// Interruption reason: Lease use error occured.
  bosdyn_msgs__msg__Metadata lease_use_error_metadata;
  bool lease_use_error_metadata_is_set;
  /// Interruption reason: Play mission timeout exceeded.
  bosdyn_msgs__msg__Metadata play_mission_timeout_metadata;
  bool play_mission_timeout_metadata_is_set;
  /// Interruption reason: Child node returned an error result.
  bosdyn_msgs__msg__Metadata child_node_error_metadata;
  bool child_node_error_metadata_is_set;
  /// Interruption reason: Child node threw an exception.
  bosdyn_msgs__msg__Metadata child_node_exception_metadata;
  bool child_node_exception_metadata_is_set;
  /// This is used if any of the above are empty or if an unexpected interruption occurs.
  bosdyn_msgs__msg__Metadata default_metadata;
  bool default_metadata_is_set;
  /// If key(s) are specified, the additional information about the lease use error will be stored
  /// in the AcquireDataRequest metadata. All given key(s) must be used in order to access the
  /// error message reason from the JSON metadata. The last key holds error message.
  rosidl_runtime_c__String__Sequence keys_for_lease_use_error_message;
} bosdyn_msgs__msg__DataAcquisitionOnInterruption;

// Struct for a sequence of bosdyn_msgs__msg__DataAcquisitionOnInterruption.
typedef struct bosdyn_msgs__msg__DataAcquisitionOnInterruption__Sequence
{
  bosdyn_msgs__msg__DataAcquisitionOnInterruption * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} bosdyn_msgs__msg__DataAcquisitionOnInterruption__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // BOSDYN_MSGS__MSG__DETAIL__DATA_ACQUISITION_ON_INTERRUPTION__STRUCT_H_