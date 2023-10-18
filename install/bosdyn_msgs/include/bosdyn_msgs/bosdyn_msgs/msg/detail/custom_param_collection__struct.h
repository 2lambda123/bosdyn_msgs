// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from bosdyn_msgs:msg/CustomParamCollection.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__CUSTOM_PARAM_COLLECTION__STRUCT_H_
#define BOSDYN_MSGS__MSG__DETAIL__CUSTOM_PARAM_COLLECTION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'specs'
#include "bosdyn_msgs/msg/detail/dict_param_spec__struct.h"
// Member 'values'
#include "bosdyn_msgs/msg/detail/dict_param__struct.h"

/// Struct defined in msg/CustomParamCollection in the package bosdyn_msgs.
/**
  * AUTOMATICALLY GENERATED BY PROTO CONVERSION
 */
typedef struct bosdyn_msgs__msg__CustomParamCollection
{
  /// Collection of both specifications and values.
  /// Meant to be used as a snapshot of specifications offered by a service, and the values
  /// chosen by a user.
  bosdyn_msgs__msg__DictParamSpec specs;
  bool specs_is_set;
  bosdyn_msgs__msg__DictParam values;
  bool values_is_set;
} bosdyn_msgs__msg__CustomParamCollection;

// Struct for a sequence of bosdyn_msgs__msg__CustomParamCollection.
typedef struct bosdyn_msgs__msg__CustomParamCollection__Sequence
{
  bosdyn_msgs__msg__CustomParamCollection * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} bosdyn_msgs__msg__CustomParamCollection__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // BOSDYN_MSGS__MSG__DETAIL__CUSTOM_PARAM_COLLECTION__STRUCT_H_