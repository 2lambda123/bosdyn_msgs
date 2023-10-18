// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from bosdyn_msgs:msg/ReturnLeaseRequest.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__RETURN_LEASE_REQUEST__STRUCT_H_
#define BOSDYN_MSGS__MSG__DETAIL__RETURN_LEASE_REQUEST__STRUCT_H_

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
// Member 'lease'
#include "bosdyn_msgs/msg/detail/lease__struct.h"

/// Struct defined in msg/ReturnLeaseRequest in the package bosdyn_msgs.
/**
  * AUTOMATICALLY GENERATED BY PROTO CONVERSION
 */
typedef struct bosdyn_msgs__msg__ReturnLeaseRequest
{
  /// The ReturnLease request message will be sent to the LeaseService. If the lease
  /// is currently active for the resource, the LeaseService will invalidate the lease.
  /// Future calls to AcquireLease by any client will now succeed.
  /// Common request header.
  bosdyn_msgs__msg__RequestHeader header;
  bool header_is_set;
  /// The Lease to return back to the LeaseService.
  bosdyn_msgs__msg__Lease lease;
  bool lease_is_set;
} bosdyn_msgs__msg__ReturnLeaseRequest;

// Struct for a sequence of bosdyn_msgs__msg__ReturnLeaseRequest.
typedef struct bosdyn_msgs__msg__ReturnLeaseRequest__Sequence
{
  bosdyn_msgs__msg__ReturnLeaseRequest * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} bosdyn_msgs__msg__ReturnLeaseRequest__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // BOSDYN_MSGS__MSG__DETAIL__RETURN_LEASE_REQUEST__STRUCT_H_