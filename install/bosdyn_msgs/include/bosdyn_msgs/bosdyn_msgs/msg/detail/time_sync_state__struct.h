// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from bosdyn_msgs:msg/TimeSyncState.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__TIME_SYNC_STATE__STRUCT_H_
#define BOSDYN_MSGS__MSG__DETAIL__TIME_SYNC_STATE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'best_estimate'
#include "bosdyn_msgs/msg/detail/time_sync_estimate__struct.h"
// Member 'status'
#include "bosdyn_msgs/msg/detail/time_sync_state_status__struct.h"
// Member 'measurement_time'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in msg/TimeSyncState in the package bosdyn_msgs.
/**
  * AUTOMATICALLY GENERATED BY PROTO CONVERSION
 */
typedef struct bosdyn_msgs__msg__TimeSyncState
{
  /// Current best estimate status of time sync.
  /// Best clock synchronization estimate currently available, if any.
  bosdyn_msgs__msg__TimeSyncEstimate best_estimate;
  bool best_estimate_is_set;
  /// STATUS_OK once time sync is established.
  bosdyn_msgs__msg__TimeSyncStateStatus status;
  /// Time of best estimate, in server time.
  builtin_interfaces__msg__Time measurement_time;
  bool measurement_time_is_set;
} bosdyn_msgs__msg__TimeSyncState;

// Struct for a sequence of bosdyn_msgs__msg__TimeSyncState.
typedef struct bosdyn_msgs__msg__TimeSyncState__Sequence
{
  bosdyn_msgs__msg__TimeSyncState * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} bosdyn_msgs__msg__TimeSyncState__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // BOSDYN_MSGS__MSG__DETAIL__TIME_SYNC_STATE__STRUCT_H_