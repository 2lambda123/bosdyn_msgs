// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from bosdyn_msgs:msg/SetICEConfigurationRequest.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__SET_ICE_CONFIGURATION_REQUEST__STRUCT_H_
#define BOSDYN_MSGS__MSG__DETAIL__SET_ICE_CONFIGURATION_REQUEST__STRUCT_H_

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
// Member 'servers'
#include "bosdyn_msgs/msg/detail/ice_server__struct.h"

/// Struct defined in msg/SetICEConfigurationRequest in the package bosdyn_msgs.
/**
  * AUTOMATICALLY GENERATED BY PROTO CONVERSION
 */
typedef struct bosdyn_msgs__msg__SetICEConfigurationRequest
{
  /// Modify the ICE configuration.
  /// Note: this configuration replaces any configuration currently present.
  /// It is *not* appended.
  /// Common request header.
  bosdyn_msgs__msg__RequestHeader header;
  bool header_is_set;
  /// List of servers used for ICE resolution.
  bosdyn_msgs__msg__ICEServer__Sequence servers;
} bosdyn_msgs__msg__SetICEConfigurationRequest;

// Struct for a sequence of bosdyn_msgs__msg__SetICEConfigurationRequest.
typedef struct bosdyn_msgs__msg__SetICEConfigurationRequest__Sequence
{
  bosdyn_msgs__msg__SetICEConfigurationRequest * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} bosdyn_msgs__msg__SetICEConfigurationRequest__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // BOSDYN_MSGS__MSG__DETAIL__SET_ICE_CONFIGURATION_REQUEST__STRUCT_H_