// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from bosdyn_msgs:msg/ActionAfter.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__ACTION_AFTER__TRAITS_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__ACTION_AFTER__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "bosdyn_msgs/msg/detail/action_after__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'action'
#include "bosdyn_msgs/msg/detail/action_after_one_of_action__traits.hpp"
// Member 'after'
#include "builtin_interfaces/msg/detail/duration__traits.hpp"

namespace bosdyn_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const ActionAfter & msg,
  std::ostream & out)
{
  out << "{";
  // member: action
  {
    out << "action: ";
    to_flow_style_yaml(msg.action, out);
    out << ", ";
  }

  // member: after
  {
    out << "after: ";
    to_flow_style_yaml(msg.after, out);
    out << ", ";
  }

  // member: after_is_set
  {
    out << "after_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.after_is_set, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ActionAfter & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: action
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "action:\n";
    to_block_style_yaml(msg.action, out, indentation + 2);
  }

  // member: after
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "after:\n";
    to_block_style_yaml(msg.after, out, indentation + 2);
  }

  // member: after_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "after_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.after_is_set, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ActionAfter & msg, bool use_flow_style = false)
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
  const bosdyn_msgs::msg::ActionAfter & msg,
  std::ostream & out, size_t indentation = 0)
{
  bosdyn_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use bosdyn_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const bosdyn_msgs::msg::ActionAfter & msg)
{
  return bosdyn_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<bosdyn_msgs::msg::ActionAfter>()
{
  return "bosdyn_msgs::msg::ActionAfter";
}

template<>
inline const char * name<bosdyn_msgs::msg::ActionAfter>()
{
  return "bosdyn_msgs/msg/ActionAfter";
}

template<>
struct has_fixed_size<bosdyn_msgs::msg::ActionAfter>
  : std::integral_constant<bool, has_fixed_size<bosdyn_msgs::msg::ActionAfterOneOfAction>::value && has_fixed_size<builtin_interfaces::msg::Duration>::value> {};

template<>
struct has_bounded_size<bosdyn_msgs::msg::ActionAfter>
  : std::integral_constant<bool, has_bounded_size<bosdyn_msgs::msg::ActionAfterOneOfAction>::value && has_bounded_size<builtin_interfaces::msg::Duration>::value> {};

template<>
struct is_message<bosdyn_msgs::msg::ActionAfter>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // BOSDYN_MSGS__MSG__DETAIL__ACTION_AFTER__TRAITS_HPP_