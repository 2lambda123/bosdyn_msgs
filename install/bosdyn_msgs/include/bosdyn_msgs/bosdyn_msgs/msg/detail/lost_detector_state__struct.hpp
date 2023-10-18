// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bosdyn_msgs:msg/LostDetectorState.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__LOST_DETECTOR_STATE__STRUCT_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__LOST_DETECTOR_STATE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__bosdyn_msgs__msg__LostDetectorState __attribute__((deprecated))
#else
# define DEPRECATED__bosdyn_msgs__msg__LostDetectorState __declspec(deprecated)
#endif

namespace bosdyn_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct LostDetectorState_
{
  using Type = LostDetectorState_<ContainerAllocator>;

  explicit LostDetectorState_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->is_lost = false;
    }
  }

  explicit LostDetectorState_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->is_lost = false;
    }
  }

  // field types and members
  using _is_lost_type =
    bool;
  _is_lost_type is_lost;

  // setters for named parameter idiom
  Type & set__is_lost(
    const bool & _arg)
  {
    this->is_lost = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    bosdyn_msgs::msg::LostDetectorState_<ContainerAllocator> *;
  using ConstRawPtr =
    const bosdyn_msgs::msg::LostDetectorState_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::LostDetectorState_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::LostDetectorState_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::LostDetectorState_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::LostDetectorState_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::LostDetectorState_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::LostDetectorState_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::LostDetectorState_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::LostDetectorState_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bosdyn_msgs__msg__LostDetectorState
    std::shared_ptr<bosdyn_msgs::msg::LostDetectorState_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bosdyn_msgs__msg__LostDetectorState
    std::shared_ptr<bosdyn_msgs::msg::LostDetectorState_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const LostDetectorState_ & other) const
  {
    if (this->is_lost != other.is_lost) {
      return false;
    }
    return true;
  }
  bool operator!=(const LostDetectorState_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct LostDetectorState_

// alias to use template instance with default allocator
using LostDetectorState =
  bosdyn_msgs::msg::LostDetectorState_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__LOST_DETECTOR_STATE__STRUCT_HPP_