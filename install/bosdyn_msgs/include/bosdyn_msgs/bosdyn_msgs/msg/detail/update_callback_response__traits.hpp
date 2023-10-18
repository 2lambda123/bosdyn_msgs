// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from bosdyn_msgs:msg/UpdateCallbackResponse.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__UPDATE_CALLBACK_RESPONSE__TRAITS_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__UPDATE_CALLBACK_RESPONSE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "bosdyn_msgs/msg/detail/update_callback_response__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "bosdyn_msgs/msg/detail/response_header__traits.hpp"
// Member 'status'
#include "bosdyn_msgs/msg/detail/update_callback_response_status__traits.hpp"
// Member 'response'
#include "bosdyn_msgs/msg/detail/update_callback_response_one_of_response__traits.hpp"
// Member 'localization'
#include "bosdyn_msgs/msg/detail/update_callback_response_update_localization__traits.hpp"

namespace bosdyn_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const UpdateCallbackResponse & msg,
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

  // member: status
  {
    out << "status: ";
    to_flow_style_yaml(msg.status, out);
    out << ", ";
  }

  // member: response
  {
    out << "response: ";
    to_flow_style_yaml(msg.response, out);
    out << ", ";
  }

  // member: localization
  {
    out << "localization: ";
    to_flow_style_yaml(msg.localization, out);
    out << ", ";
  }

  // member: localization_is_set
  {
    out << "localization_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.localization_is_set, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const UpdateCallbackResponse & msg,
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

  // member: status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status:\n";
    to_block_style_yaml(msg.status, out, indentation + 2);
  }

  // member: response
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "response:\n";
    to_block_style_yaml(msg.response, out, indentation + 2);
  }

  // member: localization
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "localization:\n";
    to_block_style_yaml(msg.localization, out, indentation + 2);
  }

  // member: localization_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "localization_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.localization_is_set, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const UpdateCallbackResponse & msg, bool use_flow_style = false)
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
  const bosdyn_msgs::msg::UpdateCallbackResponse & msg,
  std::ostream & out, size_t indentation = 0)
{
  bosdyn_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use bosdyn_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const bosdyn_msgs::msg::UpdateCallbackResponse & msg)
{
  return bosdyn_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<bosdyn_msgs::msg::UpdateCallbackResponse>()
{
  return "bosdyn_msgs::msg::UpdateCallbackResponse";
}

template<>
inline const char * name<bosdyn_msgs::msg::UpdateCallbackResponse>()
{
  return "bosdyn_msgs/msg/UpdateCallbackResponse";
}

template<>
struct has_fixed_size<bosdyn_msgs::msg::UpdateCallbackResponse>
  : std::integral_constant<bool, has_fixed_size<bosdyn_msgs::msg::ResponseHeader>::value && has_fixed_size<bosdyn_msgs::msg::UpdateCallbackResponseOneOfResponse>::value && has_fixed_size<bosdyn_msgs::msg::UpdateCallbackResponseStatus>::value && has_fixed_size<bosdyn_msgs::msg::UpdateCallbackResponseUpdateLocalization>::value> {};

template<>
struct has_bounded_size<bosdyn_msgs::msg::UpdateCallbackResponse>
  : std::integral_constant<bool, has_bounded_size<bosdyn_msgs::msg::ResponseHeader>::value && has_bounded_size<bosdyn_msgs::msg::UpdateCallbackResponseOneOfResponse>::value && has_bounded_size<bosdyn_msgs::msg::UpdateCallbackResponseStatus>::value && has_bounded_size<bosdyn_msgs::msg::UpdateCallbackResponseUpdateLocalization>::value> {};

template<>
struct is_message<bosdyn_msgs::msg::UpdateCallbackResponse>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // BOSDYN_MSGS__MSG__DETAIL__UPDATE_CALLBACK_RESPONSE__TRAITS_HPP_