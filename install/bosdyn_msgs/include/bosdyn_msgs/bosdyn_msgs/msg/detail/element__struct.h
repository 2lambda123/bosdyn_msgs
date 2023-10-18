// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from bosdyn_msgs:msg/Element.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__ELEMENT__STRUCT_H_
#define BOSDYN_MSGS__MSG__DETAIL__ELEMENT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'name'
// Member 'id'
#include "rosidl_runtime_c/string.h"
// Member 'target'
#include "bosdyn_msgs/msg/detail/target__struct.h"
// Member 'target_failure_behavior'
// Member 'action_failure_behavior'
#include "bosdyn_msgs/msg/detail/failure_behavior__struct.h"
// Member 'action'
#include "bosdyn_msgs/msg/detail/action__struct.h"
// Member 'action_wrapper'
#include "bosdyn_msgs/msg/detail/action_wrapper__struct.h"
// Member 'battery_monitor'
#include "bosdyn_msgs/msg/detail/battery_monitor__struct.h"
// Member 'action_duration'
#include "builtin_interfaces/msg/detail/duration__struct.h"

/// Struct defined in msg/Element in the package bosdyn_msgs.
/**
  * AUTOMATICALLY GENERATED BY PROTO CONVERSION
 */
typedef struct bosdyn_msgs__msg__Element
{
  /// An Element is the basic building block of the autowalk.
  /// The name of an element may be anything, but it is good practice to choose
  /// something that describes the physical location and action that is occurring
  /// (e.g., boiler room laser scan).
  rosidl_runtime_c__String name;
  /// Location the robot should navigate to.
  bosdyn_msgs__msg__Target target;
  bool target_is_set;
  /// Describes what to do if the robot fails to navigate to target.
  bosdyn_msgs__msg__FailureBehavior target_failure_behavior;
  bool target_failure_behavior_is_set;
  /// Action performed at target destination
  bosdyn_msgs__msg__Action action;
  bool action_is_set;
  /// Actions performed by the robot and/or payloads prior to and during an action.
  bosdyn_msgs__msg__ActionWrapper action_wrapper;
  bool action_wrapper_is_set;
  /// Describes what to do if the robot fails to execute the action.
  bosdyn_msgs__msg__FailureBehavior action_failure_behavior;
  bool action_failure_behavior_is_set;
  /// Set to true to skip element.
  bool is_skipped;
  /// If the mission requires more than one battery, the robot needs to return
  /// to the dock and charge before it can complete the mission.
  /// This field defines the battery percentage thresholds that at which the robot
  /// should pause and resume mission execution.
  /// Considering using various thresholds depending on the target's distance from the dock
  bosdyn_msgs__msg__BatteryMonitor battery_monitor;
  bool battery_monitor_is_set;
  /// Maximum duration of action execution time, including all wrappers.
  /// If they take longer than this duration, the action will be considered a failure.
  /// Not including, or including a zero duration will set the action to NOT have a
  /// timeout.
  builtin_interfaces__msg__Duration action_duration;
  bool action_duration_is_set;
  /// Unique identifier for this element.  This will be embedded in various Data Acquisition
  /// captures and various logging bundles.  This should be globally unique across all elements.
  rosidl_runtime_c__String id;
} bosdyn_msgs__msg__Element;

// Struct for a sequence of bosdyn_msgs__msg__Element.
typedef struct bosdyn_msgs__msg__Element__Sequence
{
  bosdyn_msgs__msg__Element * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} bosdyn_msgs__msg__Element__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // BOSDYN_MSGS__MSG__DETAIL__ELEMENT__STRUCT_H_