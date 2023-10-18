// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/LeaseOwner.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__LEASE_OWNER__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__LEASE_OWNER__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/lease_owner__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_LeaseOwner_user_name
{
public:
  explicit Init_LeaseOwner_user_name(::bosdyn_msgs::msg::LeaseOwner & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::LeaseOwner user_name(::bosdyn_msgs::msg::LeaseOwner::_user_name_type arg)
  {
    msg_.user_name = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::LeaseOwner msg_;
};

class Init_LeaseOwner_client_name
{
public:
  Init_LeaseOwner_client_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_LeaseOwner_user_name client_name(::bosdyn_msgs::msg::LeaseOwner::_client_name_type arg)
  {
    msg_.client_name = std::move(arg);
    return Init_LeaseOwner_user_name(msg_);
  }

private:
  ::bosdyn_msgs::msg::LeaseOwner msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::LeaseOwner>()
{
  return bosdyn_msgs::msg::builder::Init_LeaseOwner_client_name();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__LEASE_OWNER__BUILDER_HPP_