// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from bosdyn_msgs:msg/ConditionCompare.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__CONDITION_COMPARE__STRUCT_H_
#define BOSDYN_MSGS__MSG__DETAIL__CONDITION_COMPARE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'COMPARE_UNKNOWN'.
/**
  * Invalid, do not use.
 */
enum
{
  bosdyn_msgs__msg__ConditionCompare__COMPARE_UNKNOWN = 0
};

/// Constant 'COMPARE_EQ'.
/**
  * Equal.
 */
enum
{
  bosdyn_msgs__msg__ConditionCompare__COMPARE_EQ = 1
};

/// Constant 'COMPARE_NE'.
/**
  * Not equal.
 */
enum
{
  bosdyn_msgs__msg__ConditionCompare__COMPARE_NE = 2
};

/// Constant 'COMPARE_LT'.
/**
  * Less than.
 */
enum
{
  bosdyn_msgs__msg__ConditionCompare__COMPARE_LT = 3
};

/// Constant 'COMPARE_GT'.
/**
  * Greater than.
 */
enum
{
  bosdyn_msgs__msg__ConditionCompare__COMPARE_GT = 4
};

/// Constant 'COMPARE_LE'.
/**
  * Less than or equal.
 */
enum
{
  bosdyn_msgs__msg__ConditionCompare__COMPARE_LE = 5
};

/// Constant 'COMPARE_GE'.
/**
  * Greater than or equal.
 */
enum
{
  bosdyn_msgs__msg__ConditionCompare__COMPARE_GE = 6
};

/// Struct defined in msg/ConditionCompare in the package bosdyn_msgs.
/**
  * AUTOMATICALLY GENERATED BY PROTO CONVERSION
 */
typedef struct bosdyn_msgs__msg__ConditionCompare
{
  int8_t value;
} bosdyn_msgs__msg__ConditionCompare;

// Struct for a sequence of bosdyn_msgs__msg__ConditionCompare.
typedef struct bosdyn_msgs__msg__ConditionCompare__Sequence
{
  bosdyn_msgs__msg__ConditionCompare * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} bosdyn_msgs__msg__ConditionCompare__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // BOSDYN_MSGS__MSG__DETAIL__CONDITION_COMPARE__STRUCT_H_