// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from bosdyn_msgs:msg/UpdatePayloadAttachedRequestRequest.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__UPDATE_PAYLOAD_ATTACHED_REQUEST_REQUEST__STRUCT_H_
#define BOSDYN_MSGS__MSG__DETAIL__UPDATE_PAYLOAD_ATTACHED_REQUEST_REQUEST__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'REQUEST_UNKNOWN'.
enum
{
  bosdyn_msgs__msg__UpdatePayloadAttachedRequestRequest__REQUEST_UNKNOWN = 0
};

/// Constant 'REQUEST_ATTACH'.
enum
{
  bosdyn_msgs__msg__UpdatePayloadAttachedRequestRequest__REQUEST_ATTACH = 1
};

/// Constant 'REQUEST_DETACH'.
enum
{
  bosdyn_msgs__msg__UpdatePayloadAttachedRequestRequest__REQUEST_DETACH = 2
};

/// Struct defined in msg/UpdatePayloadAttachedRequestRequest in the package bosdyn_msgs.
/**
  * AUTOMATICALLY GENERATED BY PROTO CONVERSION
 */
typedef struct bosdyn_msgs__msg__UpdatePayloadAttachedRequestRequest
{
  int8_t value;
} bosdyn_msgs__msg__UpdatePayloadAttachedRequestRequest;

// Struct for a sequence of bosdyn_msgs__msg__UpdatePayloadAttachedRequestRequest.
typedef struct bosdyn_msgs__msg__UpdatePayloadAttachedRequestRequest__Sequence
{
  bosdyn_msgs__msg__UpdatePayloadAttachedRequestRequest * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} bosdyn_msgs__msg__UpdatePayloadAttachedRequestRequest__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // BOSDYN_MSGS__MSG__DETAIL__UPDATE_PAYLOAD_ATTACHED_REQUEST_REQUEST__STRUCT_H_