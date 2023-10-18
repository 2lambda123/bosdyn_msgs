// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from bosdyn_msgs:msg/OutputImage.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "bosdyn_msgs/msg/detail/output_image__rosidl_typesupport_introspection_c.h"
#include "bosdyn_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "bosdyn_msgs/msg/detail/output_image__functions.h"
#include "bosdyn_msgs/msg/detail/output_image__struct.h"


// Include directives for member types
// Member `image_response`
#include "bosdyn_msgs/msg/image_response.h"
// Member `image_response`
#include "bosdyn_msgs/msg/detail/image_response__rosidl_typesupport_introspection_c.h"
// Member `object_in_image`
#include "bosdyn_msgs/msg/world_object.h"
// Member `object_in_image`
#include "bosdyn_msgs/msg/detail/world_object__rosidl_typesupport_introspection_c.h"
// Member `alert_data`
#include "bosdyn_msgs/msg/alert_data.h"
// Member `alert_data`
#include "bosdyn_msgs/msg/detail/alert_data__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void bosdyn_msgs__msg__OutputImage__rosidl_typesupport_introspection_c__OutputImage_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  bosdyn_msgs__msg__OutputImage__init(message_memory);
}

void bosdyn_msgs__msg__OutputImage__rosidl_typesupport_introspection_c__OutputImage_fini_function(void * message_memory)
{
  bosdyn_msgs__msg__OutputImage__fini(message_memory);
}

size_t bosdyn_msgs__msg__OutputImage__rosidl_typesupport_introspection_c__size_function__OutputImage__object_in_image(
  const void * untyped_member)
{
  const bosdyn_msgs__msg__WorldObject__Sequence * member =
    (const bosdyn_msgs__msg__WorldObject__Sequence *)(untyped_member);
  return member->size;
}

const void * bosdyn_msgs__msg__OutputImage__rosidl_typesupport_introspection_c__get_const_function__OutputImage__object_in_image(
  const void * untyped_member, size_t index)
{
  const bosdyn_msgs__msg__WorldObject__Sequence * member =
    (const bosdyn_msgs__msg__WorldObject__Sequence *)(untyped_member);
  return &member->data[index];
}

void * bosdyn_msgs__msg__OutputImage__rosidl_typesupport_introspection_c__get_function__OutputImage__object_in_image(
  void * untyped_member, size_t index)
{
  bosdyn_msgs__msg__WorldObject__Sequence * member =
    (bosdyn_msgs__msg__WorldObject__Sequence *)(untyped_member);
  return &member->data[index];
}

void bosdyn_msgs__msg__OutputImage__rosidl_typesupport_introspection_c__fetch_function__OutputImage__object_in_image(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const bosdyn_msgs__msg__WorldObject * item =
    ((const bosdyn_msgs__msg__WorldObject *)
    bosdyn_msgs__msg__OutputImage__rosidl_typesupport_introspection_c__get_const_function__OutputImage__object_in_image(untyped_member, index));
  bosdyn_msgs__msg__WorldObject * value =
    (bosdyn_msgs__msg__WorldObject *)(untyped_value);
  *value = *item;
}

void bosdyn_msgs__msg__OutputImage__rosidl_typesupport_introspection_c__assign_function__OutputImage__object_in_image(
  void * untyped_member, size_t index, const void * untyped_value)
{
  bosdyn_msgs__msg__WorldObject * item =
    ((bosdyn_msgs__msg__WorldObject *)
    bosdyn_msgs__msg__OutputImage__rosidl_typesupport_introspection_c__get_function__OutputImage__object_in_image(untyped_member, index));
  const bosdyn_msgs__msg__WorldObject * value =
    (const bosdyn_msgs__msg__WorldObject *)(untyped_value);
  *item = *value;
}

bool bosdyn_msgs__msg__OutputImage__rosidl_typesupport_introspection_c__resize_function__OutputImage__object_in_image(
  void * untyped_member, size_t size)
{
  bosdyn_msgs__msg__WorldObject__Sequence * member =
    (bosdyn_msgs__msg__WorldObject__Sequence *)(untyped_member);
  bosdyn_msgs__msg__WorldObject__Sequence__fini(member);
  return bosdyn_msgs__msg__WorldObject__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember bosdyn_msgs__msg__OutputImage__rosidl_typesupport_introspection_c__OutputImage_message_member_array[5] = {
  {
    "image_response",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__OutputImage, image_response),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "image_response_is_set",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__OutputImage, image_response_is_set),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "object_in_image",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__OutputImage, object_in_image),  // bytes offset in struct
    NULL,  // default value
    bosdyn_msgs__msg__OutputImage__rosidl_typesupport_introspection_c__size_function__OutputImage__object_in_image,  // size() function pointer
    bosdyn_msgs__msg__OutputImage__rosidl_typesupport_introspection_c__get_const_function__OutputImage__object_in_image,  // get_const(index) function pointer
    bosdyn_msgs__msg__OutputImage__rosidl_typesupport_introspection_c__get_function__OutputImage__object_in_image,  // get(index) function pointer
    bosdyn_msgs__msg__OutputImage__rosidl_typesupport_introspection_c__fetch_function__OutputImage__object_in_image,  // fetch(index, &value) function pointer
    bosdyn_msgs__msg__OutputImage__rosidl_typesupport_introspection_c__assign_function__OutputImage__object_in_image,  // assign(index, value) function pointer
    bosdyn_msgs__msg__OutputImage__rosidl_typesupport_introspection_c__resize_function__OutputImage__object_in_image  // resize(index) function pointer
  },
  {
    "alert_data",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__OutputImage, alert_data),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "alert_data_is_set",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__OutputImage, alert_data_is_set),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers bosdyn_msgs__msg__OutputImage__rosidl_typesupport_introspection_c__OutputImage_message_members = {
  "bosdyn_msgs__msg",  // message namespace
  "OutputImage",  // message name
  5,  // number of fields
  sizeof(bosdyn_msgs__msg__OutputImage),
  bosdyn_msgs__msg__OutputImage__rosidl_typesupport_introspection_c__OutputImage_message_member_array,  // message members
  bosdyn_msgs__msg__OutputImage__rosidl_typesupport_introspection_c__OutputImage_init_function,  // function to initialize message memory (memory has to be allocated)
  bosdyn_msgs__msg__OutputImage__rosidl_typesupport_introspection_c__OutputImage_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t bosdyn_msgs__msg__OutputImage__rosidl_typesupport_introspection_c__OutputImage_message_type_support_handle = {
  0,
  &bosdyn_msgs__msg__OutputImage__rosidl_typesupport_introspection_c__OutputImage_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_bosdyn_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bosdyn_msgs, msg, OutputImage)() {
  bosdyn_msgs__msg__OutputImage__rosidl_typesupport_introspection_c__OutputImage_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bosdyn_msgs, msg, ImageResponse)();
  bosdyn_msgs__msg__OutputImage__rosidl_typesupport_introspection_c__OutputImage_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bosdyn_msgs, msg, WorldObject)();
  bosdyn_msgs__msg__OutputImage__rosidl_typesupport_introspection_c__OutputImage_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bosdyn_msgs, msg, AlertData)();
  if (!bosdyn_msgs__msg__OutputImage__rosidl_typesupport_introspection_c__OutputImage_message_type_support_handle.typesupport_identifier) {
    bosdyn_msgs__msg__OutputImage__rosidl_typesupport_introspection_c__OutputImage_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &bosdyn_msgs__msg__OutputImage__rosidl_typesupport_introspection_c__OutputImage_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif