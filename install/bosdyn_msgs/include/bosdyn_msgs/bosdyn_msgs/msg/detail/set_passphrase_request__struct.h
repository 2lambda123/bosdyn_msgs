// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from bosdyn_msgs:msg/SetPassphraseRequest.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__SET_PASSPHRASE_REQUEST__STRUCT_H_
#define BOSDYN_MSGS__MSG__DETAIL__SET_PASSPHRASE_REQUEST__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "bosdyn_msgs/msg/detail/request_header__struct.h"
// Member 'passphrase'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/SetPassphraseRequest in the package bosdyn_msgs.
/**
  * AUTOMATICALLY GENERATED BY PROTO CONVERSION
 */
typedef struct bosdyn_msgs__msg__SetPassphraseRequest
{
  /// Set encryption for the disk.
  /// Common request header.
  bosdyn_msgs__msg__RequestHeader header;
  bool header_is_set;
  /// A passphrase is a human-readable string used to generate
  /// an encryption key. An empty passphrase disables encryption.
  /// If the encryption key is set, everything new written to the drive gets encrypted. this
  /// includes
  /// 1) the sql database
  /// 2) logged data
  /// 3) audio files uploaded with the Audio service
  /// 4) probably other stuff that I haven't thought of
  /// If it's called repeatedly (with different keys), old data will
  /// still be on the disk, but unreadable, so new data will be
  /// written with the new key. the only exception is this; when
  /// encryption is off and a key is written, the sql database gets
  /// encrypted with the new key; old log and audio data remains
  /// unencrypted however.
  /// After setting the passphrase, please reboot the system to
  /// remount the encrypted filesystem layer.
  rosidl_runtime_c__String passphrase;
} bosdyn_msgs__msg__SetPassphraseRequest;

// Struct for a sequence of bosdyn_msgs__msg__SetPassphraseRequest.
typedef struct bosdyn_msgs__msg__SetPassphraseRequest__Sequence
{
  bosdyn_msgs__msg__SetPassphraseRequest * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} bosdyn_msgs__msg__SetPassphraseRequest__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // BOSDYN_MSGS__MSG__DETAIL__SET_PASSPHRASE_REQUEST__STRUCT_H_