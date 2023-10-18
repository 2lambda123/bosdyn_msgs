// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from bosdyn_msgs:msg/ResourceTree.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__RESOURCE_TREE__TRAITS_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__RESOURCE_TREE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "bosdyn_msgs/msg/detail/resource_tree__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'sub_resources'
#include "bosdyn_msgs/msg/detail/serialized_message__traits.hpp"

namespace bosdyn_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const ResourceTree & msg,
  std::ostream & out)
{
  out << "{";
  // member: resource
  {
    out << "resource: ";
    rosidl_generator_traits::value_to_yaml(msg.resource, out);
    out << ", ";
  }

  // member: sub_resources
  {
    if (msg.sub_resources.size() == 0) {
      out << "sub_resources: []";
    } else {
      out << "sub_resources: [";
      size_t pending_items = msg.sub_resources.size();
      for (auto item : msg.sub_resources) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ResourceTree & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: resource
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "resource: ";
    rosidl_generator_traits::value_to_yaml(msg.resource, out);
    out << "\n";
  }

  // member: sub_resources
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.sub_resources.size() == 0) {
      out << "sub_resources: []\n";
    } else {
      out << "sub_resources:\n";
      for (auto item : msg.sub_resources) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ResourceTree & msg, bool use_flow_style = false)
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
  const bosdyn_msgs::msg::ResourceTree & msg,
  std::ostream & out, size_t indentation = 0)
{
  bosdyn_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use bosdyn_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const bosdyn_msgs::msg::ResourceTree & msg)
{
  return bosdyn_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<bosdyn_msgs::msg::ResourceTree>()
{
  return "bosdyn_msgs::msg::ResourceTree";
}

template<>
inline const char * name<bosdyn_msgs::msg::ResourceTree>()
{
  return "bosdyn_msgs/msg/ResourceTree";
}

template<>
struct has_fixed_size<bosdyn_msgs::msg::ResourceTree>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<bosdyn_msgs::msg::ResourceTree>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<bosdyn_msgs::msg::ResourceTree>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // BOSDYN_MSGS__MSG__DETAIL__RESOURCE_TREE__TRAITS_HPP_