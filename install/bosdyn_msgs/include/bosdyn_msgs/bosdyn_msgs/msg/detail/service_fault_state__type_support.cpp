// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from bosdyn_msgs:msg/ServiceFaultState.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "bosdyn_msgs/msg/detail/service_fault_state__struct.hpp"
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

void ServiceFaultState_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) bosdyn_msgs::msg::ServiceFaultState(_init);
}

void ServiceFaultState_fini_function(void * message_memory)
{
  auto typed_message = static_cast<bosdyn_msgs::msg::ServiceFaultState *>(message_memory);
  typed_message->~ServiceFaultState();
}

size_t size_function__ServiceFaultState__faults(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<bosdyn_msgs::msg::ServiceFault> *>(untyped_member);
  return member->size();
}

const void * get_const_function__ServiceFaultState__faults(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<bosdyn_msgs::msg::ServiceFault> *>(untyped_member);
  return &member[index];
}

void * get_function__ServiceFaultState__faults(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<bosdyn_msgs::msg::ServiceFault> *>(untyped_member);
  return &member[index];
}

void fetch_function__ServiceFaultState__faults(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const bosdyn_msgs::msg::ServiceFault *>(
    get_const_function__ServiceFaultState__faults(untyped_member, index));
  auto & value = *reinterpret_cast<bosdyn_msgs::msg::ServiceFault *>(untyped_value);
  value = item;
}

void assign_function__ServiceFaultState__faults(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<bosdyn_msgs::msg::ServiceFault *>(
    get_function__ServiceFaultState__faults(untyped_member, index));
  const auto & value = *reinterpret_cast<const bosdyn_msgs::msg::ServiceFault *>(untyped_value);
  item = value;
}

void resize_function__ServiceFaultState__faults(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<bosdyn_msgs::msg::ServiceFault> *>(untyped_member);
  member->resize(size);
}

size_t size_function__ServiceFaultState__historical_faults(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<bosdyn_msgs::msg::ServiceFault> *>(untyped_member);
  return member->size();
}

const void * get_const_function__ServiceFaultState__historical_faults(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<bosdyn_msgs::msg::ServiceFault> *>(untyped_member);
  return &member[index];
}

void * get_function__ServiceFaultState__historical_faults(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<bosdyn_msgs::msg::ServiceFault> *>(untyped_member);
  return &member[index];
}

void fetch_function__ServiceFaultState__historical_faults(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const bosdyn_msgs::msg::ServiceFault *>(
    get_const_function__ServiceFaultState__historical_faults(untyped_member, index));
  auto & value = *reinterpret_cast<bosdyn_msgs::msg::ServiceFault *>(untyped_value);
  value = item;
}

void assign_function__ServiceFaultState__historical_faults(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<bosdyn_msgs::msg::ServiceFault *>(
    get_function__ServiceFaultState__historical_faults(untyped_member, index));
  const auto & value = *reinterpret_cast<const bosdyn_msgs::msg::ServiceFault *>(untyped_value);
  item = value;
}

void resize_function__ServiceFaultState__historical_faults(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<bosdyn_msgs::msg::ServiceFault> *>(untyped_member);
  member->resize(size);
}

size_t size_function__ServiceFaultState__aggregated(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<bosdyn_msgs::msg::KeyStringValueBosdynMsgsServiceFaultSeverity> *>(untyped_member);
  return member->size();
}

const void * get_const_function__ServiceFaultState__aggregated(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<bosdyn_msgs::msg::KeyStringValueBosdynMsgsServiceFaultSeverity> *>(untyped_member);
  return &member[index];
}

void * get_function__ServiceFaultState__aggregated(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<bosdyn_msgs::msg::KeyStringValueBosdynMsgsServiceFaultSeverity> *>(untyped_member);
  return &member[index];
}

void fetch_function__ServiceFaultState__aggregated(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const bosdyn_msgs::msg::KeyStringValueBosdynMsgsServiceFaultSeverity *>(
    get_const_function__ServiceFaultState__aggregated(untyped_member, index));
  auto & value = *reinterpret_cast<bosdyn_msgs::msg::KeyStringValueBosdynMsgsServiceFaultSeverity *>(untyped_value);
  value = item;
}

void assign_function__ServiceFaultState__aggregated(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<bosdyn_msgs::msg::KeyStringValueBosdynMsgsServiceFaultSeverity *>(
    get_function__ServiceFaultState__aggregated(untyped_member, index));
  const auto & value = *reinterpret_cast<const bosdyn_msgs::msg::KeyStringValueBosdynMsgsServiceFaultSeverity *>(untyped_value);
  item = value;
}

void resize_function__ServiceFaultState__aggregated(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<bosdyn_msgs::msg::KeyStringValueBosdynMsgsServiceFaultSeverity> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember ServiceFaultState_message_member_array[3] = {
  {
    "faults",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<bosdyn_msgs::msg::ServiceFault>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs::msg::ServiceFaultState, faults),  // bytes offset in struct
    nullptr,  // default value
    size_function__ServiceFaultState__faults,  // size() function pointer
    get_const_function__ServiceFaultState__faults,  // get_const(index) function pointer
    get_function__ServiceFaultState__faults,  // get(index) function pointer
    fetch_function__ServiceFaultState__faults,  // fetch(index, &value) function pointer
    assign_function__ServiceFaultState__faults,  // assign(index, value) function pointer
    resize_function__ServiceFaultState__faults  // resize(index) function pointer
  },
  {
    "historical_faults",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<bosdyn_msgs::msg::ServiceFault>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs::msg::ServiceFaultState, historical_faults),  // bytes offset in struct
    nullptr,  // default value
    size_function__ServiceFaultState__historical_faults,  // size() function pointer
    get_const_function__ServiceFaultState__historical_faults,  // get_const(index) function pointer
    get_function__ServiceFaultState__historical_faults,  // get(index) function pointer
    fetch_function__ServiceFaultState__historical_faults,  // fetch(index, &value) function pointer
    assign_function__ServiceFaultState__historical_faults,  // assign(index, value) function pointer
    resize_function__ServiceFaultState__historical_faults  // resize(index) function pointer
  },
  {
    "aggregated",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<bosdyn_msgs::msg::KeyStringValueBosdynMsgsServiceFaultSeverity>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs::msg::ServiceFaultState, aggregated),  // bytes offset in struct
    nullptr,  // default value
    size_function__ServiceFaultState__aggregated,  // size() function pointer
    get_const_function__ServiceFaultState__aggregated,  // get_const(index) function pointer
    get_function__ServiceFaultState__aggregated,  // get(index) function pointer
    fetch_function__ServiceFaultState__aggregated,  // fetch(index, &value) function pointer
    assign_function__ServiceFaultState__aggregated,  // assign(index, value) function pointer
    resize_function__ServiceFaultState__aggregated  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers ServiceFaultState_message_members = {
  "bosdyn_msgs::msg",  // message namespace
  "ServiceFaultState",  // message name
  3,  // number of fields
  sizeof(bosdyn_msgs::msg::ServiceFaultState),
  ServiceFaultState_message_member_array,  // message members
  ServiceFaultState_init_function,  // function to initialize message memory (memory has to be allocated)
  ServiceFaultState_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t ServiceFaultState_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &ServiceFaultState_message_members,
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
get_message_type_support_handle<bosdyn_msgs::msg::ServiceFaultState>()
{
  return &::bosdyn_msgs::msg::rosidl_typesupport_introspection_cpp::ServiceFaultState_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, bosdyn_msgs, msg, ServiceFaultState)() {
  return &::bosdyn_msgs::msg::rosidl_typesupport_introspection_cpp::ServiceFaultState_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif