// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from bosdyn_msgs:msg/UpdateCallbackResponse.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__UPDATE_CALLBACK_RESPONSE__STRUCT_H_
#define BOSDYN_MSGS__MSG__DETAIL__UPDATE_CALLBACK_RESPONSE__STRUCT_H_

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
#include "bosdyn_msgs/msg/detail/response_header__struct.h"
// Member 'status'
#include "bosdyn_msgs/msg/detail/update_callback_response_status__struct.h"
// Member 'response'
#include "bosdyn_msgs/msg/detail/update_callback_response_one_of_response__struct.h"
// Member 'localization'
#include "bosdyn_msgs/msg/detail/update_callback_response_update_localization__struct.h"

/// Struct defined in msg/UpdateCallbackResponse in the package bosdyn_msgs.
/**
  * AUTOMATICALLY GENERATED BY PROTO CONVERSION
 */
typedef struct bosdyn_msgs__msg__UpdateCallbackResponse
{
  /// Common response header.
  bosdyn_msgs__msg__ResponseHeader header;
  bool header_is_set;
  /// Return status for the request.
  bosdyn_msgs__msg__UpdateCallbackResponseStatus status;
  /// Enumeration of ways navigation callback can ask Graph Nav to continue operating.
  bosdyn_msgs__msg__UpdateCallbackResponseOneOfResponse response;
  /// Localization changes inform Graph Nav when the callback has moved the robot,
  /// and are ignored unless callback has control of the robot.
  bosdyn_msgs__msg__UpdateCallbackResponseUpdateLocalization localization;
  bool localization_is_set;
} bosdyn_msgs__msg__UpdateCallbackResponse;

// Struct for a sequence of bosdyn_msgs__msg__UpdateCallbackResponse.
typedef struct bosdyn_msgs__msg__UpdateCallbackResponse__Sequence
{
  bosdyn_msgs__msg__UpdateCallbackResponse * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} bosdyn_msgs__msg__UpdateCallbackResponse__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // BOSDYN_MSGS__MSG__DETAIL__UPDATE_CALLBACK_RESPONSE__STRUCT_H_