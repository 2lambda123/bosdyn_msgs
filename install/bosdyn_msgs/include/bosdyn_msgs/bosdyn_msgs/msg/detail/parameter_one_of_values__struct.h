// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from bosdyn_msgs:msg/ParameterOneOfValues.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__PARAMETER_ONE_OF_VALUES__STRUCT_H_
#define BOSDYN_MSGS__MSG__DETAIL__PARAMETER_ONE_OF_VALUES__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'VALUES_NOT_SET'.
enum
{
  bosdyn_msgs__msg__ParameterOneOfValues__VALUES_NOT_SET = 0
};

/// Constant 'VALUES_INT_VALUE_SET'.
enum
{
  bosdyn_msgs__msg__ParameterOneOfValues__VALUES_INT_VALUE_SET = 1
};

/// Constant 'VALUES_FLOAT_VALUE_SET'.
enum
{
  bosdyn_msgs__msg__ParameterOneOfValues__VALUES_FLOAT_VALUE_SET = 2
};

/// Constant 'VALUES_TIMESTAMP_SET'.
enum
{
  bosdyn_msgs__msg__ParameterOneOfValues__VALUES_TIMESTAMP_SET = 3
};

/// Constant 'VALUES_DURATION_SET'.
enum
{
  bosdyn_msgs__msg__ParameterOneOfValues__VALUES_DURATION_SET = 4
};

/// Constant 'VALUES_STRING_VALUE_SET'.
enum
{
  bosdyn_msgs__msg__ParameterOneOfValues__VALUES_STRING_VALUE_SET = 5
};

/// Constant 'VALUES_BOOL_VALUE_SET'.
enum
{
  bosdyn_msgs__msg__ParameterOneOfValues__VALUES_BOOL_VALUE_SET = 6
};

/// Constant 'VALUES_UINT_VALUE_SET'.
enum
{
  bosdyn_msgs__msg__ParameterOneOfValues__VALUES_UINT_VALUE_SET = 7
};

// Include directives for member types
// Member 'timestamp'
#include "builtin_interfaces/msg/detail/time__struct.h"
// Member 'duration'
#include "builtin_interfaces/msg/detail/duration__struct.h"
// Member 'string_value'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/ParameterOneOfValues in the package bosdyn_msgs.
/**
  * AUTOMATICALLY GENERATED BY PROTO CONVERSION
 */
typedef struct bosdyn_msgs__msg__ParameterOneOfValues
{
  /// ONEOF MESSAGE  Only one of the following can be set
  /// Value of a countable measure.
  int64_t int_value;
  /// Value of a continuous measure.
  double float_value;
  /// A point in time.
  builtin_interfaces__msg__Time timestamp;
  /// A time duration.
  builtin_interfaces__msg__Duration duration;
  /// Value as a string.
  rosidl_runtime_c__String string_value;
  /// Value as true/false.
  bool bool_value;
  /// Unsigned integer
  uint64_t uint_value;
  /// Only one of the above can be filled in.  Use the enum to choose which.
  int8_t values_choice;
} bosdyn_msgs__msg__ParameterOneOfValues;

// Struct for a sequence of bosdyn_msgs__msg__ParameterOneOfValues.
typedef struct bosdyn_msgs__msg__ParameterOneOfValues__Sequence
{
  bosdyn_msgs__msg__ParameterOneOfValues * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} bosdyn_msgs__msg__ParameterOneOfValues__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // BOSDYN_MSGS__MSG__DETAIL__PARAMETER_ONE_OF_VALUES__STRUCT_H_