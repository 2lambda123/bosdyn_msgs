// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from bosdyn_msgs:msg/ListLeasesRequest.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__LIST_LEASES_REQUEST__STRUCT_H_
#define BOSDYN_MSGS__MSG__DETAIL__LIST_LEASES_REQUEST__STRUCT_H_

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

/// Struct defined in msg/ListLeasesRequest in the package bosdyn_msgs.
/**
  * AUTOMATICALLY GENERATED BY PROTO CONVERSION
 */
typedef struct bosdyn_msgs__msg__ListLeasesRequest
{
  /// The ListLease request message asks for information about any known lease resources.
  /// Common request header.
  bosdyn_msgs__msg__RequestHeader header;
  bool header_is_set;
  /// Include the full data of leases in use, if available.
  /// Defaults to false to receive basic information.
  bool include_full_lease_info;
} bosdyn_msgs__msg__ListLeasesRequest;

// Struct for a sequence of bosdyn_msgs__msg__ListLeasesRequest.
typedef struct bosdyn_msgs__msg__ListLeasesRequest__Sequence
{
  bosdyn_msgs__msg__ListLeasesRequest * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} bosdyn_msgs__msg__ListLeasesRequest__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // BOSDYN_MSGS__MSG__DETAIL__LIST_LEASES_REQUEST__STRUCT_H_