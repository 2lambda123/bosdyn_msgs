// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from bosdyn_msgs:msg/SkeletonLinkObjModel.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__SKELETON_LINK_OBJ_MODEL__TRAITS_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__SKELETON_LINK_OBJ_MODEL__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "bosdyn_msgs/msg/detail/skeleton_link_obj_model__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace bosdyn_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const SkeletonLinkObjModel & msg,
  std::ostream & out)
{
  out << "{";
  // member: file_name
  {
    out << "file_name: ";
    rosidl_generator_traits::value_to_yaml(msg.file_name, out);
    out << ", ";
  }

  // member: file_contents
  {
    out << "file_contents: ";
    rosidl_generator_traits::value_to_yaml(msg.file_contents, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SkeletonLinkObjModel & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: file_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "file_name: ";
    rosidl_generator_traits::value_to_yaml(msg.file_name, out);
    out << "\n";
  }

  // member: file_contents
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "file_contents: ";
    rosidl_generator_traits::value_to_yaml(msg.file_contents, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SkeletonLinkObjModel & msg, bool use_flow_style = false)
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
  const bosdyn_msgs::msg::SkeletonLinkObjModel & msg,
  std::ostream & out, size_t indentation = 0)
{
  bosdyn_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use bosdyn_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const bosdyn_msgs::msg::SkeletonLinkObjModel & msg)
{
  return bosdyn_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<bosdyn_msgs::msg::SkeletonLinkObjModel>()
{
  return "bosdyn_msgs::msg::SkeletonLinkObjModel";
}

template<>
inline const char * name<bosdyn_msgs::msg::SkeletonLinkObjModel>()
{
  return "bosdyn_msgs/msg/SkeletonLinkObjModel";
}

template<>
struct has_fixed_size<bosdyn_msgs::msg::SkeletonLinkObjModel>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<bosdyn_msgs::msg::SkeletonLinkObjModel>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<bosdyn_msgs::msg::SkeletonLinkObjModel>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // BOSDYN_MSGS__MSG__DETAIL__SKELETON_LINK_OBJ_MODEL__TRAITS_HPP_