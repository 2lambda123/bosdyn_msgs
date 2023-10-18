// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from bosdyn_msgs:msg/Staircase.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__STAIRCASE__STRUCT_H_
#define BOSDYN_MSGS__MSG__DETAIL__STAIRCASE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'knowledge_type'
#include "bosdyn_msgs/msg/detail/staircase_knowledge_type__struct.h"
// Member 'stair_tform'
#include "bosdyn_msgs/msg/detail/stair_transform__struct.h"
// Member 'average_width'
#include "bosdyn_msgs/msg/detail/staircase_width__struct.h"
// Member 'steps'
#include "bosdyn_msgs/msg/detail/staircase_step__struct.h"

/// Struct defined in msg/Staircase in the package bosdyn_msgs.
/**
  * AUTOMATICALLY GENERATED BY PROTO CONVERSION
 */
typedef struct bosdyn_msgs__msg__Staircase
{
  /// How do we know about this staircase.
  bosdyn_msgs__msg__StaircaseKnowledgeType knowledge_type;
  /// Location of the stairs origin relative to some named frame.
  /// Origin defined as the center of the bottom of the lowest riser.
  bosdyn_msgs__msg__StairTransform stair_tform;
  bool stair_tform_is_set;
  /// Simple definition of staircase.
  /// Redundant with individual step information below.
  /// Provided for convenience.
  /// Number of vertical risers.
  int32_t number_of_steps;
  /// Average vertical height of each step in meters.
  double average_rise;
  /// Average horizontal distance between risers in meters.
  double average_run;
  /// Average width.
  bosdyn_msgs__msg__StaircaseWidth average_width;
  bool average_width_is_set;
  /// The individual steps ordered from lowest to highest.
  bosdyn_msgs__msg__StaircaseStep__Sequence steps;
} bosdyn_msgs__msg__Staircase;

// Struct for a sequence of bosdyn_msgs__msg__Staircase.
typedef struct bosdyn_msgs__msg__Staircase__Sequence
{
  bosdyn_msgs__msg__Staircase * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} bosdyn_msgs__msg__Staircase__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // BOSDYN_MSGS__MSG__DETAIL__STAIRCASE__STRUCT_H_