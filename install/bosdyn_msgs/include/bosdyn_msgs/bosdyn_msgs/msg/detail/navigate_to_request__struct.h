// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from bosdyn_msgs:msg/NavigateToRequest.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__NAVIGATE_TO_REQUEST__STRUCT_H_
#define BOSDYN_MSGS__MSG__DETAIL__NAVIGATE_TO_REQUEST__STRUCT_H_

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
// Member 'leases'
#include "bosdyn_msgs/msg/detail/lease__struct.h"
// Member 'destination_waypoint_id'
// Member 'clock_identifier'
#include "rosidl_runtime_c/string.h"
// Member 'route_params'
#include "bosdyn_msgs/msg/detail/route_gen_params__struct.h"
// Member 'travel_params'
#include "bosdyn_msgs/msg/detail/travel_params__struct.h"
// Member 'end_time'
#include "builtin_interfaces/msg/detail/time__struct.h"
// Member 'destination_waypoint_tform_body_goal'
#include "bosdyn_msgs/msg/detail/se2_pose__struct.h"
// Member 'route_blocked_behavior'
#include "bosdyn_msgs/msg/detail/route_following_params_route_blocked_behavior__struct.h"

/// Struct defined in msg/NavigateToRequest in the package bosdyn_msgs.
/**
  * AUTOMATICALLY GENERATED BY PROTO CONVERSION
 */
typedef struct bosdyn_msgs__msg__NavigateToRequest
{
  /// The NavigateToRequest can be used to command GraphNav to drive the robot to a specific waypoint.
  /// GraphNav will plan a path through the map which most efficiently gets the robot to the specified goal waypoint.
  /// Parameters are provided which influence how GraphNav will generate and follow the path.
  /// This RPC returns immediately after the request is processed. It does not block until GraphNav completes the path
  /// to the goal waypoint. The user is expected to periodically check the status of the NavigateTo command using
  /// the NavigationFeedbackRequest RPC.
  /// Common request header.
  bosdyn_msgs__msg__RequestHeader header;
  bool header_is_set;
  /// The Leases to show ownership of the robot and the graph.
  bosdyn_msgs__msg__Lease__Sequence leases;
  /// ID of the waypoint to go to.
  rosidl_runtime_c__String destination_waypoint_id;
  /// Preferences on how to pick the route.
  bosdyn_msgs__msg__RouteGenParams route_params;
  bool route_params_is_set;
  /// Parameters that define how to traverse and end the route.
  bosdyn_msgs__msg__TravelParams travel_params;
  bool travel_params_is_set;
  /// The timestamp (in robot time) that the navigation command is valid until.
  builtin_interfaces__msg__Time end_time;
  bool end_time_is_set;
  /// Identifier provided by the time sync service to verify time sync between robot and client.
  rosidl_runtime_c__String clock_identifier;
  /// If provided, graph_nav will move the robot to an SE2 pose relative to the waypoint.
  /// Note that the robot will treat this as a simple goto request. It will first arrive at the
  /// destination waypoint, and then travel in a straight line from the destination waypoint to the
  /// offset goal, attempting to avoid obstacles along the way.
  bosdyn_msgs__msg__SE2Pose destination_waypoint_tform_body_goal;
  bool destination_waypoint_tform_body_goal_is_set;
  /// Unique identifier for the command. If 0, this is a new command, otherwise it is a continuation
  /// of an existing command. If this is a continuation of an existing command, all parameters will be
  /// ignored, and the old parameters will be preserved.
  uint32_t command_id;
  /// Defines robot behavior when route is blocked. Defaults to reroute when route is blocked.
  bosdyn_msgs__msg__RouteFollowingParamsRouteBlockedBehavior route_blocked_behavior;
} bosdyn_msgs__msg__NavigateToRequest;

// Struct for a sequence of bosdyn_msgs__msg__NavigateToRequest.
typedef struct bosdyn_msgs__msg__NavigateToRequest__Sequence
{
  bosdyn_msgs__msg__NavigateToRequest * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} bosdyn_msgs__msg__NavigateToRequest__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // BOSDYN_MSGS__MSG__DETAIL__NAVIGATE_TO_REQUEST__STRUCT_H_