// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from bosdyn_msgs:msg/UpdateCallbackResponseNavPolicy.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__UPDATE_CALLBACK_RESPONSE_NAV_POLICY__STRUCT_H_
#define BOSDYN_MSGS__MSG__DETAIL__UPDATE_CALLBACK_RESPONSE_NAV_POLICY__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'at_start'
// Member 'at_end'
#include "bosdyn_msgs/msg/detail/update_callback_response_nav_policy_option__struct.h"

/// Struct defined in msg/UpdateCallbackResponseNavPolicy in the package bosdyn_msgs.
/**
  * AUTOMATICALLY GENERATED BY PROTO CONVERSION
 */
typedef struct bosdyn_msgs__msg__UpdateCallbackResponseNavPolicy
{
  /// Policy for what Graph Nav should do at the start of the region.
  bosdyn_msgs__msg__UpdateCallbackResponseNavPolicyOption at_start;
  /// Policy for what Graph Nav should do at the end of the region.
  bosdyn_msgs__msg__UpdateCallbackResponseNavPolicyOption at_end;
} bosdyn_msgs__msg__UpdateCallbackResponseNavPolicy;

// Struct for a sequence of bosdyn_msgs__msg__UpdateCallbackResponseNavPolicy.
typedef struct bosdyn_msgs__msg__UpdateCallbackResponseNavPolicy__Sequence
{
  bosdyn_msgs__msg__UpdateCallbackResponseNavPolicy * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} bosdyn_msgs__msg__UpdateCallbackResponseNavPolicy__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // BOSDYN_MSGS__MSG__DETAIL__UPDATE_CALLBACK_RESPONSE_NAV_POLICY__STRUCT_H_