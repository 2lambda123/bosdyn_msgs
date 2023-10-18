// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/OpenDoorFeedbackRequest.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__OPEN_DOOR_FEEDBACK_REQUEST__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__OPEN_DOOR_FEEDBACK_REQUEST__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/open_door_feedback_request__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_OpenDoorFeedbackRequest_door_command_id
{
public:
  explicit Init_OpenDoorFeedbackRequest_door_command_id(::bosdyn_msgs::msg::OpenDoorFeedbackRequest & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::OpenDoorFeedbackRequest door_command_id(::bosdyn_msgs::msg::OpenDoorFeedbackRequest::_door_command_id_type arg)
  {
    msg_.door_command_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::OpenDoorFeedbackRequest msg_;
};

class Init_OpenDoorFeedbackRequest_header_is_set
{
public:
  explicit Init_OpenDoorFeedbackRequest_header_is_set(::bosdyn_msgs::msg::OpenDoorFeedbackRequest & msg)
  : msg_(msg)
  {}
  Init_OpenDoorFeedbackRequest_door_command_id header_is_set(::bosdyn_msgs::msg::OpenDoorFeedbackRequest::_header_is_set_type arg)
  {
    msg_.header_is_set = std::move(arg);
    return Init_OpenDoorFeedbackRequest_door_command_id(msg_);
  }

private:
  ::bosdyn_msgs::msg::OpenDoorFeedbackRequest msg_;
};

class Init_OpenDoorFeedbackRequest_header
{
public:
  Init_OpenDoorFeedbackRequest_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_OpenDoorFeedbackRequest_header_is_set header(::bosdyn_msgs::msg::OpenDoorFeedbackRequest::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_OpenDoorFeedbackRequest_header_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::OpenDoorFeedbackRequest msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::OpenDoorFeedbackRequest>()
{
  return bosdyn_msgs::msg::builder::Init_OpenDoorFeedbackRequest_header();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__OPEN_DOOR_FEEDBACK_REQUEST__BUILDER_HPP_