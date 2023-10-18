// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from bosdyn_msgs:msg/StoreMetadataRequest.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__STORE_METADATA_REQUEST__STRUCT_H_
#define BOSDYN_MSGS__MSG__DETAIL__STORE_METADATA_REQUEST__STRUCT_H_

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
// Member 'metadata'
#include "bosdyn_msgs/msg/detail/associated_metadata__struct.h"
// Member 'data_id'
#include "bosdyn_msgs/msg/detail/data_identifier__struct.h"

/// Struct defined in msg/StoreMetadataRequest in the package bosdyn_msgs.
/**
  * AUTOMATICALLY GENERATED BY PROTO CONVERSION
 */
typedef struct bosdyn_msgs__msg__StoreMetadataRequest
{
  /// Common request header.
  bosdyn_msgs__msg__RequestHeader header;
  bool header_is_set;
  /// Metadata to store.
  bosdyn_msgs__msg__AssociatedMetadata metadata;
  bool metadata_is_set;
  /// Data identifier of the metadata.
  bosdyn_msgs__msg__DataIdentifier data_id;
  bool data_id_is_set;
} bosdyn_msgs__msg__StoreMetadataRequest;

// Struct for a sequence of bosdyn_msgs__msg__StoreMetadataRequest.
typedef struct bosdyn_msgs__msg__StoreMetadataRequest__Sequence
{
  bosdyn_msgs__msg__StoreMetadataRequest * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} bosdyn_msgs__msg__StoreMetadataRequest__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // BOSDYN_MSGS__MSG__DETAIL__STORE_METADATA_REQUEST__STRUCT_H_