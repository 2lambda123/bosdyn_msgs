// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bosdyn_msgs:msg/BosdynGraphNavState.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__BOSDYN_GRAPH_NAV_STATE__STRUCT_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__BOSDYN_GRAPH_NAV_STATE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'child'
#include "bosdyn_msgs/msg/detail/node__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__bosdyn_msgs__msg__BosdynGraphNavState __attribute__((deprecated))
#else
# define DEPRECATED__bosdyn_msgs__msg__BosdynGraphNavState __declspec(deprecated)
#endif

namespace bosdyn_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct BosdynGraphNavState_
{
  using Type = BosdynGraphNavState_<ContainerAllocator>;

  explicit BosdynGraphNavState_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : child(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->service_name = "";
      this->host = "";
      this->child_is_set = false;
      this->state_name = "";
      this->waypoint_id = "";
    }
  }

  explicit BosdynGraphNavState_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : service_name(_alloc),
    host(_alloc),
    child(_alloc, _init),
    state_name(_alloc),
    waypoint_id(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->service_name = "";
      this->host = "";
      this->child_is_set = false;
      this->state_name = "";
      this->waypoint_id = "";
    }
  }

  // field types and members
  using _service_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _service_name_type service_name;
  using _host_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _host_type host;
  using _child_type =
    bosdyn_msgs::msg::Node_<ContainerAllocator>;
  _child_type child;
  using _child_is_set_type =
    bool;
  _child_is_set_type child_is_set;
  using _state_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _state_name_type state_name;
  using _waypoint_id_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _waypoint_id_type waypoint_id;

  // setters for named parameter idiom
  Type & set__service_name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->service_name = _arg;
    return *this;
  }
  Type & set__host(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->host = _arg;
    return *this;
  }
  Type & set__child(
    const bosdyn_msgs::msg::Node_<ContainerAllocator> & _arg)
  {
    this->child = _arg;
    return *this;
  }
  Type & set__child_is_set(
    const bool & _arg)
  {
    this->child_is_set = _arg;
    return *this;
  }
  Type & set__state_name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->state_name = _arg;
    return *this;
  }
  Type & set__waypoint_id(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->waypoint_id = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    bosdyn_msgs::msg::BosdynGraphNavState_<ContainerAllocator> *;
  using ConstRawPtr =
    const bosdyn_msgs::msg::BosdynGraphNavState_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::BosdynGraphNavState_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::BosdynGraphNavState_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::BosdynGraphNavState_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::BosdynGraphNavState_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::BosdynGraphNavState_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::BosdynGraphNavState_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::BosdynGraphNavState_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::BosdynGraphNavState_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bosdyn_msgs__msg__BosdynGraphNavState
    std::shared_ptr<bosdyn_msgs::msg::BosdynGraphNavState_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bosdyn_msgs__msg__BosdynGraphNavState
    std::shared_ptr<bosdyn_msgs::msg::BosdynGraphNavState_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const BosdynGraphNavState_ & other) const
  {
    if (this->service_name != other.service_name) {
      return false;
    }
    if (this->host != other.host) {
      return false;
    }
    if (this->child != other.child) {
      return false;
    }
    if (this->child_is_set != other.child_is_set) {
      return false;
    }
    if (this->state_name != other.state_name) {
      return false;
    }
    if (this->waypoint_id != other.waypoint_id) {
      return false;
    }
    return true;
  }
  bool operator!=(const BosdynGraphNavState_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct BosdynGraphNavState_

// alias to use template instance with default allocator
using BosdynGraphNavState =
  bosdyn_msgs::msg::BosdynGraphNavState_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__BOSDYN_GRAPH_NAV_STATE__STRUCT_HPP_