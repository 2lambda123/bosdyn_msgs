// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from bosdyn_msgs:msg/SignalSchema.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__SIGNAL_SCHEMA__STRUCT_H_
#define BOSDYN_MSGS__MSG__DETAIL__SIGNAL_SCHEMA__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'vars'
#include "bosdyn_msgs/msg/detail/signal_schema_variable__struct.h"
// Member 'schema_name'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/SignalSchema in the package bosdyn_msgs.
/**
  * AUTOMATICALLY GENERATED BY PROTO CONVERSION
 */
typedef struct bosdyn_msgs__msg__SignalSchema
{
  /// A description of a set of signals-style variables to log together as timestamped samples.
  /// A variable of signals-style data, which will be sampled in time.
  /// A SignalTick using this schema contains the values of this ordered list of variables.
  bosdyn_msgs__msg__SignalSchemaVariable__Sequence vars;
  /// The name of the schema.
  rosidl_runtime_c__String schema_name;
} bosdyn_msgs__msg__SignalSchema;

// Struct for a sequence of bosdyn_msgs__msg__SignalSchema.
typedef struct bosdyn_msgs__msg__SignalSchema__Sequence
{
  bosdyn_msgs__msg__SignalSchema * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} bosdyn_msgs__msg__SignalSchema__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // BOSDYN_MSGS__MSG__DETAIL__SIGNAL_SCHEMA__STRUCT_H_