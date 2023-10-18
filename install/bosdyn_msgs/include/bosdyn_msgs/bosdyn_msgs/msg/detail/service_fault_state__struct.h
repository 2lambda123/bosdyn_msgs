// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from bosdyn_msgs:msg/ServiceFaultState.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__SERVICE_FAULT_STATE__STRUCT_H_
#define BOSDYN_MSGS__MSG__DETAIL__SERVICE_FAULT_STATE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'faults'
// Member 'historical_faults'
#include "bosdyn_msgs/msg/detail/service_fault__struct.h"
// Member 'aggregated'
#include "bosdyn_msgs/msg/detail/key_string_value_bosdyn_msgs_service_fault_severity__struct.h"

/// Struct defined in msg/ServiceFaultState in the package bosdyn_msgs.
/**
  * AUTOMATICALLY GENERATED BY PROTO CONVERSION
 */
typedef struct bosdyn_msgs__msg__ServiceFaultState
{
  /// The current state of each service fault the robot is experiencing.
  /// An "active" fault indicates a fault currently in a service.
  /// A "historical" fault indicates a, now cleared, service problem.
  /// Currently active faults
  bosdyn_msgs__msg__ServiceFault__Sequence faults;
  /// Service faults that have been cleared. Acts as a ring buffer with size of 50.
  bosdyn_msgs__msg__ServiceFault__Sequence historical_faults;
  /// Aggregated service fault data. Maps attribute string to highest severity level
  /// of any active fault containing that attribute string.
  /// This provides a very quick way of determining if there any "locomotion" or
  /// "vision" faults above a certain severity level.
  bosdyn_msgs__msg__KeyStringValueBosdynMsgsServiceFaultSeverity__Sequence aggregated;
} bosdyn_msgs__msg__ServiceFaultState;

// Struct for a sequence of bosdyn_msgs__msg__ServiceFaultState.
typedef struct bosdyn_msgs__msg__ServiceFaultState__Sequence
{
  bosdyn_msgs__msg__ServiceFaultState * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} bosdyn_msgs__msg__ServiceFaultState__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // BOSDYN_MSGS__MSG__DETAIL__SERVICE_FAULT_STATE__STRUCT_H_