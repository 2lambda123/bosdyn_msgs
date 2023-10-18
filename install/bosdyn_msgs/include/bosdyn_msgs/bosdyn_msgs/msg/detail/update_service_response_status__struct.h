// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from bosdyn_msgs:msg/UpdateServiceResponseStatus.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__UPDATE_SERVICE_RESPONSE_STATUS__STRUCT_H_
#define BOSDYN_MSGS__MSG__DETAIL__UPDATE_SERVICE_RESPONSE_STATUS__STRUCT_H_

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
  * UNKNOWN should never be used. An internal DirectoryRegistrationService issue has happened if UNKNOWN is set.
 */
enum
{
  bosdyn_msgs__msg__UpdateServiceResponseStatus__STATUS_UNKNOWN = 0
};

/// Constant 'STATUS_OK'.
/**
  * Success.  The new service record is available.
 */
enum
{
  bosdyn_msgs__msg__UpdateServiceResponseStatus__STATUS_OK = 1
};

/// Constant 'STATUS_NONEXISTENT_SERVICE'.
/**
  * The provided service name was not found.
 */
enum
{
  bosdyn_msgs__msg__UpdateServiceResponseStatus__STATUS_NONEXISTENT_SERVICE = 2
};

/// Struct defined in msg/UpdateServiceResponseStatus in the package bosdyn_msgs.
/**
  * AUTOMATICALLY GENERATED BY PROTO CONVERSION
 */
typedef struct bosdyn_msgs__msg__UpdateServiceResponseStatus
{
  int8_t value;
} bosdyn_msgs__msg__UpdateServiceResponseStatus;

// Struct for a sequence of bosdyn_msgs__msg__UpdateServiceResponseStatus.
typedef struct bosdyn_msgs__msg__UpdateServiceResponseStatus__Sequence
{
  bosdyn_msgs__msg__UpdateServiceResponseStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} bosdyn_msgs__msg__UpdateServiceResponseStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // BOSDYN_MSGS__MSG__DETAIL__UPDATE_SERVICE_RESPONSE_STATUS__STRUCT_H_