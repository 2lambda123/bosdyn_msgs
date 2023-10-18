// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from bosdyn_msgs:msg/NavigationFeedbackResponseBlockageStatus.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__NAVIGATION_FEEDBACK_RESPONSE_BLOCKAGE_STATUS__STRUCT_H_
#define BOSDYN_MSGS__MSG__DETAIL__NAVIGATION_FEEDBACK_RESPONSE_BLOCKAGE_STATUS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'BLOCKAGE_STATUS_UNKNOWN'.
enum
{
  bosdyn_msgs__msg__NavigationFeedbackResponseBlockageStatus__BLOCKAGE_STATUS_UNKNOWN = 0
};

/// Constant 'BLOCKAGE_STATUS_ROUTE_CLEAR'.
/**
  * The robot believes the path forward to be clear of obstacles.
 */
enum
{
  bosdyn_msgs__msg__NavigationFeedbackResponseBlockageStatus__BLOCKAGE_STATUS_ROUTE_CLEAR = 1
};

/// Constant 'BLOCKAGE_STATUS_ROUTE_BLOCKED_TEMPORARILY'.
/**
  * The robot believes there is an obstacle in the path which it can't get around easily.
  * It will attempt to get around the obstacle, and if all else fails it will declare itself stuck.
 */
enum
{
  bosdyn_msgs__msg__NavigationFeedbackResponseBlockageStatus__BLOCKAGE_STATUS_ROUTE_BLOCKED_TEMPORARILY = 2
};

/// Constant 'BLOCKAGE_STATUS_STUCK'.
/**
  * The robot has given up trying to get around perceived obstacles in the path and has declared itself stuck.
  * This will only ever be set when Status is STATUS_STUCK.
 */
enum
{
  bosdyn_msgs__msg__NavigationFeedbackResponseBlockageStatus__BLOCKAGE_STATUS_STUCK = 3
};

/// Struct defined in msg/NavigationFeedbackResponseBlockageStatus in the package bosdyn_msgs.
/**
  * AUTOMATICALLY GENERATED BY PROTO CONVERSION
 */
typedef struct bosdyn_msgs__msg__NavigationFeedbackResponseBlockageStatus
{
  int8_t value;
} bosdyn_msgs__msg__NavigationFeedbackResponseBlockageStatus;

// Struct for a sequence of bosdyn_msgs__msg__NavigationFeedbackResponseBlockageStatus.
typedef struct bosdyn_msgs__msg__NavigationFeedbackResponseBlockageStatus__Sequence
{
  bosdyn_msgs__msg__NavigationFeedbackResponseBlockageStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} bosdyn_msgs__msg__NavigationFeedbackResponseBlockageStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // BOSDYN_MSGS__MSG__DETAIL__NAVIGATION_FEEDBACK_RESPONSE_BLOCKAGE_STATUS__STRUCT_H_