// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bosdyn_msgs:msg/ArmDragCommandFeedback.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__ARM_DRAG_COMMAND_FEEDBACK__STRUCT_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__ARM_DRAG_COMMAND_FEEDBACK__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'status'
#include "bosdyn_msgs/msg/detail/arm_drag_command_feedback_status__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__bosdyn_msgs__msg__ArmDragCommandFeedback __attribute__((deprecated))
#else
# define DEPRECATED__bosdyn_msgs__msg__ArmDragCommandFeedback __declspec(deprecated)
#endif

namespace bosdyn_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ArmDragCommandFeedback_
{
  using Type = ArmDragCommandFeedback_<ContainerAllocator>;

  explicit ArmDragCommandFeedback_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : status(_init)
  {
    (void)_init;
  }

  explicit ArmDragCommandFeedback_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : status(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _status_type =
    bosdyn_msgs::msg::ArmDragCommandFeedbackStatus_<ContainerAllocator>;
  _status_type status;

  // setters for named parameter idiom
  Type & set__status(
    const bosdyn_msgs::msg::ArmDragCommandFeedbackStatus_<ContainerAllocator> & _arg)
  {
    this->status = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    bosdyn_msgs::msg::ArmDragCommandFeedback_<ContainerAllocator> *;
  using ConstRawPtr =
    const bosdyn_msgs::msg::ArmDragCommandFeedback_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::ArmDragCommandFeedback_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::ArmDragCommandFeedback_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::ArmDragCommandFeedback_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::ArmDragCommandFeedback_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::ArmDragCommandFeedback_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::ArmDragCommandFeedback_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::ArmDragCommandFeedback_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::ArmDragCommandFeedback_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bosdyn_msgs__msg__ArmDragCommandFeedback
    std::shared_ptr<bosdyn_msgs::msg::ArmDragCommandFeedback_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bosdyn_msgs__msg__ArmDragCommandFeedback
    std::shared_ptr<bosdyn_msgs::msg::ArmDragCommandFeedback_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ArmDragCommandFeedback_ & other) const
  {
    if (this->status != other.status) {
      return false;
    }
    return true;
  }
  bool operator!=(const ArmDragCommandFeedback_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ArmDragCommandFeedback_

// alias to use template instance with default allocator
using ArmDragCommandFeedback =
  bosdyn_msgs::msg::ArmDragCommandFeedback_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__ARM_DRAG_COMMAND_FEEDBACK__STRUCT_HPP_