// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from bosdyn_msgs:msg/JointKinematicCheckResult.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__JOINT_KINEMATIC_CHECK_RESULT__STRUCT_H_
#define BOSDYN_MSGS__MSG__DETAIL__JOINT_KINEMATIC_CHECK_RESULT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'error'
#include "bosdyn_msgs/msg/detail/joint_kinematic_check_result_error__struct.h"

/// Struct defined in msg/JointKinematicCheckResult in the package bosdyn_msgs.
/**
  * AUTOMATICALLY GENERATED BY PROTO CONVERSION
 */
typedef struct bosdyn_msgs__msg__JointKinematicCheckResult
{
  /// Kinematic calibration results
  /// Errors reflect an issue with robot hardware.
  /// A flag to indicate if results has an error.
  bosdyn_msgs__msg__JointKinematicCheckResultError error;
  /// The current offset
  float offset;
  /// The previous offset
  float old_offset;
  /// Joint calibration health score. range
  /// 0 indicates an unhealthy kinematic joint calibration
  /// 1 indicates a perfect kinematic joint calibration
  /// Typically, values greater than 0.8 should be expected.
  float health_score;
} bosdyn_msgs__msg__JointKinematicCheckResult;

// Struct for a sequence of bosdyn_msgs__msg__JointKinematicCheckResult.
typedef struct bosdyn_msgs__msg__JointKinematicCheckResult__Sequence
{
  bosdyn_msgs__msg__JointKinematicCheckResult * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} bosdyn_msgs__msg__JointKinematicCheckResult__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // BOSDYN_MSGS__MSG__DETAIL__JOINT_KINEMATIC_CHECK_RESULT__STRUCT_H_