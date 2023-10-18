// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bosdyn_msgs:msg/ApiGraspedCarryStateOverride.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__API_GRASPED_CARRY_STATE_OVERRIDE__STRUCT_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__API_GRASPED_CARRY_STATE_OVERRIDE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'override_request'
#include "bosdyn_msgs/msg/detail/manipulator_state_carry_state__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__bosdyn_msgs__msg__ApiGraspedCarryStateOverride __attribute__((deprecated))
#else
# define DEPRECATED__bosdyn_msgs__msg__ApiGraspedCarryStateOverride __declspec(deprecated)
#endif

namespace bosdyn_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ApiGraspedCarryStateOverride_
{
  using Type = ApiGraspedCarryStateOverride_<ContainerAllocator>;

  explicit ApiGraspedCarryStateOverride_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : override_request(_init)
  {
    (void)_init;
  }

  explicit ApiGraspedCarryStateOverride_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : override_request(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _override_request_type =
    bosdyn_msgs::msg::ManipulatorStateCarryState_<ContainerAllocator>;
  _override_request_type override_request;

  // setters for named parameter idiom
  Type & set__override_request(
    const bosdyn_msgs::msg::ManipulatorStateCarryState_<ContainerAllocator> & _arg)
  {
    this->override_request = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    bosdyn_msgs::msg::ApiGraspedCarryStateOverride_<ContainerAllocator> *;
  using ConstRawPtr =
    const bosdyn_msgs::msg::ApiGraspedCarryStateOverride_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::ApiGraspedCarryStateOverride_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::ApiGraspedCarryStateOverride_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::ApiGraspedCarryStateOverride_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::ApiGraspedCarryStateOverride_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::ApiGraspedCarryStateOverride_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::ApiGraspedCarryStateOverride_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::ApiGraspedCarryStateOverride_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::ApiGraspedCarryStateOverride_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bosdyn_msgs__msg__ApiGraspedCarryStateOverride
    std::shared_ptr<bosdyn_msgs::msg::ApiGraspedCarryStateOverride_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bosdyn_msgs__msg__ApiGraspedCarryStateOverride
    std::shared_ptr<bosdyn_msgs::msg::ApiGraspedCarryStateOverride_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ApiGraspedCarryStateOverride_ & other) const
  {
    if (this->override_request != other.override_request) {
      return false;
    }
    return true;
  }
  bool operator!=(const ApiGraspedCarryStateOverride_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ApiGraspedCarryStateOverride_

// alias to use template instance with default allocator
using ApiGraspedCarryStateOverride =
  bosdyn_msgs::msg::ApiGraspedCarryStateOverride_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__API_GRASPED_CARRY_STATE_OVERRIDE__STRUCT_HPP_