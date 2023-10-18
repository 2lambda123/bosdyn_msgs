// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from bosdyn_msgs:msg/RecordSignalTicksResponseErrorType.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__RECORD_SIGNAL_TICKS_RESPONSE_ERROR_TYPE__STRUCT_H_
#define BOSDYN_MSGS__MSG__DETAIL__RECORD_SIGNAL_TICKS_RESPONSE_ERROR_TYPE__STRUCT_H_

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
  bosdyn_msgs__msg__RecordSignalTicksResponseErrorType__NONE = 0
};

/// Constant 'CLIENT_ERROR'.
enum
{
  bosdyn_msgs__msg__RecordSignalTicksResponseErrorType__CLIENT_ERROR = 1
};

/// Constant 'SERVER_ERROR'.
enum
{
  bosdyn_msgs__msg__RecordSignalTicksResponseErrorType__SERVER_ERROR = 2
};

/// Constant 'INVALID_SCHEMA_ID'.
enum
{
  bosdyn_msgs__msg__RecordSignalTicksResponseErrorType__INVALID_SCHEMA_ID = 3
};

/// Struct defined in msg/RecordSignalTicksResponseErrorType in the package bosdyn_msgs.
/**
  * AUTOMATICALLY GENERATED BY PROTO CONVERSION
 */
typedef struct bosdyn_msgs__msg__RecordSignalTicksResponseErrorType
{
  int8_t value;
} bosdyn_msgs__msg__RecordSignalTicksResponseErrorType;

// Struct for a sequence of bosdyn_msgs__msg__RecordSignalTicksResponseErrorType.
typedef struct bosdyn_msgs__msg__RecordSignalTicksResponseErrorType__Sequence
{
  bosdyn_msgs__msg__RecordSignalTicksResponseErrorType * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} bosdyn_msgs__msg__RecordSignalTicksResponseErrorType__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // BOSDYN_MSGS__MSG__DETAIL__RECORD_SIGNAL_TICKS_RESPONSE_ERROR_TYPE__STRUCT_H_