// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from bosdyn_msgs:msg/LoadCellSpotCheckResultError.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__LOAD_CELL_SPOT_CHECK_RESULT_ERROR__STRUCT_H_
#define BOSDYN_MSGS__MSG__DETAIL__LOAD_CELL_SPOT_CHECK_RESULT_ERROR__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'ERROR_UNKNOWN'.
/**
  * Unused enum.
 */
enum
{
  bosdyn_msgs__msg__LoadCellSpotCheckResultError__ERROR_UNKNOWN = 0
};

/// Constant 'ERROR_NONE'.
/**
  * No hardware error detected.
 */
enum
{
  bosdyn_msgs__msg__LoadCellSpotCheckResultError__ERROR_NONE = 1
};

/// Constant 'ERROR_ZERO_OUT_OF_RANGE'.
/**
  * Load cell calibration failure.
 */
enum
{
  bosdyn_msgs__msg__LoadCellSpotCheckResultError__ERROR_ZERO_OUT_OF_RANGE = 2
};

/// Struct defined in msg/LoadCellSpotCheckResultError in the package bosdyn_msgs.
/**
  * AUTOMATICALLY GENERATED BY PROTO CONVERSION
 */
typedef struct bosdyn_msgs__msg__LoadCellSpotCheckResultError
{
  int8_t value;
} bosdyn_msgs__msg__LoadCellSpotCheckResultError;

// Struct for a sequence of bosdyn_msgs__msg__LoadCellSpotCheckResultError.
typedef struct bosdyn_msgs__msg__LoadCellSpotCheckResultError__Sequence
{
  bosdyn_msgs__msg__LoadCellSpotCheckResultError * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} bosdyn_msgs__msg__LoadCellSpotCheckResultError__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // BOSDYN_MSGS__MSG__DETAIL__LOAD_CELL_SPOT_CHECK_RESULT_ERROR__STRUCT_H_