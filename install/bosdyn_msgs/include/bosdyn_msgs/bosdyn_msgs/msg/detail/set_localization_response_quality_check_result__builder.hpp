// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/SetLocalizationResponseQualityCheckResult.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__SET_LOCALIZATION_RESPONSE_QUALITY_CHECK_RESULT__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__SET_LOCALIZATION_RESPONSE_QUALITY_CHECK_RESULT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/set_localization_response_quality_check_result__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_SetLocalizationResponseQualityCheckResult_value
{
public:
  Init_SetLocalizationResponseQualityCheckResult_value()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::bosdyn_msgs::msg::SetLocalizationResponseQualityCheckResult value(::bosdyn_msgs::msg::SetLocalizationResponseQualityCheckResult::_value_type arg)
  {
    msg_.value = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::SetLocalizationResponseQualityCheckResult msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::SetLocalizationResponseQualityCheckResult>()
{
  return bosdyn_msgs::msg::builder::Init_SetLocalizationResponseQualityCheckResult_value();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__SET_LOCALIZATION_RESPONSE_QUALITY_CHECK_RESULT__BUILDER_HPP_