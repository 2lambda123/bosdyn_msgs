// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/CreateWaypointResponseStatus.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__CREATE_WAYPOINT_RESPONSE_STATUS__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__CREATE_WAYPOINT_RESPONSE_STATUS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/create_waypoint_response_status__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_CreateWaypointResponseStatus_value
{
public:
  Init_CreateWaypointResponseStatus_value()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::bosdyn_msgs::msg::CreateWaypointResponseStatus value(::bosdyn_msgs::msg::CreateWaypointResponseStatus::_value_type arg)
  {
    msg_.value = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::CreateWaypointResponseStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::CreateWaypointResponseStatus>()
{
  return bosdyn_msgs::msg::builder::Init_CreateWaypointResponseStatus_value();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__CREATE_WAYPOINT_RESPONSE_STATUS__BUILDER_HPP_