// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bosdyn_msgs:msg/ArmCommandRequest.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__ARM_COMMAND_REQUEST__STRUCT_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__ARM_COMMAND_REQUEST__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'command'
#include "bosdyn_msgs/msg/detail/arm_command_request_one_of_command__struct.hpp"
// Member 'params'
#include "bosdyn_msgs/msg/detail/arm_params__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__bosdyn_msgs__msg__ArmCommandRequest __attribute__((deprecated))
#else
# define DEPRECATED__bosdyn_msgs__msg__ArmCommandRequest __declspec(deprecated)
#endif

namespace bosdyn_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ArmCommandRequest_
{
  using Type = ArmCommandRequest_<ContainerAllocator>;

  explicit ArmCommandRequest_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : command(_init),
    params(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->params_is_set = false;
    }
  }

  explicit ArmCommandRequest_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : command(_alloc, _init),
    params(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->params_is_set = false;
    }
  }

  // field types and members
  using _command_type =
    bosdyn_msgs::msg::ArmCommandRequestOneOfCommand_<ContainerAllocator>;
  _command_type command;
  using _params_type =
    bosdyn_msgs::msg::ArmParams_<ContainerAllocator>;
  _params_type params;
  using _params_is_set_type =
    bool;
  _params_is_set_type params_is_set;

  // setters for named parameter idiom
  Type & set__command(
    const bosdyn_msgs::msg::ArmCommandRequestOneOfCommand_<ContainerAllocator> & _arg)
  {
    this->command = _arg;
    return *this;
  }
  Type & set__params(
    const bosdyn_msgs::msg::ArmParams_<ContainerAllocator> & _arg)
  {
    this->params = _arg;
    return *this;
  }
  Type & set__params_is_set(
    const bool & _arg)
  {
    this->params_is_set = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    bosdyn_msgs::msg::ArmCommandRequest_<ContainerAllocator> *;
  using ConstRawPtr =
    const bosdyn_msgs::msg::ArmCommandRequest_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::ArmCommandRequest_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::ArmCommandRequest_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::ArmCommandRequest_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::ArmCommandRequest_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::ArmCommandRequest_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::ArmCommandRequest_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::ArmCommandRequest_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::ArmCommandRequest_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bosdyn_msgs__msg__ArmCommandRequest
    std::shared_ptr<bosdyn_msgs::msg::ArmCommandRequest_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bosdyn_msgs__msg__ArmCommandRequest
    std::shared_ptr<bosdyn_msgs::msg::ArmCommandRequest_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ArmCommandRequest_ & other) const
  {
    if (this->command != other.command) {
      return false;
    }
    if (this->params != other.params) {
      return false;
    }
    if (this->params_is_set != other.params_is_set) {
      return false;
    }
    return true;
  }
  bool operator!=(const ArmCommandRequest_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ArmCommandRequest_

// alias to use template instance with default allocator
using ArmCommandRequest =
  bosdyn_msgs::msg::ArmCommandRequest_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__ARM_COMMAND_REQUEST__STRUCT_HPP_