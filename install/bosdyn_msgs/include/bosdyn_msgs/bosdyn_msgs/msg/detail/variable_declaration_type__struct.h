// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from bosdyn_msgs:msg/VariableDeclarationType.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__VARIABLE_DECLARATION_TYPE__STRUCT_H_
#define BOSDYN_MSGS__MSG__DETAIL__VARIABLE_DECLARATION_TYPE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'TYPE_UNKNOWN'.
enum
{
  bosdyn_msgs__msg__VariableDeclarationType__TYPE_UNKNOWN = 0
};

/// Constant 'TYPE_FLOAT'.
enum
{
  bosdyn_msgs__msg__VariableDeclarationType__TYPE_FLOAT = 1
};

/// Constant 'TYPE_STRING'.
enum
{
  bosdyn_msgs__msg__VariableDeclarationType__TYPE_STRING = 2
};

/// Constant 'TYPE_INT'.
enum
{
  bosdyn_msgs__msg__VariableDeclarationType__TYPE_INT = 3
};

/// Constant 'TYPE_BOOL'.
enum
{
  bosdyn_msgs__msg__VariableDeclarationType__TYPE_BOOL = 4
};

/// Constant 'TYPE_MESSAGE'.
enum
{
  bosdyn_msgs__msg__VariableDeclarationType__TYPE_MESSAGE = 5
};

/// Struct defined in msg/VariableDeclarationType in the package bosdyn_msgs.
/**
  * AUTOMATICALLY GENERATED BY PROTO CONVERSION
 */
typedef struct bosdyn_msgs__msg__VariableDeclarationType
{
  int8_t value;
} bosdyn_msgs__msg__VariableDeclarationType;

// Struct for a sequence of bosdyn_msgs__msg__VariableDeclarationType.
typedef struct bosdyn_msgs__msg__VariableDeclarationType__Sequence
{
  bosdyn_msgs__msg__VariableDeclarationType * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} bosdyn_msgs__msg__VariableDeclarationType__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // BOSDYN_MSGS__MSG__DETAIL__VARIABLE_DECLARATION_TYPE__STRUCT_H_