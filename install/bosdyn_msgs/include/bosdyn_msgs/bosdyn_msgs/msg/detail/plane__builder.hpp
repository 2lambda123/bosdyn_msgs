// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/Plane.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__PLANE__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__PLANE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/plane__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_Plane_normal_is_set
{
public:
  explicit Init_Plane_normal_is_set(::bosdyn_msgs::msg::Plane & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::Plane normal_is_set(::bosdyn_msgs::msg::Plane::_normal_is_set_type arg)
  {
    msg_.normal_is_set = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::Plane msg_;
};

class Init_Plane_normal
{
public:
  explicit Init_Plane_normal(::bosdyn_msgs::msg::Plane & msg)
  : msg_(msg)
  {}
  Init_Plane_normal_is_set normal(::bosdyn_msgs::msg::Plane::_normal_type arg)
  {
    msg_.normal = std::move(arg);
    return Init_Plane_normal_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::Plane msg_;
};

class Init_Plane_point_is_set
{
public:
  explicit Init_Plane_point_is_set(::bosdyn_msgs::msg::Plane & msg)
  : msg_(msg)
  {}
  Init_Plane_normal point_is_set(::bosdyn_msgs::msg::Plane::_point_is_set_type arg)
  {
    msg_.point_is_set = std::move(arg);
    return Init_Plane_normal(msg_);
  }

private:
  ::bosdyn_msgs::msg::Plane msg_;
};

class Init_Plane_point
{
public:
  Init_Plane_point()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Plane_point_is_set point(::bosdyn_msgs::msg::Plane::_point_type arg)
  {
    msg_.point = std::move(arg);
    return Init_Plane_point_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::Plane msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::Plane>()
{
  return bosdyn_msgs::msg::builder::Init_Plane_point();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__PLANE__BUILDER_HPP_