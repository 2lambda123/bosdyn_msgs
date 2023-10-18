// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from bosdyn_msgs:msg/StartExperimentLogRequest.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__START_EXPERIMENT_LOG_REQUEST__TRAITS_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__START_EXPERIMENT_LOG_REQUEST__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "bosdyn_msgs/msg/detail/start_experiment_log_request__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "bosdyn_msgs/msg/detail/request_header__traits.hpp"
// Member 'keep_alive'
#include "builtin_interfaces/msg/detail/duration__traits.hpp"

namespace bosdyn_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const StartExperimentLogRequest & msg,
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

  // member: keep_alive
  {
    out << "keep_alive: ";
    to_flow_style_yaml(msg.keep_alive, out);
    out << ", ";
  }

  // member: keep_alive_is_set
  {
    out << "keep_alive_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.keep_alive_is_set, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const StartExperimentLogRequest & msg,
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

  // member: keep_alive
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "keep_alive:\n";
    to_block_style_yaml(msg.keep_alive, out, indentation + 2);
  }

  // member: keep_alive_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "keep_alive_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.keep_alive_is_set, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const StartExperimentLogRequest & msg, bool use_flow_style = false)
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
  const bosdyn_msgs::msg::StartExperimentLogRequest & msg,
  std::ostream & out, size_t indentation = 0)
{
  bosdyn_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use bosdyn_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const bosdyn_msgs::msg::StartExperimentLogRequest & msg)
{
  return bosdyn_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<bosdyn_msgs::msg::StartExperimentLogRequest>()
{
  return "bosdyn_msgs::msg::StartExperimentLogRequest";
}

template<>
inline const char * name<bosdyn_msgs::msg::StartExperimentLogRequest>()
{
  return "bosdyn_msgs/msg/StartExperimentLogRequest";
}

template<>
struct has_fixed_size<bosdyn_msgs::msg::StartExperimentLogRequest>
  : std::integral_constant<bool, has_fixed_size<bosdyn_msgs::msg::RequestHeader>::value && has_fixed_size<builtin_interfaces::msg::Duration>::value> {};

template<>
struct has_bounded_size<bosdyn_msgs::msg::StartExperimentLogRequest>
  : std::integral_constant<bool, has_bounded_size<bosdyn_msgs::msg::RequestHeader>::value && has_bounded_size<builtin_interfaces::msg::Duration>::value> {};

template<>
struct is_message<bosdyn_msgs::msg::StartExperimentLogRequest>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // BOSDYN_MSGS__MSG__DETAIL__START_EXPERIMENT_LOG_REQUEST__TRAITS_HPP_