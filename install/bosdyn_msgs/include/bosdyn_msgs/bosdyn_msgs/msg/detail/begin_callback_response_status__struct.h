// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from bosdyn_msgs:msg/BeginCallbackResponseStatus.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__BEGIN_CALLBACK_RESPONSE_STATUS__STRUCT_H_
#define BOSDYN_MSGS__MSG__DETAIL__BEGIN_CALLBACK_RESPONSE_STATUS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'STATUS_UNKNOWN'.
/**
  * UNKNOWN should never be used.
 */
enum
{
  bosdyn_msgs__msg__BeginCallbackResponseStatus__STATUS_UNKNOWN = 0
};

/// Constant 'STATUS_OK'.
/**
  * The area callback successfully began.
 */
enum
{
  bosdyn_msgs__msg__BeginCallbackResponseStatus__STATUS_OK = 1
};

/// Constant 'STATUS_INVALID_CONFIGURATION'.
/**
  * The area callback failed to start due to some problem with the supplied configuration_data.
 */
enum
{
  bosdyn_msgs__msg__BeginCallbackResponseStatus__STATUS_INVALID_CONFIGURATION = 2
};

/// Constant 'STATUS_EXPIRED_END_TIME'.
/**
  * The area callback end time already expired.
 */
enum
{
  bosdyn_msgs__msg__BeginCallbackResponseStatus__STATUS_EXPIRED_END_TIME = 3
};

/// Constant 'STATUS_CUSTOM_PARAMS_ERROR'.
/**
  * One or more keys or values in custom_params are unsupported by the area callback.
  * See the custom_param_error for details.
 */
enum
{
  bosdyn_msgs__msg__BeginCallbackResponseStatus__STATUS_CUSTOM_PARAMS_ERROR = 4
};

/// Struct defined in msg/BeginCallbackResponseStatus in the package bosdyn_msgs.
/**
  * AUTOMATICALLY GENERATED BY PROTO CONVERSION
 */
typedef struct bosdyn_msgs__msg__BeginCallbackResponseStatus
{
  int8_t value;
} bosdyn_msgs__msg__BeginCallbackResponseStatus;

// Struct for a sequence of bosdyn_msgs__msg__BeginCallbackResponseStatus.
typedef struct bosdyn_msgs__msg__BeginCallbackResponseStatus__Sequence
{
  bosdyn_msgs__msg__BeginCallbackResponseStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} bosdyn_msgs__msg__BeginCallbackResponseStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // BOSDYN_MSGS__MSG__DETAIL__BEGIN_CALLBACK_RESPONSE_STATUS__STRUCT_H_