// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from bosdyn_msgs:msg/SqueezeGrasp.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "bosdyn_msgs/msg/detail/squeeze_grasp__struct.hpp"
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

void SqueezeGrasp_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) bosdyn_msgs::msg::SqueezeGrasp(_init);
}

void SqueezeGrasp_fini_function(void * message_memory)
{
  auto typed_message = static_cast<bosdyn_msgs::msg::SqueezeGrasp *>(message_memory);
  typed_message->~SqueezeGrasp();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember SqueezeGrasp_message_member_array[1] = {
  {
    "squeeze_grasp_disallowed",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs::msg::SqueezeGrasp, squeeze_grasp_disallowed),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers SqueezeGrasp_message_members = {
  "bosdyn_msgs::msg",  // message namespace
  "SqueezeGrasp",  // message name
  1,  // number of fields
  sizeof(bosdyn_msgs::msg::SqueezeGrasp),
  SqueezeGrasp_message_member_array,  // message members
  SqueezeGrasp_init_function,  // function to initialize message memory (memory has to be allocated)
  SqueezeGrasp_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t SqueezeGrasp_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &SqueezeGrasp_message_members,
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
get_message_type_support_handle<bosdyn_msgs::msg::SqueezeGrasp>()
{
  return &::bosdyn_msgs::msg::rosidl_typesupport_introspection_cpp::SqueezeGrasp_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, bosdyn_msgs, msg, SqueezeGrasp)() {
  return &::bosdyn_msgs::msg::rosidl_typesupport_introspection_cpp::SqueezeGrasp_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif