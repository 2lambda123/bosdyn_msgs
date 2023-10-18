// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from bosdyn_msgs:msg/ImageResponse.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__IMAGE_RESPONSE__TRAITS_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__IMAGE_RESPONSE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "bosdyn_msgs/msg/detail/image_response__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'shot'
#include "bosdyn_msgs/msg/detail/image_capture__traits.hpp"
// Member 'source'
#include "bosdyn_msgs/msg/detail/image_source__traits.hpp"
// Member 'status'
#include "bosdyn_msgs/msg/detail/image_response_status__traits.hpp"
// Member 'custom_param_error'
#include "bosdyn_msgs/msg/detail/custom_param_error__traits.hpp"

namespace bosdyn_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const ImageResponse & msg,
  std::ostream & out)
{
  out << "{";
  // member: shot
  {
    out << "shot: ";
    to_flow_style_yaml(msg.shot, out);
    out << ", ";
  }

  // member: shot_is_set
  {
    out << "shot_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.shot_is_set, out);
    out << ", ";
  }

  // member: source
  {
    out << "source: ";
    to_flow_style_yaml(msg.source, out);
    out << ", ";
  }

  // member: source_is_set
  {
    out << "source_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.source_is_set, out);
    out << ", ";
  }

  // member: status
  {
    out << "status: ";
    to_flow_style_yaml(msg.status, out);
    out << ", ";
  }

  // member: custom_param_error
  {
    out << "custom_param_error: ";
    to_flow_style_yaml(msg.custom_param_error, out);
    out << ", ";
  }

  // member: custom_param_error_is_set
  {
    out << "custom_param_error_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.custom_param_error_is_set, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ImageResponse & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: shot
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "shot:\n";
    to_block_style_yaml(msg.shot, out, indentation + 2);
  }

  // member: shot_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "shot_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.shot_is_set, out);
    out << "\n";
  }

  // member: source
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "source:\n";
    to_block_style_yaml(msg.source, out, indentation + 2);
  }

  // member: source_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "source_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.source_is_set, out);
    out << "\n";
  }

  // member: status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status:\n";
    to_block_style_yaml(msg.status, out, indentation + 2);
  }

  // member: custom_param_error
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "custom_param_error:\n";
    to_block_style_yaml(msg.custom_param_error, out, indentation + 2);
  }

  // member: custom_param_error_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "custom_param_error_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.custom_param_error_is_set, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ImageResponse & msg, bool use_flow_style = false)
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
  const bosdyn_msgs::msg::ImageResponse & msg,
  std::ostream & out, size_t indentation = 0)
{
  bosdyn_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use bosdyn_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const bosdyn_msgs::msg::ImageResponse & msg)
{
  return bosdyn_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<bosdyn_msgs::msg::ImageResponse>()
{
  return "bosdyn_msgs::msg::ImageResponse";
}

template<>
inline const char * name<bosdyn_msgs::msg::ImageResponse>()
{
  return "bosdyn_msgs/msg/ImageResponse";
}

template<>
struct has_fixed_size<bosdyn_msgs::msg::ImageResponse>
  : std::integral_constant<bool, has_fixed_size<bosdyn_msgs::msg::CustomParamError>::value && has_fixed_size<bosdyn_msgs::msg::ImageCapture>::value && has_fixed_size<bosdyn_msgs::msg::ImageResponseStatus>::value && has_fixed_size<bosdyn_msgs::msg::ImageSource>::value> {};

template<>
struct has_bounded_size<bosdyn_msgs::msg::ImageResponse>
  : std::integral_constant<bool, has_bounded_size<bosdyn_msgs::msg::CustomParamError>::value && has_bounded_size<bosdyn_msgs::msg::ImageCapture>::value && has_bounded_size<bosdyn_msgs::msg::ImageResponseStatus>::value && has_bounded_size<bosdyn_msgs::msg::ImageSource>::value> {};

template<>
struct is_message<bosdyn_msgs::msg::ImageResponse>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // BOSDYN_MSGS__MSG__DETAIL__IMAGE_RESPONSE__TRAITS_HPP_