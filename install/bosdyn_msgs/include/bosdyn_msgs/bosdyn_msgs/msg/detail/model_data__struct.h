// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from bosdyn_msgs:msg/ModelData.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__MODEL_DATA__STRUCT_H_
#define BOSDYN_MSGS__MSG__DETAIL__MODEL_DATA__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'model_name'
// Member 'available_labels'
#include "rosidl_runtime_c/string.h"
// Member 'output_image_spec'
#include "bosdyn_msgs/msg/detail/output_image_spec__struct.h"
// Member 'custom_params'
#include "bosdyn_msgs/msg/detail/dict_param_spec__struct.h"

/// Struct defined in msg/ModelData in the package bosdyn_msgs.
/**
  * AUTOMATICALLY GENERATED BY PROTO CONVERSION
 */
typedef struct bosdyn_msgs__msg__ModelData
{
  /// The model name used should match a name specified here.
  rosidl_runtime_c__String model_name;
  /// List of class labels returned by this model (optional).
  rosidl_runtime_c__String__Sequence available_labels;
  /// An ordered list of what types of outputs this NCB model generates.
  /// This can be used by clients to determine which NCB images to display first
  /// at action configuration time.
  ///
  /// It's ok for the NCB worker to return a different set of outputs (more / fewer)
  /// than specified here.
  bosdyn_msgs__msg__OutputImageSpec__Sequence output_image_spec;
  /// Per-model parameters.
  bosdyn_msgs__msg__DictParamSpec custom_params;
  bool custom_params_is_set;
} bosdyn_msgs__msg__ModelData;

// Struct for a sequence of bosdyn_msgs__msg__ModelData.
typedef struct bosdyn_msgs__msg__ModelData__Sequence
{
  bosdyn_msgs__msg__ModelData * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} bosdyn_msgs__msg__ModelData__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // BOSDYN_MSGS__MSG__DETAIL__MODEL_DATA__STRUCT_H_