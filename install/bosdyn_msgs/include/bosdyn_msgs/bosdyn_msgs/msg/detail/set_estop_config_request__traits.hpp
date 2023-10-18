// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from bosdyn_msgs:msg/SetEstopConfigRequest.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__SET_ESTOP_CONFIG_REQUEST__TRAITS_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__SET_ESTOP_CONFIG_REQUEST__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "bosdyn_msgs/msg/detail/set_estop_config_request__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "bosdyn_msgs/msg/detail/request_header__traits.hpp"
// Member 'config'
#include "bosdyn_msgs/msg/detail/estop_config__traits.hpp"

namespace bosdyn_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const SetEstopConfigRequest & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: header_is_set
  {
    out << "header_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.header_is_set, out);
    out << ", ";
  }

  // member: config
  {
    out << "config: ";
    to_flow_style_yaml(msg.config, out);
    out << ", ";
  }

  // member: config_is_set
  {
    out << "config_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.config_is_set, out);
    out << ", ";
  }

  // member: target_config_id
  {
    out << "target_config_id: ";
    rosidl_generator_traits::value_to_yaml(msg.target_config_id, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SetEstopConfigRequest & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: header
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "header:\n";
    to_block_style_yaml(msg.header, out, indentation + 2);
  }

  // member: header_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "header_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.header_is_set, out);
    out << "\n";
  }

  // member: config
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "config:\n";
    to_block_style_yaml(msg.config, out, indentation + 2);
  }

  // member: config_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "config_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.config_is_set, out);
    out << "\n";
  }

  // member: target_config_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "target_config_id: ";
    rosidl_generator_traits::value_to_yaml(msg.target_config_id, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SetEstopConfigRequest & msg, bool use_flow_style = false)
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
  const bosdyn_msgs::msg::SetEstopConfigRequest & msg,
  std::ostream & out, size_t indentation = 0)
{
  bosdyn_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use bosdyn_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const bosdyn_msgs::msg::SetEstopConfigRequest & msg)
{
  return bosdyn_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<bosdyn_msgs::msg::SetEstopConfigRequest>()
{
  return "bosdyn_msgs::msg::SetEstopConfigRequest";
}

template<>
inline const char * name<bosdyn_msgs::msg::SetEstopConfigRequest>()
{
  return "bosdyn_msgs/msg/SetEstopConfigRequest";
}

template<>
struct has_fixed_size<bosdyn_msgs::msg::SetEstopConfigRequest>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<bosdyn_msgs::msg::SetEstopConfigRequest>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<bosdyn_msgs::msg::SetEstopConfigRequest>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // BOSDYN_MSGS__MSG__DETAIL__SET_ESTOP_CONFIG_REQUEST__TRAITS_HPP_