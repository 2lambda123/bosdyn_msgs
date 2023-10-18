// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from bosdyn_msgs:msg/LogAnnotationOperatorMessage.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "bosdyn_msgs/msg/detail/log_annotation_operator_message__rosidl_typesupport_introspection_c.h"
#include "bosdyn_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "bosdyn_msgs/msg/detail/log_annotation_operator_message__functions.h"
#include "bosdyn_msgs/msg/detail/log_annotation_operator_message__struct.h"


// Include directives for member types
// Member `message`
#include "rosidl_runtime_c/string_functions.h"
// Member `timestamp`
// Member `timestamp_client`
#include "builtin_interfaces/msg/time.h"
// Member `timestamp`
// Member `timestamp_client`
#include "builtin_interfaces/msg/detail/time__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void bosdyn_msgs__msg__LogAnnotationOperatorMessage__rosidl_typesupport_introspection_c__LogAnnotationOperatorMessage_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  bosdyn_msgs__msg__LogAnnotationOperatorMessage__init(message_memory);
}

void bosdyn_msgs__msg__LogAnnotationOperatorMessage__rosidl_typesupport_introspection_c__LogAnnotationOperatorMessage_fini_function(void * message_memory)
{
  bosdyn_msgs__msg__LogAnnotationOperatorMessage__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember bosdyn_msgs__msg__LogAnnotationOperatorMessage__rosidl_typesupport_introspection_c__LogAnnotationOperatorMessage_message_member_array[5] = {
  {
    "message",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__LogAnnotationOperatorMessage, message),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "timestamp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__LogAnnotationOperatorMessage, timestamp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "timestamp_is_set",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__LogAnnotationOperatorMessage, timestamp_is_set),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "timestamp_client",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__LogAnnotationOperatorMessage, timestamp_client),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "timestamp_client_is_set",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__LogAnnotationOperatorMessage, timestamp_client_is_set),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers bosdyn_msgs__msg__LogAnnotationOperatorMessage__rosidl_typesupport_introspection_c__LogAnnotationOperatorMessage_message_members = {
  "bosdyn_msgs__msg",  // message namespace
  "LogAnnotationOperatorMessage",  // message name
  5,  // number of fields
  sizeof(bosdyn_msgs__msg__LogAnnotationOperatorMessage),
  bosdyn_msgs__msg__LogAnnotationOperatorMessage__rosidl_typesupport_introspection_c__LogAnnotationOperatorMessage_message_member_array,  // message members
  bosdyn_msgs__msg__LogAnnotationOperatorMessage__rosidl_typesupport_introspection_c__LogAnnotationOperatorMessage_init_function,  // function to initialize message memory (memory has to be allocated)
  bosdyn_msgs__msg__LogAnnotationOperatorMessage__rosidl_typesupport_introspection_c__LogAnnotationOperatorMessage_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t bosdyn_msgs__msg__LogAnnotationOperatorMessage__rosidl_typesupport_introspection_c__LogAnnotationOperatorMessage_message_type_support_handle = {
  0,
  &bosdyn_msgs__msg__LogAnnotationOperatorMessage__rosidl_typesupport_introspection_c__LogAnnotationOperatorMessage_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_bosdyn_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bosdyn_msgs, msg, LogAnnotationOperatorMessage)() {
  bosdyn_msgs__msg__LogAnnotationOperatorMessage__rosidl_typesupport_introspection_c__LogAnnotationOperatorMessage_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, builtin_interfaces, msg, Time)();
  bosdyn_msgs__msg__LogAnnotationOperatorMessage__rosidl_typesupport_introspection_c__LogAnnotationOperatorMessage_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, builtin_interfaces, msg, Time)();
  if (!bosdyn_msgs__msg__LogAnnotationOperatorMessage__rosidl_typesupport_introspection_c__LogAnnotationOperatorMessage_message_type_support_handle.typesupport_identifier) {
    bosdyn_msgs__msg__LogAnnotationOperatorMessage__rosidl_typesupport_introspection_c__LogAnnotationOperatorMessage_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &bosdyn_msgs__msg__LogAnnotationOperatorMessage__rosidl_typesupport_introspection_c__LogAnnotationOperatorMessage_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif