// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from bosdyn_msgs:msg/LoadMissionResponseStatus.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__LOAD_MISSION_RESPONSE_STATUS__STRUCT_H_
#define BOSDYN_MSGS__MSG__DETAIL__LOAD_MISSION_RESPONSE_STATUS__STRUCT_H_

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
  * Invalid status, do not use.
 */
enum
{
  bosdyn_msgs__msg__LoadMissionResponseStatus__STATUS_UNKNOWN = 0
};

/// Constant 'STATUS_OK'.
/**
  * The mission was loaded successfully.
 */
enum
{
  bosdyn_msgs__msg__LoadMissionResponseStatus__STATUS_OK = 1
};

/// Constant 'STATUS_COMPILE_ERROR'.
/**
  * Load-time compilation failed. The mission was malformed.
 */
enum
{
  bosdyn_msgs__msg__LoadMissionResponseStatus__STATUS_COMPILE_ERROR = 2
};

/// Constant 'STATUS_VALIDATE_ERROR'.
/**
  * Load-time validation failed. Some part of the mission was unable to initialize.
 */
enum
{
  bosdyn_msgs__msg__LoadMissionResponseStatus__STATUS_VALIDATE_ERROR = 3
};

/// Struct defined in msg/LoadMissionResponseStatus in the package bosdyn_msgs.
/**
  * AUTOMATICALLY GENERATED BY PROTO CONVERSION
 */
typedef struct bosdyn_msgs__msg__LoadMissionResponseStatus
{
  int8_t value;
} bosdyn_msgs__msg__LoadMissionResponseStatus;

// Struct for a sequence of bosdyn_msgs__msg__LoadMissionResponseStatus.
typedef struct bosdyn_msgs__msg__LoadMissionResponseStatus__Sequence
{
  bosdyn_msgs__msg__LoadMissionResponseStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} bosdyn_msgs__msg__LoadMissionResponseStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // BOSDYN_MSGS__MSG__DETAIL__LOAD_MISSION_RESPONSE_STATUS__STRUCT_H_