// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bosdyn_msgs:msg/StateNodeStatesAtTickNodeStateBlackboardState.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__STATE_NODE_STATES_AT_TICK_NODE_STATE_BLACKBOARD_STATE__STRUCT_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__STATE_NODE_STATES_AT_TICK_NODE_STATE_BLACKBOARD_STATE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'variables'
#include "bosdyn_msgs/msg/detail/key_value__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__bosdyn_msgs__msg__StateNodeStatesAtTickNodeStateBlackboardState __attribute__((deprecated))
#else
# define DEPRECATED__bosdyn_msgs__msg__StateNodeStatesAtTickNodeStateBlackboardState __declspec(deprecated)
#endif

namespace bosdyn_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct StateNodeStatesAtTickNodeStateBlackboardState_
{
  using Type = StateNodeStatesAtTickNodeStateBlackboardState_<ContainerAllocator>;

  explicit StateNodeStatesAtTickNodeStateBlackboardState_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit StateNodeStatesAtTickNodeStateBlackboardState_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _variables_type =
    std::vector<bosdyn_msgs::msg::KeyValue_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<bosdyn_msgs::msg::KeyValue_<ContainerAllocator>>>;
  _variables_type variables;

  // setters for named parameter idiom
  Type & set__variables(
    const std::vector<bosdyn_msgs::msg::KeyValue_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<bosdyn_msgs::msg::KeyValue_<ContainerAllocator>>> & _arg)
  {
    this->variables = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    bosdyn_msgs::msg::StateNodeStatesAtTickNodeStateBlackboardState_<ContainerAllocator> *;
  using ConstRawPtr =
    const bosdyn_msgs::msg::StateNodeStatesAtTickNodeStateBlackboardState_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::StateNodeStatesAtTickNodeStateBlackboardState_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::StateNodeStatesAtTickNodeStateBlackboardState_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::StateNodeStatesAtTickNodeStateBlackboardState_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::StateNodeStatesAtTickNodeStateBlackboardState_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::StateNodeStatesAtTickNodeStateBlackboardState_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::StateNodeStatesAtTickNodeStateBlackboardState_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::StateNodeStatesAtTickNodeStateBlackboardState_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::StateNodeStatesAtTickNodeStateBlackboardState_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bosdyn_msgs__msg__StateNodeStatesAtTickNodeStateBlackboardState
    std::shared_ptr<bosdyn_msgs::msg::StateNodeStatesAtTickNodeStateBlackboardState_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bosdyn_msgs__msg__StateNodeStatesAtTickNodeStateBlackboardState
    std::shared_ptr<bosdyn_msgs::msg::StateNodeStatesAtTickNodeStateBlackboardState_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const StateNodeStatesAtTickNodeStateBlackboardState_ & other) const
  {
    if (this->variables != other.variables) {
      return false;
    }
    return true;
  }
  bool operator!=(const StateNodeStatesAtTickNodeStateBlackboardState_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct StateNodeStatesAtTickNodeStateBlackboardState_

// alias to use template instance with default allocator
using StateNodeStatesAtTickNodeStateBlackboardState =
  bosdyn_msgs::msg::StateNodeStatesAtTickNodeStateBlackboardState_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__STATE_NODE_STATES_AT_TICK_NODE_STATE_BLACKBOARD_STATE__STRUCT_HPP_