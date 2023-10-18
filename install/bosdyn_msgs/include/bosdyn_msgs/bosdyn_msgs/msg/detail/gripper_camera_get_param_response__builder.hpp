// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/GripperCameraGetParamResponse.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__GRIPPER_CAMERA_GET_PARAM_RESPONSE__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__GRIPPER_CAMERA_GET_PARAM_RESPONSE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/gripper_camera_get_param_response__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_GripperCameraGetParamResponse_params_is_set
{
public:
  explicit Init_GripperCameraGetParamResponse_params_is_set(::bosdyn_msgs::msg::GripperCameraGetParamResponse & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::GripperCameraGetParamResponse params_is_set(::bosdyn_msgs::msg::GripperCameraGetParamResponse::_params_is_set_type arg)
  {
    msg_.params_is_set = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::GripperCameraGetParamResponse msg_;
};

class Init_GripperCameraGetParamResponse_params
{
public:
  explicit Init_GripperCameraGetParamResponse_params(::bosdyn_msgs::msg::GripperCameraGetParamResponse & msg)
  : msg_(msg)
  {}
  Init_GripperCameraGetParamResponse_params_is_set params(::bosdyn_msgs::msg::GripperCameraGetParamResponse::_params_type arg)
  {
    msg_.params = std::move(arg);
    return Init_GripperCameraGetParamResponse_params_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::GripperCameraGetParamResponse msg_;
};

class Init_GripperCameraGetParamResponse_header_is_set
{
public:
  explicit Init_GripperCameraGetParamResponse_header_is_set(::bosdyn_msgs::msg::GripperCameraGetParamResponse & msg)
  : msg_(msg)
  {}
  Init_GripperCameraGetParamResponse_params header_is_set(::bosdyn_msgs::msg::GripperCameraGetParamResponse::_header_is_set_type arg)
  {
    msg_.header_is_set = std::move(arg);
    return Init_GripperCameraGetParamResponse_params(msg_);
  }

private:
  ::bosdyn_msgs::msg::GripperCameraGetParamResponse msg_;
};

class Init_GripperCameraGetParamResponse_header
{
public:
  Init_GripperCameraGetParamResponse_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GripperCameraGetParamResponse_header_is_set header(::bosdyn_msgs::msg::GripperCameraGetParamResponse::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_GripperCameraGetParamResponse_header_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::GripperCameraGetParamResponse msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::GripperCameraGetParamResponse>()
{
  return bosdyn_msgs::msg::builder::Init_GripperCameraGetParamResponse_header();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__GRIPPER_CAMERA_GET_PARAM_RESPONSE__BUILDER_HPP_