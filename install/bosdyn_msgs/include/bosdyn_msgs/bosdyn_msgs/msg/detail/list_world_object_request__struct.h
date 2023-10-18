// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from bosdyn_msgs:msg/ListWorldObjectRequest.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__LIST_WORLD_OBJECT_REQUEST__STRUCT_H_
#define BOSDYN_MSGS__MSG__DETAIL__LIST_WORLD_OBJECT_REQUEST__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "bosdyn_msgs/msg/detail/request_header__struct.h"
// Member 'object_type'
#include "bosdyn_msgs/msg/detail/world_object_type__struct.h"
// Member 'timestamp_filter'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in msg/ListWorldObjectRequest in the package bosdyn_msgs.
/**
  * AUTOMATICALLY GENERATED BY PROTO CONVERSION
 */
typedef struct bosdyn_msgs__msg__ListWorldObjectRequest
{
  /// The ListWorldObject request message, which can optionally include filters for the object type or
  /// timestamp.
  /// Common request header
  bosdyn_msgs__msg__RequestHeader header;
  bool header_is_set;
  /// Optional filters to apply to the world object request
  /// Specific type of object; can request multiple different properties
  bosdyn_msgs__msg__WorldObjectType__Sequence object_type;
  /// Timestamp to filter objects based on. The time should be in robot time
  /// All objects with header timestamps after (>) timestamp_filter will be returned
  builtin_interfaces__msg__Time timestamp_filter;
  bool timestamp_filter_is_set;
} bosdyn_msgs__msg__ListWorldObjectRequest;

// Struct for a sequence of bosdyn_msgs__msg__ListWorldObjectRequest.
typedef struct bosdyn_msgs__msg__ListWorldObjectRequest__Sequence
{
  bosdyn_msgs__msg__ListWorldObjectRequest * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} bosdyn_msgs__msg__ListWorldObjectRequest__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // BOSDYN_MSGS__MSG__DETAIL__LIST_WORLD_OBJECT_REQUEST__STRUCT_H_