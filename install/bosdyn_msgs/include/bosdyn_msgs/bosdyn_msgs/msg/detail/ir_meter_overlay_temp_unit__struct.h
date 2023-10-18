// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from bosdyn_msgs:msg/IrMeterOverlayTempUnit.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__IR_METER_OVERLAY_TEMP_UNIT__STRUCT_H_
#define BOSDYN_MSGS__MSG__DETAIL__IR_METER_OVERLAY_TEMP_UNIT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'value'
#include "bosdyn_msgs/msg/detail/ir_meter_overlay_temp_unit_temp_unit_type__struct.h"

/// Struct defined in msg/IrMeterOverlayTempUnit in the package bosdyn_msgs.
/**
  * AUTOMATICALLY GENERATED BY PROTO CONVERSION
 */
typedef struct bosdyn_msgs__msg__IrMeterOverlayTempUnit
{
  bosdyn_msgs__msg__IrMeterOverlayTempUnitTempUnitType value;
} bosdyn_msgs__msg__IrMeterOverlayTempUnit;

// Struct for a sequence of bosdyn_msgs__msg__IrMeterOverlayTempUnit.
typedef struct bosdyn_msgs__msg__IrMeterOverlayTempUnit__Sequence
{
  bosdyn_msgs__msg__IrMeterOverlayTempUnit * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} bosdyn_msgs__msg__IrMeterOverlayTempUnit__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // BOSDYN_MSGS__MSG__DETAIL__IR_METER_OVERLAY_TEMP_UNIT__STRUCT_H_