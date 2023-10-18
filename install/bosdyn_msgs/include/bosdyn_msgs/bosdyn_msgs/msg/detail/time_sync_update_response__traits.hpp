// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from bosdyn_msgs:msg/TimeSyncUpdateResponse.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__TIME_SYNC_UPDATE_RESPONSE__TRAITS_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__TIME_SYNC_UPDATE_RESPONSE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "bosdyn_msgs/msg/detail/time_sync_update_response__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "bosdyn_msgs/msg/detail/response_header__traits.hpp"
// Member 'previous_estimate'
#include "bosdyn_msgs/msg/detail/time_sync_estimate__traits.hpp"
// Member 'state'
#include "bosdyn_msgs/msg/detail/time_sync_state__traits.hpp"

namespace bosdyn_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const TimeSyncUpdateResponse & msg,
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

  // member: previous_estimate
  {
    out << "previous_estimate: ";
    to_flow_style_yaml(msg.previous_estimate, out);
    out << ", ";
  }

  // member: previous_estimate_is_set
  {
    out << "previous_estimate_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.previous_estimate_is_set, out);
    out << ", ";
  }

  // member: state
  {
    out << "state: ";
    to_flow_style_yaml(msg.state, out);
    out << ", ";
  }

  // member: state_is_set
  {
    out << "state_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.state_is_set, out);
    out << ", ";
  }

  // member: clock_identifier
  {
    out << "clock_identifier: ";
    rosidl_generator_traits::value_to_yaml(msg.clock_identifier, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const TimeSyncUpdateResponse & msg,
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

  // member: previous_estimate
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "previous_estimate:\n";
    to_block_style_yaml(msg.previous_estimate, out, indentation + 2);
  }

  // member: previous_estimate_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "previous_estimate_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.previous_estimate_is_set, out);
    out << "\n";
  }

  // member: state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "state:\n";
    to_block_style_yaml(msg.state, out, indentation + 2);
  }

  // member: state_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "state_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.state_is_set, out);
    out << "\n";
  }

  // member: clock_identifier
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "clock_identifier: ";
    rosidl_generator_traits::value_to_yaml(msg.clock_identifier, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const TimeSyncUpdateResponse & msg, bool use_flow_style = false)
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
  const bosdyn_msgs::msg::TimeSyncUpdateResponse & msg,
  std::ostream & out, size_t indentation = 0)
{
  bosdyn_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use bosdyn_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const bosdyn_msgs::msg::TimeSyncUpdateResponse & msg)
{
  return bosdyn_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<bosdyn_msgs::msg::TimeSyncUpdateResponse>()
{
  return "bosdyn_msgs::msg::TimeSyncUpdateResponse";
}

template<>
inline const char * name<bosdyn_msgs::msg::TimeSyncUpdateResponse>()
{
  return "bosdyn_msgs/msg/TimeSyncUpdateResponse";
}

template<>
struct has_fixed_size<bosdyn_msgs::msg::TimeSyncUpdateResponse>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<bosdyn_msgs::msg::TimeSyncUpdateResponse>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<bosdyn_msgs::msg::TimeSyncUpdateResponse>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // BOSDYN_MSGS__MSG__DETAIL__TIME_SYNC_UPDATE_RESPONSE__TRAITS_HPP_