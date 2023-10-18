// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from bosdyn_msgs:msg/UpdateCallbackResponseUpdateLocalization.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__UPDATE_CALLBACK_RESPONSE_UPDATE_LOCALIZATION__STRUCT_H_
#define BOSDYN_MSGS__MSG__DETAIL__UPDATE_CALLBACK_RESPONSE_UPDATE_LOCALIZATION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'change'
#include "bosdyn_msgs/msg/detail/update_callback_response_update_localization_localization_change__struct.h"

/// Struct defined in msg/UpdateCallbackResponseUpdateLocalization in the package bosdyn_msgs.
/**
  * AUTOMATICALLY GENERATED BY PROTO CONVERSION
 */
typedef struct bosdyn_msgs__msg__UpdateCallbackResponseUpdateLocalization
{
  /// Change the localization within GraphNav.
  bosdyn_msgs__msg__UpdateCallbackResponseUpdateLocalizationLocalizationChange change;
} bosdyn_msgs__msg__UpdateCallbackResponseUpdateLocalization;

// Struct for a sequence of bosdyn_msgs__msg__UpdateCallbackResponseUpdateLocalization.
typedef struct bosdyn_msgs__msg__UpdateCallbackResponseUpdateLocalization__Sequence
{
  bosdyn_msgs__msg__UpdateCallbackResponseUpdateLocalization * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} bosdyn_msgs__msg__UpdateCallbackResponseUpdateLocalization__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // BOSDYN_MSGS__MSG__DETAIL__UPDATE_CALLBACK_RESPONSE_UPDATE_LOCALIZATION__STRUCT_H_