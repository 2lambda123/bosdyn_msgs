// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from bosdyn_msgs:msg/LoadMissionRequest.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__LOAD_MISSION_REQUEST__STRUCT_H_
#define BOSDYN_MSGS__MSG__DETAIL__LOAD_MISSION_REQUEST__STRUCT_H_

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
#include "bosdyn_msgs/msg/detail/request_header__struct.h"
// Member 'root'
#include "bosdyn_msgs/msg/detail/node__struct.h"
// Member 'leases'
#include "bosdyn_msgs/msg/detail/lease__struct.h"

/// Struct defined in msg/LoadMissionRequest in the package bosdyn_msgs.
/**
  * AUTOMATICALLY GENERATED BY PROTO CONVERSION
 */
typedef struct bosdyn_msgs__msg__LoadMissionRequest
{
  /// The LoadMission request specifies a root node for the mission that should be used.
  /// Common request header.
  bosdyn_msgs__msg__RequestHeader header;
  bool header_is_set;
  /// Root node of the mission to load.
  bosdyn_msgs__msg__Node root;
  bool root_is_set;
  /// Leases that will be needed to validate the mission.
  bosdyn_msgs__msg__Lease__Sequence leases;
} bosdyn_msgs__msg__LoadMissionRequest;

// Struct for a sequence of bosdyn_msgs__msg__LoadMissionRequest.
typedef struct bosdyn_msgs__msg__LoadMissionRequest__Sequence
{
  bosdyn_msgs__msg__LoadMissionRequest * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} bosdyn_msgs__msg__LoadMissionRequest__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // BOSDYN_MSGS__MSG__DETAIL__LOAD_MISSION_REQUEST__STRUCT_H_