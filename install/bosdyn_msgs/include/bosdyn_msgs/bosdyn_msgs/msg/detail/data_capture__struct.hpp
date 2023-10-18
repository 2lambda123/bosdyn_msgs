// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bosdyn_msgs:msg/DataCapture.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__DATA_CAPTURE__STRUCT_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__DATA_CAPTURE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'custom_params'
#include "bosdyn_msgs/msg/detail/dict_param__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__bosdyn_msgs__msg__DataCapture __attribute__((deprecated))
#else
# define DEPRECATED__bosdyn_msgs__msg__DataCapture __declspec(deprecated)
#endif

namespace bosdyn_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct DataCapture_
{
  using Type = DataCapture_<ContainerAllocator>;

  explicit DataCapture_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : custom_params(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->name = "";
      this->custom_params_is_set = false;
    }
  }

  explicit DataCapture_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : name(_alloc),
    custom_params(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->name = "";
      this->custom_params_is_set = false;
    }
  }

  // field types and members
  using _name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _name_type name;
  using _custom_params_type =
    bosdyn_msgs::msg::DictParam_<ContainerAllocator>;
  _custom_params_type custom_params;
  using _custom_params_is_set_type =
    bool;
  _custom_params_is_set_type custom_params_is_set;

  // setters for named parameter idiom
  Type & set__name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->name = _arg;
    return *this;
  }
  Type & set__custom_params(
    const bosdyn_msgs::msg::DictParam_<ContainerAllocator> & _arg)
  {
    this->custom_params = _arg;
    return *this;
  }
  Type & set__custom_params_is_set(
    const bool & _arg)
  {
    this->custom_params_is_set = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    bosdyn_msgs::msg::DataCapture_<ContainerAllocator> *;
  using ConstRawPtr =
    const bosdyn_msgs::msg::DataCapture_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::DataCapture_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::DataCapture_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::DataCapture_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::DataCapture_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::DataCapture_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::DataCapture_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::DataCapture_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::DataCapture_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bosdyn_msgs__msg__DataCapture
    std::shared_ptr<bosdyn_msgs::msg::DataCapture_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bosdyn_msgs__msg__DataCapture
    std::shared_ptr<bosdyn_msgs::msg::DataCapture_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const DataCapture_ & other) const
  {
    if (this->name != other.name) {
      return false;
    }
    if (this->custom_params != other.custom_params) {
      return false;
    }
    if (this->custom_params_is_set != other.custom_params_is_set) {
      return false;
    }
    return true;
  }
  bool operator!=(const DataCapture_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct DataCapture_

// alias to use template instance with default allocator
using DataCapture =
  bosdyn_msgs::msg::DataCapture_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__DATA_CAPTURE__STRUCT_HPP_