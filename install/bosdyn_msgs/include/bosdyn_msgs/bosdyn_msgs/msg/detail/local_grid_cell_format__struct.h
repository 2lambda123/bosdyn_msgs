// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from bosdyn_msgs:msg/LocalGridCellFormat.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__LOCAL_GRID_CELL_FORMAT__STRUCT_H_
#define BOSDYN_MSGS__MSG__DETAIL__LOCAL_GRID_CELL_FORMAT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'CELL_FORMAT_UNKNOWN'.
/**
  * Not specified -- not a valid value.
 */
enum
{
  bosdyn_msgs__msg__LocalGridCellFormat__CELL_FORMAT_UNKNOWN = 0
};

/// Constant 'CELL_FORMAT_FLOAT32'.
/**
  * Each cell of the local grid is encoded as a little-endian 32-bit floating point number.
 */
enum
{
  bosdyn_msgs__msg__LocalGridCellFormat__CELL_FORMAT_FLOAT32 = 1
};

/// Constant 'CELL_FORMAT_FLOAT64'.
/**
  * Each cell of the local grid is encoded as a little-endian 64-bit floating point number.
 */
enum
{
  bosdyn_msgs__msg__LocalGridCellFormat__CELL_FORMAT_FLOAT64 = 2
};

/// Constant 'CELL_FORMAT_INT8'.
/**
  * Each cell of the local grid is encoded as a signed 8-bit integer.
 */
enum
{
  bosdyn_msgs__msg__LocalGridCellFormat__CELL_FORMAT_INT8 = 3
};

/// Constant 'CELL_FORMAT_UINT8'.
/**
  * Each cell of the local grid is encoded as an unsigned 8-bit integer.
 */
enum
{
  bosdyn_msgs__msg__LocalGridCellFormat__CELL_FORMAT_UINT8 = 4
};

/// Constant 'CELL_FORMAT_INT16'.
/**
  * Each cell of the local grid is encoded as a little-endian signed 16-bit integer.
 */
enum
{
  bosdyn_msgs__msg__LocalGridCellFormat__CELL_FORMAT_INT16 = 5
};

/// Constant 'CELL_FORMAT_UINT16'.
/**
  * Each cell of the local grid is encoded as a little-endian unsigned 16-bit integer.
 */
enum
{
  bosdyn_msgs__msg__LocalGridCellFormat__CELL_FORMAT_UINT16 = 6
};

/// Struct defined in msg/LocalGridCellFormat in the package bosdyn_msgs.
/**
  * AUTOMATICALLY GENERATED BY PROTO CONVERSION
 */
typedef struct bosdyn_msgs__msg__LocalGridCellFormat
{
  /// Only reserving these values for now, until they are used.
  /// Each cell of the local grid is encoded as a little-endian signed 32-bit integer.
  /// CELL_FORMAT_INT32 = 7;
  /// Each cell of the local grid is encoded as a little-endian unsigned 32-bit integer.
  /// CELL_FORMAT_UINT32 = 8;
  /// Each cell of the local grid is encoded as a little-endian signed 64-bit integer.
  /// CELL_FORMAT_INT64 = 9;
  /// Each cell of the local grid is encoded as an unsigned 64-bit integer.
  /// CELL_FORMAT_UINT64 = 10;
  /// Structure-based pixels would follow these.
  int8_t value;
} bosdyn_msgs__msg__LocalGridCellFormat;

// Struct for a sequence of bosdyn_msgs__msg__LocalGridCellFormat.
typedef struct bosdyn_msgs__msg__LocalGridCellFormat__Sequence
{
  bosdyn_msgs__msg__LocalGridCellFormat * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} bosdyn_msgs__msg__LocalGridCellFormat__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // BOSDYN_MSGS__MSG__DETAIL__LOCAL_GRID_CELL_FORMAT__STRUCT_H_