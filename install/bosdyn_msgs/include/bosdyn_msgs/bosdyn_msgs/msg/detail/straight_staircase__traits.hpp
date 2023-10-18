// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from bosdyn_msgs:msg/StraightStaircase.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__STRAIGHT_STAIRCASE__TRAITS_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__STRAIGHT_STAIRCASE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "bosdyn_msgs/msg/detail/straight_staircase__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'location'
#include "bosdyn_msgs/msg/detail/straight_staircase_one_of_location__traits.hpp"
// Member 'stairs'
#include "bosdyn_msgs/msg/detail/straight_staircase_stair__traits.hpp"
// Member 'bottom_landing'
// Member 'top_landing'
#include "bosdyn_msgs/msg/detail/straight_staircase_landing__traits.hpp"

namespace bosdyn_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const StraightStaircase & msg,
  std::ostream & out)
{
  out << "{";
  // member: location
  {
    out << "location: ";
    to_flow_style_yaml(msg.location, out);
    out << ", ";
  }

  // member: stairs
  {
    if (msg.stairs.size() == 0) {
      out << "stairs: []";
    } else {
      out << "stairs: [";
      size_t pending_items = msg.stairs.size();
      for (auto item : msg.stairs) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: bottom_landing
  {
    out << "bottom_landing: ";
    to_flow_style_yaml(msg.bottom_landing, out);
    out << ", ";
  }

  // member: bottom_landing_is_set
  {
    out << "bottom_landing_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.bottom_landing_is_set, out);
    out << ", ";
  }

  // member: top_landing
  {
    out << "top_landing: ";
    to_flow_style_yaml(msg.top_landing, out);
    out << ", ";
  }

  // member: top_landing_is_set
  {
    out << "top_landing_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.top_landing_is_set, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const StraightStaircase & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: location
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "location:\n";
    to_block_style_yaml(msg.location, out, indentation + 2);
  }

  // member: stairs
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.stairs.size() == 0) {
      out << "stairs: []\n";
    } else {
      out << "stairs:\n";
      for (auto item : msg.stairs) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: bottom_landing
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "bottom_landing:\n";
    to_block_style_yaml(msg.bottom_landing, out, indentation + 2);
  }

  // member: bottom_landing_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "bottom_landing_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.bottom_landing_is_set, out);
    out << "\n";
  }

  // member: top_landing
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "top_landing:\n";
    to_block_style_yaml(msg.top_landing, out, indentation + 2);
  }

  // member: top_landing_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "top_landing_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.top_landing_is_set, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const StraightStaircase & msg, bool use_flow_style = false)
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
  const bosdyn_msgs::msg::StraightStaircase & msg,
  std::ostream & out, size_t indentation = 0)
{
  bosdyn_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use bosdyn_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const bosdyn_msgs::msg::StraightStaircase & msg)
{
  return bosdyn_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<bosdyn_msgs::msg::StraightStaircase>()
{
  return "bosdyn_msgs::msg::StraightStaircase";
}

template<>
inline const char * name<bosdyn_msgs::msg::StraightStaircase>()
{
  return "bosdyn_msgs/msg/StraightStaircase";
}

template<>
struct has_fixed_size<bosdyn_msgs::msg::StraightStaircase>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<bosdyn_msgs::msg::StraightStaircase>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<bosdyn_msgs::msg::StraightStaircase>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // BOSDYN_MSGS__MSG__DETAIL__STRAIGHT_STAIRCASE__TRAITS_HPP_