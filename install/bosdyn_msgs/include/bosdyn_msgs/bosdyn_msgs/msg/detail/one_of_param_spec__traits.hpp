// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from bosdyn_msgs:msg/OneOfParamSpec.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__ONE_OF_PARAM_SPEC__TRAITS_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__ONE_OF_PARAM_SPEC__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "bosdyn_msgs/msg/detail/one_of_param_spec__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'specs'
#include "bosdyn_msgs/msg/detail/key_string_value_bosdyn_msgs_one_of_param_child_spec__traits.hpp"

namespace bosdyn_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const OneOfParamSpec & msg,
  std::ostream & out)
{
  out << "{";
  // member: specs
  {
    if (msg.specs.size() == 0) {
      out << "specs: []";
    } else {
      out << "specs: [";
      size_t pending_items = msg.specs.size();
      for (auto item : msg.specs) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: default_key
  {
    out << "default_key: ";
    rosidl_generator_traits::value_to_yaml(msg.default_key, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const OneOfParamSpec & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: specs
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.specs.size() == 0) {
      out << "specs: []\n";
    } else {
      out << "specs:\n";
      for (auto item : msg.specs) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: default_key
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "default_key: ";
    rosidl_generator_traits::value_to_yaml(msg.default_key, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const OneOfParamSpec & msg, bool use_flow_style = false)
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
  const bosdyn_msgs::msg::OneOfParamSpec & msg,
  std::ostream & out, size_t indentation = 0)
{
  bosdyn_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use bosdyn_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const bosdyn_msgs::msg::OneOfParamSpec & msg)
{
  return bosdyn_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<bosdyn_msgs::msg::OneOfParamSpec>()
{
  return "bosdyn_msgs::msg::OneOfParamSpec";
}

template<>
inline const char * name<bosdyn_msgs::msg::OneOfParamSpec>()
{
  return "bosdyn_msgs/msg/OneOfParamSpec";
}

template<>
struct has_fixed_size<bosdyn_msgs::msg::OneOfParamSpec>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<bosdyn_msgs::msg::OneOfParamSpec>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<bosdyn_msgs::msg::OneOfParamSpec>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // BOSDYN_MSGS__MSG__DETAIL__ONE_OF_PARAM_SPEC__TRAITS_HPP_