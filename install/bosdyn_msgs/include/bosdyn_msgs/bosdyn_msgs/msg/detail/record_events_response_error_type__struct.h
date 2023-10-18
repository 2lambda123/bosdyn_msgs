// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from bosdyn_msgs:msg/RecordEventsResponseErrorType.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__RECORD_EVENTS_RESPONSE_ERROR_TYPE__STRUCT_H_
#define BOSDYN_MSGS__MSG__DETAIL__RECORD_EVENTS_RESPONSE_ERROR_TYPE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'NONE'.
enum
{
  bosdyn_msgs__msg__RecordEventsResponseErrorType__NONE = 0
};

/// Constant 'CLIENT_ERROR'.
enum
{
  bosdyn_msgs__msg__RecordEventsResponseErrorType__CLIENT_ERROR = 1
};

/// Constant 'SERVER_ERROR'.
enum
{
  bosdyn_msgs__msg__RecordEventsResponseErrorType__SERVER_ERROR = 2
};

/// Struct defined in msg/RecordEventsResponseErrorType in the package bosdyn_msgs.
/**
  * AUTOMATICALLY GENERATED BY PROTO CONVERSION
 */
typedef struct bosdyn_msgs__msg__RecordEventsResponseErrorType
{
  int8_t value;
} bosdyn_msgs__msg__RecordEventsResponseErrorType;

// Struct for a sequence of bosdyn_msgs__msg__RecordEventsResponseErrorType.
typedef struct bosdyn_msgs__msg__RecordEventsResponseErrorType__Sequence
{
  bosdyn_msgs__msg__RecordEventsResponseErrorType * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} bosdyn_msgs__msg__RecordEventsResponseErrorType__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // BOSDYN_MSGS__MSG__DETAIL__RECORD_EVENTS_RESPONSE_ERROR_TYPE__STRUCT_H_