// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from bosdyn_msgs:msg/KeyStringValueBosdynMsgsDictParamChildSpec.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__KEY_STRING_VALUE_BOSDYN_MSGS_DICT_PARAM_CHILD_SPEC__STRUCT_H_
#define BOSDYN_MSGS__MSG__DETAIL__KEY_STRING_VALUE_BOSDYN_MSGS_DICT_PARAM_CHILD_SPEC__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'key'
#include "rosidl_runtime_c/string.h"
// Member 'value'
#include "bosdyn_msgs/msg/detail/dict_param_child_spec__struct.h"

/// Struct defined in msg/KeyStringValueBosdynMsgsDictParamChildSpec in the package bosdyn_msgs.
/**
  * AUTOMATICALLY GENERATED BY PROTO CONVERSION
 */
typedef struct bosdyn_msgs__msg__KeyStringValueBosdynMsgsDictParamChildSpec
{
  rosidl_runtime_c__String key;
  bosdyn_msgs__msg__DictParamChildSpec value;
} bosdyn_msgs__msg__KeyStringValueBosdynMsgsDictParamChildSpec;

// Struct for a sequence of bosdyn_msgs__msg__KeyStringValueBosdynMsgsDictParamChildSpec.
typedef struct bosdyn_msgs__msg__KeyStringValueBosdynMsgsDictParamChildSpec__Sequence
{
  bosdyn_msgs__msg__KeyStringValueBosdynMsgsDictParamChildSpec * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} bosdyn_msgs__msg__KeyStringValueBosdynMsgsDictParamChildSpec__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // BOSDYN_MSGS__MSG__DETAIL__KEY_STRING_VALUE_BOSDYN_MSGS_DICT_PARAM_CHILD_SPEC__STRUCT_H_