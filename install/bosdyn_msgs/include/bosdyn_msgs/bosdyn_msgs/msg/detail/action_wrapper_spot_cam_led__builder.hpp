// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/ActionWrapperSpotCamLed.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__ACTION_WRAPPER_SPOT_CAM_LED__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__ACTION_WRAPPER_SPOT_CAM_LED__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/action_wrapper_spot_cam_led__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_ActionWrapperSpotCamLed_brightnesses
{
public:
  Init_ActionWrapperSpotCamLed_brightnesses()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::bosdyn_msgs::msg::ActionWrapperSpotCamLed brightnesses(::bosdyn_msgs::msg::ActionWrapperSpotCamLed::_brightnesses_type arg)
  {
    msg_.brightnesses = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::ActionWrapperSpotCamLed msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::ActionWrapperSpotCamLed>()
{
  return bosdyn_msgs::msg::builder::Init_ActionWrapperSpotCamLed_brightnesses();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__ACTION_WRAPPER_SPOT_CAM_LED__BUILDER_HPP_