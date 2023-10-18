// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from bosdyn_msgs:msg/CameraCalibrationFeedbackRequest.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "bosdyn_msgs/msg/detail/camera_calibration_feedback_request__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace bosdyn_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void CameraCalibrationFeedbackRequest_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) bosdyn_msgs::msg::CameraCalibrationFeedbackRequest(_init);
}

void CameraCalibrationFeedbackRequest_fini_function(void * message_memory)
{
  auto typed_message = static_cast<bosdyn_msgs::msg::CameraCalibrationFeedbackRequest *>(message_memory);
  typed_message->~CameraCalibrationFeedbackRequest();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember CameraCalibrationFeedbackRequest_message_member_array[2] = {
  {
    "header",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<bosdyn_msgs::msg::RequestHeader>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs::msg::CameraCalibrationFeedbackRequest, header),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "header_is_set",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs::msg::CameraCalibrationFeedbackRequest, header_is_set),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers CameraCalibrationFeedbackRequest_message_members = {
  "bosdyn_msgs::msg",  // message namespace
  "CameraCalibrationFeedbackRequest",  // message name
  2,  // number of fields
  sizeof(bosdyn_msgs::msg::CameraCalibrationFeedbackRequest),
  CameraCalibrationFeedbackRequest_message_member_array,  // message members
  CameraCalibrationFeedbackRequest_init_function,  // function to initialize message memory (memory has to be allocated)
  CameraCalibrationFeedbackRequest_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t CameraCalibrationFeedbackRequest_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &CameraCalibrationFeedbackRequest_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace bosdyn_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<bosdyn_msgs::msg::CameraCalibrationFeedbackRequest>()
{
  return &::bosdyn_msgs::msg::rosidl_typesupport_introspection_cpp::CameraCalibrationFeedbackRequest_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, bosdyn_msgs, msg, CameraCalibrationFeedbackRequest)() {
  return &::bosdyn_msgs::msg::rosidl_typesupport_introspection_cpp::CameraCalibrationFeedbackRequest_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif