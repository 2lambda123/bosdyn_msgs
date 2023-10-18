// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from bosdyn_msgs:msg/BosdynGraphNavLocalize.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "bosdyn_msgs/msg/detail/bosdyn_graph_nav_localize__rosidl_typesupport_introspection_c.h"
#include "bosdyn_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "bosdyn_msgs/msg/detail/bosdyn_graph_nav_localize__functions.h"
#include "bosdyn_msgs/msg/detail/bosdyn_graph_nav_localize__struct.h"


// Include directives for member types
// Member `service_name`
// Member `host`
// Member `response_bb_key`
#include "rosidl_runtime_c/string_functions.h"
// Member `localization_request`
#include "bosdyn_msgs/msg/set_localization_request.h"
// Member `localization_request`
#include "bosdyn_msgs/msg/detail/set_localization_request__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void bosdyn_msgs__msg__BosdynGraphNavLocalize__rosidl_typesupport_introspection_c__BosdynGraphNavLocalize_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  bosdyn_msgs__msg__BosdynGraphNavLocalize__init(message_memory);
}

void bosdyn_msgs__msg__BosdynGraphNavLocalize__rosidl_typesupport_introspection_c__BosdynGraphNavLocalize_fini_function(void * message_memory)
{
  bosdyn_msgs__msg__BosdynGraphNavLocalize__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember bosdyn_msgs__msg__BosdynGraphNavLocalize__rosidl_typesupport_introspection_c__BosdynGraphNavLocalize_message_member_array[6] = {
  {
    "service_name",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__BosdynGraphNavLocalize, service_name),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "host",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__BosdynGraphNavLocalize, host),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "localization_request",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__BosdynGraphNavLocalize, localization_request),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "localization_request_is_set",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__BosdynGraphNavLocalize, localization_request_is_set),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "allow_bad_quality",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__BosdynGraphNavLocalize, allow_bad_quality),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "response_bb_key",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__BosdynGraphNavLocalize, response_bb_key),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers bosdyn_msgs__msg__BosdynGraphNavLocalize__rosidl_typesupport_introspection_c__BosdynGraphNavLocalize_message_members = {
  "bosdyn_msgs__msg",  // message namespace
  "BosdynGraphNavLocalize",  // message name
  6,  // number of fields
  sizeof(bosdyn_msgs__msg__BosdynGraphNavLocalize),
  bosdyn_msgs__msg__BosdynGraphNavLocalize__rosidl_typesupport_introspection_c__BosdynGraphNavLocalize_message_member_array,  // message members
  bosdyn_msgs__msg__BosdynGraphNavLocalize__rosidl_typesupport_introspection_c__BosdynGraphNavLocalize_init_function,  // function to initialize message memory (memory has to be allocated)
  bosdyn_msgs__msg__BosdynGraphNavLocalize__rosidl_typesupport_introspection_c__BosdynGraphNavLocalize_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t bosdyn_msgs__msg__BosdynGraphNavLocalize__rosidl_typesupport_introspection_c__BosdynGraphNavLocalize_message_type_support_handle = {
  0,
  &bosdyn_msgs__msg__BosdynGraphNavLocalize__rosidl_typesupport_introspection_c__BosdynGraphNavLocalize_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_bosdyn_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bosdyn_msgs, msg, BosdynGraphNavLocalize)() {
  bosdyn_msgs__msg__BosdynGraphNavLocalize__rosidl_typesupport_introspection_c__BosdynGraphNavLocalize_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bosdyn_msgs, msg, SetLocalizationRequest)();
  if (!bosdyn_msgs__msg__BosdynGraphNavLocalize__rosidl_typesupport_introspection_c__BosdynGraphNavLocalize_message_type_support_handle.typesupport_identifier) {
    bosdyn_msgs__msg__BosdynGraphNavLocalize__rosidl_typesupport_introspection_c__BosdynGraphNavLocalize_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &bosdyn_msgs__msg__BosdynGraphNavLocalize__rosidl_typesupport_introspection_c__BosdynGraphNavLocalize_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif