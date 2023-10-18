// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/RecordOperatorCommentsRequest.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__RECORD_OPERATOR_COMMENTS_REQUEST__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__RECORD_OPERATOR_COMMENTS_REQUEST__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/record_operator_comments_request__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_RecordOperatorCommentsRequest_operator_comments
{
public:
  explicit Init_RecordOperatorCommentsRequest_operator_comments(::bosdyn_msgs::msg::RecordOperatorCommentsRequest & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::RecordOperatorCommentsRequest operator_comments(::bosdyn_msgs::msg::RecordOperatorCommentsRequest::_operator_comments_type arg)
  {
    msg_.operator_comments = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::RecordOperatorCommentsRequest msg_;
};

class Init_RecordOperatorCommentsRequest_header_is_set
{
public:
  explicit Init_RecordOperatorCommentsRequest_header_is_set(::bosdyn_msgs::msg::RecordOperatorCommentsRequest & msg)
  : msg_(msg)
  {}
  Init_RecordOperatorCommentsRequest_operator_comments header_is_set(::bosdyn_msgs::msg::RecordOperatorCommentsRequest::_header_is_set_type arg)
  {
    msg_.header_is_set = std::move(arg);
    return Init_RecordOperatorCommentsRequest_operator_comments(msg_);
  }

private:
  ::bosdyn_msgs::msg::RecordOperatorCommentsRequest msg_;
};

class Init_RecordOperatorCommentsRequest_header
{
public:
  Init_RecordOperatorCommentsRequest_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RecordOperatorCommentsRequest_header_is_set header(::bosdyn_msgs::msg::RecordOperatorCommentsRequest::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_RecordOperatorCommentsRequest_header_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::RecordOperatorCommentsRequest msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::RecordOperatorCommentsRequest>()
{
  return bosdyn_msgs::msg::builder::Init_RecordOperatorCommentsRequest_header();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__RECORD_OPERATOR_COMMENTS_REQUEST__BUILDER_HPP_