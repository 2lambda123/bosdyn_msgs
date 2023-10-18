// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from bosdyn_msgs:msg/WaypointAnnotationsLocalizeRegionOneOfRegion.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__WAYPOINT_ANNOTATIONS_LOCALIZE_REGION_ONE_OF_REGION__STRUCT_H_
#define BOSDYN_MSGS__MSG__DETAIL__WAYPOINT_ANNOTATIONS_LOCALIZE_REGION_ONE_OF_REGION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'REGION_NOT_SET'.
enum
{
  bosdyn_msgs__msg__WaypointAnnotationsLocalizeRegionOneOfRegion__REGION_NOT_SET = 0
};

/// Constant 'REGION_DEFAULT_REGION_SET'.
enum
{
  bosdyn_msgs__msg__WaypointAnnotationsLocalizeRegionOneOfRegion__REGION_DEFAULT_REGION_SET = 1
};

/// Constant 'REGION_EMPTY_SET'.
enum
{
  bosdyn_msgs__msg__WaypointAnnotationsLocalizeRegionOneOfRegion__REGION_EMPTY_SET = 2
};

/// Constant 'REGION_CIRCLE_SET'.
enum
{
  bosdyn_msgs__msg__WaypointAnnotationsLocalizeRegionOneOfRegion__REGION_CIRCLE_SET = 3
};

// Include directives for member types
// Member 'default_region'
#include "bosdyn_msgs/msg/detail/waypoint_annotations_localize_region_default__struct.h"
// Member 'empty'
#include "bosdyn_msgs/msg/detail/waypoint_annotations_localize_region_empty__struct.h"
// Member 'circle'
#include "bosdyn_msgs/msg/detail/waypoint_annotations_localize_region_circle2_d__struct.h"

/// Struct defined in msg/WaypointAnnotationsLocalizeRegionOneOfRegion in the package bosdyn_msgs.
/**
  * AUTOMATICALLY GENERATED BY PROTO CONVERSION
 */
typedef struct bosdyn_msgs__msg__WaypointAnnotationsLocalizeRegionOneOfRegion
{
  /// ONEOF MESSAGE  Only one of the following can be set
  /// Oneof field that describes the waypoint's location as a default region (no
  /// special features/traits).
  bosdyn_msgs__msg__WaypointAnnotationsLocalizeRegionDefault default_region;
  /// Oneof field that describes the waypoint's location as a empty/featureless region.
  bosdyn_msgs__msg__WaypointAnnotationsLocalizeRegionEmpty empty;
  /// Oneof field that describes the waypoint's location as a circular region.
  bosdyn_msgs__msg__WaypointAnnotationsLocalizeRegionCircle2D circle;
  /// Only one of the above can be filled in.  Use the enum to choose which.
  int8_t region_choice;
} bosdyn_msgs__msg__WaypointAnnotationsLocalizeRegionOneOfRegion;

// Struct for a sequence of bosdyn_msgs__msg__WaypointAnnotationsLocalizeRegionOneOfRegion.
typedef struct bosdyn_msgs__msg__WaypointAnnotationsLocalizeRegionOneOfRegion__Sequence
{
  bosdyn_msgs__msg__WaypointAnnotationsLocalizeRegionOneOfRegion * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} bosdyn_msgs__msg__WaypointAnnotationsLocalizeRegionOneOfRegion__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // BOSDYN_MSGS__MSG__DETAIL__WAYPOINT_ANNOTATIONS_LOCALIZE_REGION_ONE_OF_REGION__STRUCT_H_