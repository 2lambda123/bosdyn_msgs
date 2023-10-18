// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from bosdyn_msgs:msg/NetworkComputeInputData.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__NETWORK_COMPUTE_INPUT_DATA__TRAITS_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__NETWORK_COMPUTE_INPUT_DATA__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "bosdyn_msgs/msg/detail/network_compute_input_data__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'input'
#include "bosdyn_msgs/msg/detail/network_compute_input_data_one_of_input__traits.hpp"
// Member 'rotate_image'
#include "bosdyn_msgs/msg/detail/network_compute_input_data_rotate_image__traits.hpp"

namespace bosdyn_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const NetworkComputeInputData & msg,
  std::ostream & out)
{
  out << "{";
  // member: input
  {
    out << "input: ";
    to_flow_style_yaml(msg.input, out);
    out << ", ";
  }

  // member: model_name
  {
    out << "model_name: ";
    rosidl_generator_traits::value_to_yaml(msg.model_name, out);
    out << ", ";
  }

  // member: min_confidence
  {
    out << "min_confidence: ";
    rosidl_generator_traits::value_to_yaml(msg.min_confidence, out);
    out << ", ";
  }

  // member: rotate_image
  {
    out << "rotate_image: ";
    to_flow_style_yaml(msg.rotate_image, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const NetworkComputeInputData & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: input
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "input:\n";
    to_block_style_yaml(msg.input, out, indentation + 2);
  }

  // member: model_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "model_name: ";
    rosidl_generator_traits::value_to_yaml(msg.model_name, out);
    out << "\n";
  }

  // member: min_confidence
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "min_confidence: ";
    rosidl_generator_traits::value_to_yaml(msg.min_confidence, out);
    out << "\n";
  }

  // member: rotate_image
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rotate_image:\n";
    to_block_style_yaml(msg.rotate_image, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const NetworkComputeInputData & msg, bool use_flow_style = false)
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
  const bosdyn_msgs::msg::NetworkComputeInputData & msg,
  std::ostream & out, size_t indentation = 0)
{
  bosdyn_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use bosdyn_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const bosdyn_msgs::msg::NetworkComputeInputData & msg)
{
  return bosdyn_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<bosdyn_msgs::msg::NetworkComputeInputData>()
{
  return "bosdyn_msgs::msg::NetworkComputeInputData";
}

template<>
inline const char * name<bosdyn_msgs::msg::NetworkComputeInputData>()
{
  return "bosdyn_msgs/msg/NetworkComputeInputData";
}

template<>
struct has_fixed_size<bosdyn_msgs::msg::NetworkComputeInputData>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<bosdyn_msgs::msg::NetworkComputeInputData>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<bosdyn_msgs::msg::NetworkComputeInputData>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // BOSDYN_MSGS__MSG__DETAIL__NETWORK_COMPUTE_INPUT_DATA__TRAITS_HPP_