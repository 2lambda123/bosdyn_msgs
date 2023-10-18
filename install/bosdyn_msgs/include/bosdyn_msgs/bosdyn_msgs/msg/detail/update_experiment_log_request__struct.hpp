// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bosdyn_msgs:msg/UpdateExperimentLogRequest.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__UPDATE_EXPERIMENT_LOG_REQUEST__STRUCT_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__UPDATE_EXPERIMENT_LOG_REQUEST__STRUCT_HPP_

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
// Member 'keep_alive'
#include "builtin_interfaces/msg/detail/duration__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__bosdyn_msgs__msg__UpdateExperimentLogRequest __attribute__((deprecated))
#else
# define DEPRECATED__bosdyn_msgs__msg__UpdateExperimentLogRequest __declspec(deprecated)
#endif

namespace bosdyn_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct UpdateExperimentLogRequest_
{
  using Type = UpdateExperimentLogRequest_<ContainerAllocator>;

  explicit UpdateExperimentLogRequest_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    keep_alive(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->header_is_set = false;
      this->keep_alive_is_set = false;
      this->id = "";
    }
  }

  explicit UpdateExperimentLogRequest_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    keep_alive(_alloc, _init),
    id(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->header_is_set = false;
      this->keep_alive_is_set = false;
      this->id = "";
    }
  }

  // field types and members
  using _header_type =
    bosdyn_msgs::msg::RequestHeader_<ContainerAllocator>;
  _header_type header;
  using _header_is_set_type =
    bool;
  _header_is_set_type header_is_set;
  using _keep_alive_type =
    builtin_interfaces::msg::Duration_<ContainerAllocator>;
  _keep_alive_type keep_alive;
  using _keep_alive_is_set_type =
    bool;
  _keep_alive_is_set_type keep_alive_is_set;
  using _id_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _id_type id;

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
  Type & set__keep_alive(
    const builtin_interfaces::msg::Duration_<ContainerAllocator> & _arg)
  {
    this->keep_alive = _arg;
    return *this;
  }
  Type & set__keep_alive_is_set(
    const bool & _arg)
  {
    this->keep_alive_is_set = _arg;
    return *this;
  }
  Type & set__id(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->id = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    bosdyn_msgs::msg::UpdateExperimentLogRequest_<ContainerAllocator> *;
  using ConstRawPtr =
    const bosdyn_msgs::msg::UpdateExperimentLogRequest_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::UpdateExperimentLogRequest_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::UpdateExperimentLogRequest_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::UpdateExperimentLogRequest_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::UpdateExperimentLogRequest_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::UpdateExperimentLogRequest_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::UpdateExperimentLogRequest_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::UpdateExperimentLogRequest_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::UpdateExperimentLogRequest_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bosdyn_msgs__msg__UpdateExperimentLogRequest
    std::shared_ptr<bosdyn_msgs::msg::UpdateExperimentLogRequest_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bosdyn_msgs__msg__UpdateExperimentLogRequest
    std::shared_ptr<bosdyn_msgs::msg::UpdateExperimentLogRequest_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const UpdateExperimentLogRequest_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->header_is_set != other.header_is_set) {
      return false;
    }
    if (this->keep_alive != other.keep_alive) {
      return false;
    }
    if (this->keep_alive_is_set != other.keep_alive_is_set) {
      return false;
    }
    if (this->id != other.id) {
      return false;
    }
    return true;
  }
  bool operator!=(const UpdateExperimentLogRequest_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct UpdateExperimentLogRequest_

// alias to use template instance with default allocator
using UpdateExperimentLogRequest =
  bosdyn_msgs::msg::UpdateExperimentLogRequest_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__UPDATE_EXPERIMENT_LOG_REQUEST__STRUCT_HPP_