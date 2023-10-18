// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from bosdyn_msgs:msg/AcquireLeaseRequest.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__ACQUIRE_LEASE_REQUEST__STRUCT_H_
#define BOSDYN_MSGS__MSG__DETAIL__ACQUIRE_LEASE_REQUEST__STRUCT_H_

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
// Member 'resource'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/AcquireLeaseRequest in the package bosdyn_msgs.
/**
  * AUTOMATICALLY GENERATED BY PROTO CONVERSION
 */
typedef struct bosdyn_msgs__msg__AcquireLeaseRequest
{
  /// The AcquireLease request message which sends which resource the lease should be for.
  /// Common request header.
  bosdyn_msgs__msg__RequestHeader header;
  bool header_is_set;
  /// The resource to obtain a Lease for.
  rosidl_runtime_c__String resource;
} bosdyn_msgs__msg__AcquireLeaseRequest;

// Struct for a sequence of bosdyn_msgs__msg__AcquireLeaseRequest.
typedef struct bosdyn_msgs__msg__AcquireLeaseRequest__Sequence
{
  bosdyn_msgs__msg__AcquireLeaseRequest * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} bosdyn_msgs__msg__AcquireLeaseRequest__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // BOSDYN_MSGS__MSG__DETAIL__ACQUIRE_LEASE_REQUEST__STRUCT_H_