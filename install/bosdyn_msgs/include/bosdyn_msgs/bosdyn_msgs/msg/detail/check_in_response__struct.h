// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from bosdyn_msgs:msg/CheckInResponse.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__CHECK_IN_RESPONSE__STRUCT_H_
#define BOSDYN_MSGS__MSG__DETAIL__CHECK_IN_RESPONSE__STRUCT_H_

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
// Member 'last_checkin'
#include "builtin_interfaces/msg/detail/time__struct.h"
// Member 'status'
#include "bosdyn_msgs/msg/detail/check_in_response_status__struct.h"

/// Struct defined in msg/CheckInResponse in the package bosdyn_msgs.
/**
  * AUTOMATICALLY GENERATED BY PROTO CONVERSION
 */
typedef struct bosdyn_msgs__msg__CheckInResponse
{
  bosdyn_msgs__msg__ResponseHeader header;
  bool header_is_set;
  /// Time the robot recorded the check in. Specified in robot's clock.
  builtin_interfaces__msg__Time last_checkin;
  bool last_checkin_is_set;
  bosdyn_msgs__msg__CheckInResponseStatus status;
} bosdyn_msgs__msg__CheckInResponse;

// Struct for a sequence of bosdyn_msgs__msg__CheckInResponse.
typedef struct bosdyn_msgs__msg__CheckInResponse__Sequence
{
  bosdyn_msgs__msg__CheckInResponse * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} bosdyn_msgs__msg__CheckInResponse__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // BOSDYN_MSGS__MSG__DETAIL__CHECK_IN_RESPONSE__STRUCT_H_