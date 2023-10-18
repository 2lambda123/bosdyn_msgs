// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bosdyn_msgs:msg/SetEstopConfigRequest.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__SET_ESTOP_CONFIG_REQUEST__STRUCT_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__SET_ESTOP_CONFIG_REQUEST__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'header'
#include "bosdyn_msgs/msg/detail/request_header__struct.hpp"
// Member 'config'
#include "bosdyn_msgs/msg/detail/estop_config__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__bosdyn_msgs__msg__SetEstopConfigRequest __attribute__((deprecated))
#else
# define DEPRECATED__bosdyn_msgs__msg__SetEstopConfigRequest __declspec(deprecated)
#endif

namespace bosdyn_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SetEstopConfigRequest_
{
  using Type = SetEstopConfigRequest_<ContainerAllocator>;

  explicit SetEstopConfigRequest_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    config(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->header_is_set = false;
      this->config_is_set = false;
      this->target_config_id = "";
    }
  }

  explicit SetEstopConfigRequest_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    config(_alloc, _init),
    target_config_id(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->header_is_set = false;
      this->config_is_set = false;
      this->target_config_id = "";
    }
  }

  // field types and members
  using _header_type =
    bosdyn_msgs::msg::RequestHeader_<ContainerAllocator>;
  _header_type header;
  using _header_is_set_type =
    bool;
  _header_is_set_type header_is_set;
  using _config_type =
    bosdyn_msgs::msg::EstopConfig_<ContainerAllocator>;
  _config_type config;
  using _config_is_set_type =
    bool;
  _config_is_set_type config_is_set;
  using _target_config_id_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _target_config_id_type target_config_id;

  // setters for named parameter idiom
  Type & set__header(
    const bosdyn_msgs::msg::RequestHeader_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__header_is_set(
    const bool & _arg)
  {
    this->header_is_set = _arg;
    return *this;
  }
  Type & set__config(
    const bosdyn_msgs::msg::EstopConfig_<ContainerAllocator> & _arg)
  {
    this->config = _arg;
    return *this;
  }
  Type & set__config_is_set(
    const bool & _arg)
  {
    this->config_is_set = _arg;
    return *this;
  }
  Type & set__target_config_id(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->target_config_id = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    bosdyn_msgs::msg::SetEstopConfigRequest_<ContainerAllocator> *;
  using ConstRawPtr =
    const bosdyn_msgs::msg::SetEstopConfigRequest_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::SetEstopConfigRequest_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::SetEstopConfigRequest_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::SetEstopConfigRequest_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::SetEstopConfigRequest_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::SetEstopConfigRequest_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::SetEstopConfigRequest_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::SetEstopConfigRequest_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::SetEstopConfigRequest_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bosdyn_msgs__msg__SetEstopConfigRequest
    std::shared_ptr<bosdyn_msgs::msg::SetEstopConfigRequest_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bosdyn_msgs__msg__SetEstopConfigRequest
    std::shared_ptr<bosdyn_msgs::msg::SetEstopConfigRequest_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SetEstopConfigRequest_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->header_is_set != other.header_is_set) {
      return false;
    }
    if (this->config != other.config) {
      return false;
    }
    if (this->config_is_set != other.config_is_set) {
      return false;
    }
    if (this->target_config_id != other.target_config_id) {
      return false;
    }
    return true;
  }
  bool operator!=(const SetEstopConfigRequest_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SetEstopConfigRequest_

// alias to use template instance with default allocator
using SetEstopConfigRequest =
  bosdyn_msgs::msg::SetEstopConfigRequest_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__SET_ESTOP_CONFIG_REQUEST__STRUCT_HPP_