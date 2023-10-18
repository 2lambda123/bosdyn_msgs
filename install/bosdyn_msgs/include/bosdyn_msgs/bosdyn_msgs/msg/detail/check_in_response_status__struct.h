// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from bosdyn_msgs:msg/CheckInResponseStatus.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__CHECK_IN_RESPONSE_STATUS__STRUCT_H_
#define BOSDYN_MSGS__MSG__DETAIL__CHECK_IN_RESPONSE_STATUS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'STATUS_UNKNOWN'.
enum
{
  bosdyn_msgs__msg__CheckInResponseStatus__STATUS_UNKNOWN = 0
};

/// Constant 'STATUS_OK'.
enum
{
  bosdyn_msgs__msg__CheckInResponseStatus__STATUS_OK = 1
};

/// Constant 'STATUS_INVALID_POLICY_ID'.
/**
  * Set if the given policy ID was not valid on the system.
 */
enum
{
  bosdyn_msgs__msg__CheckInResponseStatus__STATUS_INVALID_POLICY_ID = 2
};

/// Struct defined in msg/CheckInResponseStatus in the package bosdyn_msgs.
/**
  * AUTOMATICALLY GENERATED BY PROTO CONVERSION
 */
typedef struct bosdyn_msgs__msg__CheckInResponseStatus
{
  int8_t value;
} bosdyn_msgs__msg__CheckInResponseStatus;

// Struct for a sequence of bosdyn_msgs__msg__CheckInResponseStatus.
typedef struct bosdyn_msgs__msg__CheckInResponseStatus__Sequence
{
  bosdyn_msgs__msg__CheckInResponseStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} bosdyn_msgs__msg__CheckInResponseStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // BOSDYN_MSGS__MSG__DETAIL__CHECK_IN_RESPONSE_STATUS__STRUCT_H_