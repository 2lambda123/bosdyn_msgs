// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from bosdyn_msgs:msg/PickObjectInImage.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__PICK_OBJECT_IN_IMAGE__TRAITS_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__PICK_OBJECT_IN_IMAGE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "bosdyn_msgs/msg/detail/pick_object_in_image__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'pixel_xy'
#include "bosdyn_msgs/msg/detail/vec2__traits.hpp"
// Member 'transforms_snapshot_for_camera'
#include "bosdyn_msgs/msg/detail/frame_tree_snapshot__traits.hpp"
// Member 'camera_model'
#include "bosdyn_msgs/msg/detail/image_source_pinhole_model__traits.hpp"
// Member 'grasp_params'
#include "bosdyn_msgs/msg/detail/grasp_params__traits.hpp"
// Member 'walk_gaze_mode'
#include "bosdyn_msgs/msg/detail/walk_gaze_mode__traits.hpp"

namespace bosdyn_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const PickObjectInImage & msg,
  std::ostream & out)
{
  out << "{";
  // member: pixel_xy
  {
    out << "pixel_xy: ";
    to_flow_style_yaml(msg.pixel_xy, out);
    out << ", ";
  }

  // member: pixel_xy_is_set
  {
    out << "pixel_xy_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.pixel_xy_is_set, out);
    out << ", ";
  }

  // member: transforms_snapshot_for_camera
  {
    out << "transforms_snapshot_for_camera: ";
    to_flow_style_yaml(msg.transforms_snapshot_for_camera, out);
    out << ", ";
  }

  // member: transforms_snapshot_for_camera_is_set
  {
    out << "transforms_snapshot_for_camera_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.transforms_snapshot_for_camera_is_set, out);
    out << ", ";
  }

  // member: frame_name_image_sensor
  {
    out << "frame_name_image_sensor: ";
    rosidl_generator_traits::value_to_yaml(msg.frame_name_image_sensor, out);
    out << ", ";
  }

  // member: camera_model
  {
    out << "camera_model: ";
    to_flow_style_yaml(msg.camera_model, out);
    out << ", ";
  }

  // member: camera_model_is_set
  {
    out << "camera_model_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.camera_model_is_set, out);
    out << ", ";
  }

  // member: grasp_params
  {
    out << "grasp_params: ";
    to_flow_style_yaml(msg.grasp_params, out);
    out << ", ";
  }

  // member: grasp_params_is_set
  {
    out << "grasp_params_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.grasp_params_is_set, out);
    out << ", ";
  }

  // member: walk_gaze_mode
  {
    out << "walk_gaze_mode: ";
    to_flow_style_yaml(msg.walk_gaze_mode, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const PickObjectInImage & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: pixel_xy
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pixel_xy:\n";
    to_block_style_yaml(msg.pixel_xy, out, indentation + 2);
  }

  // member: pixel_xy_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pixel_xy_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.pixel_xy_is_set, out);
    out << "\n";
  }

  // member: transforms_snapshot_for_camera
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "transforms_snapshot_for_camera:\n";
    to_block_style_yaml(msg.transforms_snapshot_for_camera, out, indentation + 2);
  }

  // member: transforms_snapshot_for_camera_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "transforms_snapshot_for_camera_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.transforms_snapshot_for_camera_is_set, out);
    out << "\n";
  }

  // member: frame_name_image_sensor
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "frame_name_image_sensor: ";
    rosidl_generator_traits::value_to_yaml(msg.frame_name_image_sensor, out);
    out << "\n";
  }

  // member: camera_model
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "camera_model:\n";
    to_block_style_yaml(msg.camera_model, out, indentation + 2);
  }

  // member: camera_model_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "camera_model_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.camera_model_is_set, out);
    out << "\n";
  }

  // member: grasp_params
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "grasp_params:\n";
    to_block_style_yaml(msg.grasp_params, out, indentation + 2);
  }

  // member: grasp_params_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "grasp_params_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.grasp_params_is_set, out);
    out << "\n";
  }

  // member: walk_gaze_mode
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "walk_gaze_mode:\n";
    to_block_style_yaml(msg.walk_gaze_mode, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const PickObjectInImage & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace bosdyn_msgs

namespace rosidl_generator_traits
{

[[deprecated("use bosdyn_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const bosdyn_msgs::msg::PickObjectInImage & msg,
  std::ostream & out, size_t indentation = 0)
{
  bosdyn_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use bosdyn_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const bosdyn_msgs::msg::PickObjectInImage & msg)
{
  return bosdyn_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<bosdyn_msgs::msg::PickObjectInImage>()
{
  return "bosdyn_msgs::msg::PickObjectInImage";
}

template<>
inline const char * name<bosdyn_msgs::msg::PickObjectInImage>()
{
  return "bosdyn_msgs/msg/PickObjectInImage";
}

template<>
struct has_fixed_size<bosdyn_msgs::msg::PickObjectInImage>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<bosdyn_msgs::msg::PickObjectInImage>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<bosdyn_msgs::msg::PickObjectInImage>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // BOSDYN_MSGS__MSG__DETAIL__PICK_OBJECT_IN_IMAGE__TRAITS_HPP_