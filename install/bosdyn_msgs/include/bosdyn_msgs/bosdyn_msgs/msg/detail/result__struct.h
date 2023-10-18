// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from bosdyn_msgs:msg/Result.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__RESULT__STRUCT_H_
#define BOSDYN_MSGS__MSG__DETAIL__RESULT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'RESULT_UNKNOWN'.
/**
  * Results from executing / ticking / running a single node.
  * Invalid, should not be used.
 */
enum
{
  bosdyn_msgs__msg__Result__RESULT_UNKNOWN = 0
};

/// Constant 'RESULT_FAILURE'.
/**
  * The node completed running, but failed.
 */
enum
{
  bosdyn_msgs__msg__Result__RESULT_FAILURE = 1
};

/// Constant 'RESULT_RUNNING'.
/**
  * The node is still in process and has not completed.
 */
enum
{
  bosdyn_msgs__msg__Result__RESULT_RUNNING = 2
};

/// Constant 'RESULT_SUCCESS'.
/**
  * The node completed, and succeeded.
 */
enum
{
  bosdyn_msgs__msg__Result__RESULT_SUCCESS = 3
};

/// Constant 'RESULT_ERROR'.
/**
  * The node encountered an operational error while trying to execute.
 */
enum
{
  bosdyn_msgs__msg__Result__RESULT_ERROR = 4
};

/// Struct defined in msg/Result in the package bosdyn_msgs.
/**
  * AUTOMATICALLY GENERATED BY PROTO CONVERSION
 */
typedef struct bosdyn_msgs__msg__Result
{
  int8_t value;
} bosdyn_msgs__msg__Result;

// Struct for a sequence of bosdyn_msgs__msg__Result.
typedef struct bosdyn_msgs__msg__Result__Sequence
{
  bosdyn_msgs__msg__Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} bosdyn_msgs__msg__Result__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // BOSDYN_MSGS__MSG__DETAIL__RESULT__STRUCT_H_