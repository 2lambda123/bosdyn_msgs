// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from bosdyn_msgs:msg/StateNodeStatesAtTick.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__STATE_NODE_STATES_AT_TICK__STRUCT_H_
#define BOSDYN_MSGS__MSG__DETAIL__STATE_NODE_STATES_AT_TICK__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'tick_start_timestamp'
#include "builtin_interfaces/msg/detail/time__struct.h"
// Member 'node_states'
#include "bosdyn_msgs/msg/detail/state_node_states_at_tick_node_state__struct.h"

/// Struct defined in msg/StateNodeStatesAtTick in the package bosdyn_msgs.
/**
  * AUTOMATICALLY GENERATED BY PROTO CONVERSION
 */
typedef struct bosdyn_msgs__msg__StateNodeStatesAtTick
{
  /// The tick counter when this state was produced.
  int64_t tick_counter;
  /// Time at which this tick started, in host time basis.
  builtin_interfaces__msg__Time tick_start_timestamp;
  bool tick_start_timestamp_is_set;
  /// At this tick, the state of every node that was ticked, in the order they were ticked.
  bosdyn_msgs__msg__StateNodeStatesAtTickNodeState__Sequence node_states;
} bosdyn_msgs__msg__StateNodeStatesAtTick;

// Struct for a sequence of bosdyn_msgs__msg__StateNodeStatesAtTick.
typedef struct bosdyn_msgs__msg__StateNodeStatesAtTick__Sequence
{
  bosdyn_msgs__msg__StateNodeStatesAtTick * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} bosdyn_msgs__msg__StateNodeStatesAtTick__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // BOSDYN_MSGS__MSG__DETAIL__STATE_NODE_STATES_AT_TICK__STRUCT_H_