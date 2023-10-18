// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from bosdyn_msgs:msg/ArmSurfaceContactRequestAdmittanceSetting.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__ARM_SURFACE_CONTACT_REQUEST_ADMITTANCE_SETTING__STRUCT_H_
#define BOSDYN_MSGS__MSG__DETAIL__ARM_SURFACE_CONTACT_REQUEST_ADMITTANCE_SETTING__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'ADMITTANCE_SETTING_UNKNOWN'.
enum
{
  bosdyn_msgs__msg__ArmSurfaceContactRequestAdmittanceSetting__ADMITTANCE_SETTING_UNKNOWN = 0
};

/// Constant 'ADMITTANCE_SETTING_OFF'.
/**
  * No admittance.
 */
enum
{
  bosdyn_msgs__msg__ArmSurfaceContactRequestAdmittanceSetting__ADMITTANCE_SETTING_OFF = 1
};

/// Constant 'ADMITTANCE_SETTING_NORMAL'.
/**
  * Normal reaction to touching things in the world
 */
enum
{
  bosdyn_msgs__msg__ArmSurfaceContactRequestAdmittanceSetting__ADMITTANCE_SETTING_NORMAL = 2
};

/// Constant 'ADMITTANCE_SETTING_LOOSE'.
/**
  * Robot will not push very hard against objects
 */
enum
{
  bosdyn_msgs__msg__ArmSurfaceContactRequestAdmittanceSetting__ADMITTANCE_SETTING_LOOSE = 3
};

/// Constant 'ADMITTANCE_SETTING_STIFF'.
/**
  * Robot will push hard against the world
 */
enum
{
  bosdyn_msgs__msg__ArmSurfaceContactRequestAdmittanceSetting__ADMITTANCE_SETTING_STIFF = 4
};

/// Constant 'ADMITTANCE_SETTING_VERY_STIFF'.
/**
  * Robot will push very hard against the world
 */
enum
{
  bosdyn_msgs__msg__ArmSurfaceContactRequestAdmittanceSetting__ADMITTANCE_SETTING_VERY_STIFF = 5
};

/// Struct defined in msg/ArmSurfaceContactRequestAdmittanceSetting in the package bosdyn_msgs.
/**
  * AUTOMATICALLY GENERATED BY PROTO CONVERSION
 */
typedef struct bosdyn_msgs__msg__ArmSurfaceContactRequestAdmittanceSetting
{
  int8_t value;
} bosdyn_msgs__msg__ArmSurfaceContactRequestAdmittanceSetting;

// Struct for a sequence of bosdyn_msgs__msg__ArmSurfaceContactRequestAdmittanceSetting.
typedef struct bosdyn_msgs__msg__ArmSurfaceContactRequestAdmittanceSetting__Sequence
{
  bosdyn_msgs__msg__ArmSurfaceContactRequestAdmittanceSetting * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} bosdyn_msgs__msg__ArmSurfaceContactRequestAdmittanceSetting__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // BOSDYN_MSGS__MSG__DETAIL__ARM_SURFACE_CONTACT_REQUEST_ADMITTANCE_SETTING__STRUCT_H_