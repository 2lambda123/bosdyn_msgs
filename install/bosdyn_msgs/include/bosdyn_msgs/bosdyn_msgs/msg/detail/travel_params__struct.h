// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from bosdyn_msgs:msg/TravelParams.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__TRAVEL_PARAMS__STRUCT_H_
#define BOSDYN_MSGS__MSG__DETAIL__TRAVEL_PARAMS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'velocity_limit'
#include "bosdyn_msgs/msg/detail/se2_velocity_limit__struct.h"
// Member 'feature_quality_tolerance'
#include "bosdyn_msgs/msg/detail/travel_params_feature_quality_tolerance__struct.h"
// Member 'path_following_mode'
#include "bosdyn_msgs/msg/detail/edge_annotations_path_following_mode__struct.h"
// Member 'blocked_path_wait_time'
#include "builtin_interfaces/msg/detail/duration__struct.h"
// Member 'ground_clutter_mode'
#include "bosdyn_msgs/msg/detail/edge_annotations_ground_clutter_avoidance_mode__struct.h"

/// Struct defined in msg/TravelParams in the package bosdyn_msgs.
/**
  * AUTOMATICALLY GENERATED BY PROTO CONVERSION
 */
typedef struct bosdyn_msgs__msg__TravelParams
{
  /// Parameters describing how to travel along a route.
  /// Threshold for the maximum distance that defines when we have reached
  /// the final waypoint.
  double max_distance;
  /// Threshold for the maximum yaw that defines when we have reached
  /// the final waypoint (ignored if ignore_final_yaw is set to true).
  double max_yaw;
  /// Speed the robot should use.
  /// Omit to let the robot choose.
  bosdyn_msgs__msg__SE2VelocityLimit velocity_limit;
  bool velocity_limit_is_set;
  /// If true, the robot will only try to achieve
  /// the final translation of the route. Otherwise,
  /// it will attempt to achieve the yaw as well.
  bool ignore_final_yaw;
  /// Indicates whether robot will navigate through areas with poor quality features
  bosdyn_msgs__msg__TravelParamsFeatureQualityTolerance feature_quality_tolerance;
  /// Disable directed exploration to skip blocked portions of route
  bool disable_directed_exploration;
  /// Disable alternate-route-finding; overrides the per-edge setting in the map.
  bool disable_alternate_route_finding;
  /// Path following mode
  bosdyn_msgs__msg__EdgeAnnotationsPathFollowingMode path_following_mode;
  /// Time to wait for blocked path to clear (seconds)
  builtin_interfaces__msg__Duration blocked_path_wait_time;
  bool blocked_path_wait_time_is_set;
  /// Ground clutter avoidance mode.
  bosdyn_msgs__msg__EdgeAnnotationsGroundClutterAvoidanceMode ground_clutter_mode;
} bosdyn_msgs__msg__TravelParams;

// Struct for a sequence of bosdyn_msgs__msg__TravelParams.
typedef struct bosdyn_msgs__msg__TravelParams__Sequence
{
  bosdyn_msgs__msg__TravelParams * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} bosdyn_msgs__msg__TravelParams__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // BOSDYN_MSGS__MSG__DETAIL__TRAVEL_PARAMS__STRUCT_H_