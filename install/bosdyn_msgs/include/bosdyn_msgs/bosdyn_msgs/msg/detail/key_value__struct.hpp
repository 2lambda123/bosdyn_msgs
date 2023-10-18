// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bosdyn_msgs:msg/KeyValue.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__KEY_VALUE__STRUCT_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__KEY_VALUE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'value'
#include "bosdyn_msgs/msg/detail/value__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__bosdyn_msgs__msg__KeyValue __attribute__((deprecated))
#else
# define DEPRECATED__bosdyn_msgs__msg__KeyValue __declspec(deprecated)
#endif

namespace bosdyn_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct KeyValue_
{
  using Type = KeyValue_<ContainerAllocator>;

  explicit KeyValue_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : value(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->key = "";
      this->value_is_set = false;
    }
  }

  explicit KeyValue_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : key(_alloc),
    value(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->key = "";
      this->value_is_set = false;
    }
  }

  // field types and members
  using _key_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _key_type key;
  using _value_type =
    bosdyn_msgs::msg::Value_<ContainerAllocator>;
  _value_type value;
  using _value_is_set_type =
    bool;
  _value_is_set_type value_is_set;

  // setters for named parameter idiom
  Type & set__key(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->key = _arg;
    return *this;
  }
  Type & set__value(
    const bosdyn_msgs::msg::Value_<ContainerAllocator> & _arg)
  {
    this->value = _arg;
    return *this;
  }
  Type & set__value_is_set(
    const bool & _arg)
  {
    this->value_is_set = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    bosdyn_msgs::msg::KeyValue_<ContainerAllocator> *;
  using ConstRawPtr =
    const bosdyn_msgs::msg::KeyValue_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::KeyValue_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::KeyValue_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::KeyValue_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::KeyValue_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::KeyValue_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::KeyValue_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::KeyValue_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::KeyValue_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bosdyn_msgs__msg__KeyValue
    std::shared_ptr<bosdyn_msgs::msg::KeyValue_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bosdyn_msgs__msg__KeyValue
    std::shared_ptr<bosdyn_msgs::msg::KeyValue_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const KeyValue_ & other) const
  {
    if (this->key != other.key) {
      return false;
    }
    if (this->value != other.value) {
      return false;
    }
    if (this->value_is_set != other.value_is_set) {
      return false;
    }
    return true;
  }
  bool operator!=(const KeyValue_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct KeyValue_

// alias to use template instance with default allocator
using KeyValue =
  bosdyn_msgs::msg::KeyValue_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__KEY_VALUE__STRUCT_HPP_