// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/SetPtzPositionRequest.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__SET_PTZ_POSITION_REQUEST__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__SET_PTZ_POSITION_REQUEST__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/set_ptz_position_request__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_SetPtzPositionRequest_position_is_set
{
public:
  explicit Init_SetPtzPositionRequest_position_is_set(::bosdyn_msgs::msg::SetPtzPositionRequest & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::SetPtzPositionRequest position_is_set(::bosdyn_msgs::msg::SetPtzPositionRequest::_position_is_set_type arg)
  {
    msg_.position_is_set = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::SetPtzPositionRequest msg_;
};

class Init_SetPtzPositionRequest_position
{
public:
  explicit Init_SetPtzPositionRequest_position(::bosdyn_msgs::msg::SetPtzPositionRequest & msg)
  : msg_(msg)
  {}
  Init_SetPtzPositionRequest_position_is_set position(::bosdyn_msgs::msg::SetPtzPositionRequest::_position_type arg)
  {
    msg_.position = std::move(arg);
    return Init_SetPtzPositionRequest_position_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::SetPtzPositionRequest msg_;
};

class Init_SetPtzPositionRequest_header_is_set
{
public:
  explicit Init_SetPtzPositionRequest_header_is_set(::bosdyn_msgs::msg::SetPtzPositionRequest & msg)
  : msg_(msg)
  {}
  Init_SetPtzPositionRequest_position header_is_set(::bosdyn_msgs::msg::SetPtzPositionRequest::_header_is_set_type arg)
  {
    msg_.header_is_set = std::move(arg);
    return Init_SetPtzPositionRequest_position(msg_);
  }

private:
  ::bosdyn_msgs::msg::SetPtzPositionRequest msg_;
};

class Init_SetPtzPositionRequest_header
{
public:
  Init_SetPtzPositionRequest_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetPtzPositionRequest_header_is_set header(::bosdyn_msgs::msg::SetPtzPositionRequest::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_SetPtzPositionRequest_header_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::SetPtzPositionRequest msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::SetPtzPositionRequest>()
{
  return bosdyn_msgs::msg::builder::Init_SetPtzPositionRequest_header();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__SET_PTZ_POSITION_REQUEST__BUILDER_HPP_