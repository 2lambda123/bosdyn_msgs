// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from bosdyn_msgs:msg/NetworkComputeResponse.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__NETWORK_COMPUTE_RESPONSE__STRUCT_H_
#define BOSDYN_MSGS__MSG__DETAIL__NETWORK_COMPUTE_RESPONSE__STRUCT_H_

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
#include "bosdyn_msgs/msg/detail/response_header__struct.h"
// Member 'object_in_image'
#include "bosdyn_msgs/msg/detail/world_object__struct.h"
// Member 'image_responses'
#include "bosdyn_msgs/msg/detail/image_capture_and_source__struct.h"
// Member 'status'
#include "bosdyn_msgs/msg/detail/network_compute_status__struct.h"
// Member 'custom_param_error'
#include "bosdyn_msgs/msg/detail/custom_param_error__struct.h"
// Member 'output_images'
#include "bosdyn_msgs/msg/detail/key_string_value_bosdyn_msgs_output_image__struct.h"

/// Struct defined in msg/NetworkComputeResponse in the package bosdyn_msgs.
/**
  * AUTOMATICALLY GENERATED BY PROTO CONVERSION
 */
typedef struct bosdyn_msgs__msg__NetworkComputeResponse
{
  /// Common response header.
  bosdyn_msgs__msg__ResponseHeader header;
  bool header_is_set;
  /// Detection information. May include bounding boxes, image coordinates, 3D pose information,
  /// etc.
  bosdyn_msgs__msg__WorldObject__Sequence object_in_image;
  /// The image we computed the data on. If the input image itself was provided in the request,
  /// this field is not populated.  This field is not set for non-image input.
  /// DEPRECATED as of 3.3. Use image_responses instead.
  /// The image we computed the data on. This field is not set for non-image input.
  bosdyn_msgs__msg__ImageCaptureAndSource__Sequence image_responses;
  /// If the image was rotated for processing, this field will contain the amount it was rotated by
  /// (counter-clockwise, in radians).
  ///
  /// Note that the image returned is *not* rotated, regardless of if it was rotated
  /// for processing.  This ensures that all other calibration and metadata remains valid.
  /// DEPRECATED as of 3.3.  Please rotate the image client-side before passing it to NCB worker.
  /// Non image-type data that can optionally be returned by a remote server.
  ///     google.protobuf.Any other_data = 4;
  /// Command status
  bosdyn_msgs__msg__NetworkComputeStatus status;
  /// Filled out if status is NETWORK_COMPUTE_STATUS_CUSTOM_PARAMS_ERROR.
  bosdyn_msgs__msg__CustomParamError custom_param_error;
  bool custom_param_error_is_set;
  /// Optional field to indicate an alert detected by this model.
  ///
  /// Note that this alert will be reported for this entire response (including all output images).
  /// If you have multiple output images and only want to alert on a specific image,
  /// use the alert_data field in the associated OutputImage message.
  /// DEPRECATED as of 3.3. Use alert_data in OutputImage instead.
  /// Optional field to output images generated by this model.
  /// Maps name to OutputImage.
  bosdyn_msgs__msg__KeyStringValueBosdynMsgsOutputImage__Sequence output_images;
} bosdyn_msgs__msg__NetworkComputeResponse;

// Struct for a sequence of bosdyn_msgs__msg__NetworkComputeResponse.
typedef struct bosdyn_msgs__msg__NetworkComputeResponse__Sequence
{
  bosdyn_msgs__msg__NetworkComputeResponse * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} bosdyn_msgs__msg__NetworkComputeResponse__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // BOSDYN_MSGS__MSG__DETAIL__NETWORK_COMPUTE_RESPONSE__STRUCT_H_