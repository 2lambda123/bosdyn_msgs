// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from bosdyn_msgs:msg/FrameTreeSnapshotParentEdge.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__FRAME_TREE_SNAPSHOT_PARENT_EDGE__STRUCT_H_
#define BOSDYN_MSGS__MSG__DETAIL__FRAME_TREE_SNAPSHOT_PARENT_EDGE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'parent_frame_name'
#include "rosidl_runtime_c/string.h"
// Member 'parent_tform_child'
#include "geometry_msgs/msg/detail/pose__struct.h"

/// Struct defined in msg/FrameTreeSnapshotParentEdge in the package bosdyn_msgs.
/**
  * AUTOMATICALLY GENERATED BY PROTO CONVERSION
 */
typedef struct bosdyn_msgs__msg__FrameTreeSnapshotParentEdge
{
  /// The name of the parent frame. If a frame has no parent (parent_frame_name is empty),
  /// it is the root of the tree.
  rosidl_runtime_c__String parent_frame_name;
  /// Transform representing the pose of the child frame in the parent's frame.
  geometry_msgs__msg__Pose parent_tform_child;
  bool parent_tform_child_is_set;
} bosdyn_msgs__msg__FrameTreeSnapshotParentEdge;

// Struct for a sequence of bosdyn_msgs__msg__FrameTreeSnapshotParentEdge.
typedef struct bosdyn_msgs__msg__FrameTreeSnapshotParentEdge__Sequence
{
  bosdyn_msgs__msg__FrameTreeSnapshotParentEdge * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} bosdyn_msgs__msg__FrameTreeSnapshotParentEdge__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // BOSDYN_MSGS__MSG__DETAIL__FRAME_TREE_SNAPSHOT_PARENT_EDGE__STRUCT_H_