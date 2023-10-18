// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from bosdyn_msgs:msg/ProcessTopologyRequestCollisionCheckingParams.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__PROCESS_TOPOLOGY_REQUEST_COLLISION_CHECKING_PARAMS__STRUCT_H_
#define BOSDYN_MSGS__MSG__DETAIL__PROCESS_TOPOLOGY_REQUEST_COLLISION_CHECKING_PARAMS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/ProcessTopologyRequestCollisionCheckingParams in the package bosdyn_msgs.
/**
  * AUTOMATICALLY GENERATED BY PROTO CONVERSION
 */
typedef struct bosdyn_msgs__msg__ProcessTopologyRequestCollisionCheckingParams
{
  /// By default, this is true.
  bool check_edges_for_collision;
  bool check_edges_for_collision_is_set;
  /// Assume that the robot is a sphere with this radius. Only accept a
  /// loop closure if this spherical robot can travel in a straight line
  /// from one waypoint to the other without hitting obstacles.
  double collision_check_robot_radius;
  bool collision_check_robot_radius_is_set;
  /// Consider significant height variations along the edge (like stairs or ramps)
  /// to be obstacles. The edge will not be created if there is a height change along
  /// it of more than this value according to the nearby sensor data.
  double collision_check_height_variation;
  bool collision_check_height_variation_is_set;
} bosdyn_msgs__msg__ProcessTopologyRequestCollisionCheckingParams;

// Struct for a sequence of bosdyn_msgs__msg__ProcessTopologyRequestCollisionCheckingParams.
typedef struct bosdyn_msgs__msg__ProcessTopologyRequestCollisionCheckingParams__Sequence
{
  bosdyn_msgs__msg__ProcessTopologyRequestCollisionCheckingParams * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} bosdyn_msgs__msg__ProcessTopologyRequestCollisionCheckingParams__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // BOSDYN_MSGS__MSG__DETAIL__PROCESS_TOPOLOGY_REQUEST_COLLISION_CHECKING_PARAMS__STRUCT_H_