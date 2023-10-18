// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from bosdyn_msgs:msg/RecordTextMessagesRequest.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "bosdyn_msgs/msg/detail/record_text_messages_request__struct.hpp"
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

void RecordTextMessagesRequest_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) bosdyn_msgs::msg::RecordTextMessagesRequest(_init);
}

void RecordTextMessagesRequest_fini_function(void * message_memory)
{
  auto typed_message = static_cast<bosdyn_msgs::msg::RecordTextMessagesRequest *>(message_memory);
  typed_message->~RecordTextMessagesRequest();
}

size_t size_function__RecordTextMessagesRequest__text_messages(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<bosdyn_msgs::msg::TextMessage> *>(untyped_member);
  return member->size();
}

const void * get_const_function__RecordTextMessagesRequest__text_messages(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<bosdyn_msgs::msg::TextMessage> *>(untyped_member);
  return &member[index];
}

void * get_function__RecordTextMessagesRequest__text_messages(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<bosdyn_msgs::msg::TextMessage> *>(untyped_member);
  return &member[index];
}

void fetch_function__RecordTextMessagesRequest__text_messages(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const bosdyn_msgs::msg::TextMessage *>(
    get_const_function__RecordTextMessagesRequest__text_messages(untyped_member, index));
  auto & value = *reinterpret_cast<bosdyn_msgs::msg::TextMessage *>(untyped_value);
  value = item;
}

void assign_function__RecordTextMessagesRequest__text_messages(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<bosdyn_msgs::msg::TextMessage *>(
    get_function__RecordTextMessagesRequest__text_messages(untyped_member, index));
  const auto & value = *reinterpret_cast<const bosdyn_msgs::msg::TextMessage *>(untyped_value);
  item = value;
}

void resize_function__RecordTextMessagesRequest__text_messages(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<bosdyn_msgs::msg::TextMessage> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember RecordTextMessagesRequest_message_member_array[3] = {
  {
    "header",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<bosdyn_msgs::msg::RequestHeader>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs::msg::RecordTextMessagesRequest, header),  // bytes offset in struct
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
    offsetof(bosdyn_msgs::msg::RecordTextMessagesRequest, header_is_set),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "text_messages",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<bosdyn_msgs::msg::TextMessage>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs::msg::RecordTextMessagesRequest, text_messages),  // bytes offset in struct
    nullptr,  // default value
    size_function__RecordTextMessagesRequest__text_messages,  // size() function pointer
    get_const_function__RecordTextMessagesRequest__text_messages,  // get_const(index) function pointer
    get_function__RecordTextMessagesRequest__text_messages,  // get(index) function pointer
    fetch_function__RecordTextMessagesRequest__text_messages,  // fetch(index, &value) function pointer
    assign_function__RecordTextMessagesRequest__text_messages,  // assign(index, value) function pointer
    resize_function__RecordTextMessagesRequest__text_messages  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers RecordTextMessagesRequest_message_members = {
  "bosdyn_msgs::msg",  // message namespace
  "RecordTextMessagesRequest",  // message name
  3,  // number of fields
  sizeof(bosdyn_msgs::msg::RecordTextMessagesRequest),
  RecordTextMessagesRequest_message_member_array,  // message members
  RecordTextMessagesRequest_init_function,  // function to initialize message memory (memory has to be allocated)
  RecordTextMessagesRequest_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t RecordTextMessagesRequest_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &RecordTextMessagesRequest_message_members,
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
get_message_type_support_handle<bosdyn_msgs::msg::RecordTextMessagesRequest>()
{
  return &::bosdyn_msgs::msg::rosidl_typesupport_introspection_cpp::RecordTextMessagesRequest_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, bosdyn_msgs, msg, RecordTextMessagesRequest)() {
  return &::bosdyn_msgs::msg::rosidl_typesupport_introspection_cpp::RecordTextMessagesRequest_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif