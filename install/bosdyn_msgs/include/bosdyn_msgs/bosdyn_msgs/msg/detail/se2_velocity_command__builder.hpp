// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/SE2VelocityCommand.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__SE2_VELOCITY_COMMAND__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__SE2_VELOCITY_COMMAND__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/se2_velocity_command__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{


}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::SE2VelocityCommand>()
{
  return ::bosdyn_msgs::msg::SE2VelocityCommand(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__SE2_VELOCITY_COMMAND__BUILDER_HPP_