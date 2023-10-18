// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/CameraCalibrationCommandResponse.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__CAMERA_CALIBRATION_COMMAND_RESPONSE__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__CAMERA_CALIBRATION_COMMAND_RESPONSE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/camera_calibration_command_response__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_CameraCalibrationCommandResponse_lease_use_result_is_set
{
public:
  explicit Init_CameraCalibrationCommandResponse_lease_use_result_is_set(::bosdyn_msgs::msg::CameraCalibrationCommandResponse & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::CameraCalibrationCommandResponse lease_use_result_is_set(::bosdyn_msgs::msg::CameraCalibrationCommandResponse::_lease_use_result_is_set_type arg)
  {
    msg_.lease_use_result_is_set = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::CameraCalibrationCommandResponse msg_;
};

class Init_CameraCalibrationCommandResponse_lease_use_result
{
public:
  explicit Init_CameraCalibrationCommandResponse_lease_use_result(::bosdyn_msgs::msg::CameraCalibrationCommandResponse & msg)
  : msg_(msg)
  {}
  Init_CameraCalibrationCommandResponse_lease_use_result_is_set lease_use_result(::bosdyn_msgs::msg::CameraCalibrationCommandResponse::_lease_use_result_type arg)
  {
    msg_.lease_use_result = std::move(arg);
    return Init_CameraCalibrationCommandResponse_lease_use_result_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::CameraCalibrationCommandResponse msg_;
};

class Init_CameraCalibrationCommandResponse_header_is_set
{
public:
  explicit Init_CameraCalibrationCommandResponse_header_is_set(::bosdyn_msgs::msg::CameraCalibrationCommandResponse & msg)
  : msg_(msg)
  {}
  Init_CameraCalibrationCommandResponse_lease_use_result header_is_set(::bosdyn_msgs::msg::CameraCalibrationCommandResponse::_header_is_set_type arg)
  {
    msg_.header_is_set = std::move(arg);
    return Init_CameraCalibrationCommandResponse_lease_use_result(msg_);
  }

private:
  ::bosdyn_msgs::msg::CameraCalibrationCommandResponse msg_;
};

class Init_CameraCalibrationCommandResponse_header
{
public:
  Init_CameraCalibrationCommandResponse_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CameraCalibrationCommandResponse_header_is_set header(::bosdyn_msgs::msg::CameraCalibrationCommandResponse::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_CameraCalibrationCommandResponse_header_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::CameraCalibrationCommandResponse msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::CameraCalibrationCommandResponse>()
{
  return bosdyn_msgs::msg::builder::Init_CameraCalibrationCommandResponse_header();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__CAMERA_CALIBRATION_COMMAND_RESPONSE__BUILDER_HPP_