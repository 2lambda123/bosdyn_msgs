// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from bosdyn_msgs:msg/DockingCommandResponseStatus.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__DOCKING_COMMAND_RESPONSE_STATUS__STRUCT_H_
#define BOSDYN_MSGS__MSG__DETAIL__DOCKING_COMMAND_RESPONSE_STATUS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'STATUS_UNKNOWN'.
/**
  * Status is not specified.
 */
enum
{
  bosdyn_msgs__msg__DockingCommandResponseStatus__STATUS_UNKNOWN = 0
};

/// Constant 'STATUS_OK'.
/**
  * Docking command accepted
 */
enum
{
  bosdyn_msgs__msg__DockingCommandResponseStatus__STATUS_OK = 1
};

/// Constant 'STATUS_ERROR_LEASE'.
/**
  * ERROR: Lease rejected
 */
enum
{
  bosdyn_msgs__msg__DockingCommandResponseStatus__STATUS_ERROR_LEASE = 2
};

/// Constant 'STATUS_ERROR_DOCK_NOT_FOUND'.
/**
  * ERROR: Dock fiducial not found.
 */
enum
{
  bosdyn_msgs__msg__DockingCommandResponseStatus__STATUS_ERROR_DOCK_NOT_FOUND = 3
};

/// Constant 'STATUS_ERROR_NOT_DOCKED'.
/**
  * ERROR: Trying to undock while not docked
 */
enum
{
  bosdyn_msgs__msg__DockingCommandResponseStatus__STATUS_ERROR_NOT_DOCKED = 4
};

/// Constant 'STATUS_ERROR_GRIPPER_HOLDING_ITEM'.
/**
  * ERROR: Trying to dock when the arm is holding an object.
 */
enum
{
  bosdyn_msgs__msg__DockingCommandResponseStatus__STATUS_ERROR_GRIPPER_HOLDING_ITEM = 5
};

/// Constant 'STATUS_ERROR_NOT_AVAILABLE'.
/**
  * ERROR: The dock is not available for docking.
 */
enum
{
  bosdyn_msgs__msg__DockingCommandResponseStatus__STATUS_ERROR_NOT_AVAILABLE = 6
};

/// Constant 'STATUS_ERROR_SYSTEM'.
/**
  * ERROR: Internal system error during execution
  * This error cannot be resolved by issuing a new DockingCommand
  * Check the returned message for details
 */
enum
{
  bosdyn_msgs__msg__DockingCommandResponseStatus__STATUS_ERROR_SYSTEM = 7
};

/// Struct defined in msg/DockingCommandResponseStatus in the package bosdyn_msgs.
/**
  * AUTOMATICALLY GENERATED BY PROTO CONVERSION
 */
typedef struct bosdyn_msgs__msg__DockingCommandResponseStatus
{
  int8_t value;
} bosdyn_msgs__msg__DockingCommandResponseStatus;

// Struct for a sequence of bosdyn_msgs__msg__DockingCommandResponseStatus.
typedef struct bosdyn_msgs__msg__DockingCommandResponseStatus__Sequence
{
  bosdyn_msgs__msg__DockingCommandResponseStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} bosdyn_msgs__msg__DockingCommandResponseStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // BOSDYN_MSGS__MSG__DETAIL__DOCKING_COMMAND_RESPONSE_STATUS__STRUCT_H_