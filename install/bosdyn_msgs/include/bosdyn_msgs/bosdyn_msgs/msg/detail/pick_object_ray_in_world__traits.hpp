// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from bosdyn_msgs:msg/PickObjectRayInWorld.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__PICK_OBJECT_RAY_IN_WORLD__TRAITS_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__PICK_OBJECT_RAY_IN_WORLD__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "bosdyn_msgs/msg/detail/pick_object_ray_in_world__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'ray_start_rt_frame'
// Member 'ray_end_rt_frame'
#include "geometry_msgs/msg/detail/vector3__traits.hpp"
// Member 'grasp_params'
#include "bosdyn_msgs/msg/detail/grasp_params__traits.hpp"
// Member 'walk_gaze_mode'
#include "bosdyn_msgs/msg/detail/walk_gaze_mode__traits.hpp"

namespace bosdyn_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const PickObjectRayInWorld & msg,
  std::ostream & out)
{
  out << "{";
  // member: ray_start_rt_frame
  {
    out << "ray_start_rt_frame: ";
    to_flow_style_yaml(msg.ray_start_rt_frame, out);
    out << ", ";
  }

  // member: ray_start_rt_frame_is_set
  {
    out << "ray_start_rt_frame_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.ray_start_rt_frame_is_set, out);
    out << ", ";
  }

  // member: ray_end_rt_frame
  {
    out << "ray_end_rt_frame: ";
    to_flow_style_yaml(msg.ray_end_rt_frame, out);
    out << ", ";
  }

  // member: ray_end_rt_frame_is_set
  {
    out << "ray_end_rt_frame_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.ray_end_rt_frame_is_set, out);
    out << ", ";
  }

  // member: frame_name
  {
    out << "frame_name: ";
    rosidl_generator_traits::value_to_yaml(msg.frame_name, out);
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
  const PickObjectRayInWorld & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: ray_start_rt_frame
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ray_start_rt_frame:\n";
    to_block_style_yaml(msg.ray_start_rt_frame, out, indentation + 2);
  }

  // member: ray_start_rt_frame_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ray_start_rt_frame_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.ray_start_rt_frame_is_set, out);
    out << "\n";
  }

  // member: ray_end_rt_frame
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ray_end_rt_frame:\n";
    to_block_style_yaml(msg.ray_end_rt_frame, out, indentation + 2);
  }

  // member: ray_end_rt_frame_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ray_end_rt_frame_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.ray_end_rt_frame_is_set, out);
    out << "\n";
  }

  // member: frame_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "frame_name: ";
    rosidl_generator_traits::value_to_yaml(msg.frame_name, out);
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

inline std::string to_yaml(const PickObjectRayInWorld & msg, bool use_flow_style = false)
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
  const bosdyn_msgs::msg::PickObjectRayInWorld & msg,
  std::ostream & out, size_t indentation = 0)
{
  bosdyn_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use bosdyn_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const bosdyn_msgs::msg::PickObjectRayInWorld & msg)
{
  return bosdyn_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<bosdyn_msgs::msg::PickObjectRayInWorld>()
{
  return "bosdyn_msgs::msg::PickObjectRayInWorld";
}

template<>
inline const char * name<bosdyn_msgs::msg::PickObjectRayInWorld>()
{
  return "bosdyn_msgs/msg/PickObjectRayInWorld";
}

template<>
struct has_fixed_size<bosdyn_msgs::msg::PickObjectRayInWorld>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<bosdyn_msgs::msg::PickObjectRayInWorld>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<bosdyn_msgs::msg::PickObjectRayInWorld>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // BOSDYN_MSGS__MSG__DETAIL__PICK_OBJECT_RAY_IN_WORLD__TRAITS_HPP_