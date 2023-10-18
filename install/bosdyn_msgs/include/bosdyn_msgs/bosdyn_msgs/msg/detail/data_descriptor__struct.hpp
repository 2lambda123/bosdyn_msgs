// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bosdyn_msgs:msg/DataDescriptor.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__DATA_DESCRIPTOR__STRUCT_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__DATA_DESCRIPTOR__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'timestamp'
#include "builtin_interfaces/msg/detail/time__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__bosdyn_msgs__msg__DataDescriptor __attribute__((deprecated))
#else
# define DEPRECATED__bosdyn_msgs__msg__DataDescriptor __declspec(deprecated)
#endif

namespace bosdyn_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct DataDescriptor_
{
  using Type = DataDescriptor_<ContainerAllocator>;

  explicit DataDescriptor_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : timestamp(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->series_index = 0ul;
      this->timestamp_is_set = false;
    }
  }

  explicit DataDescriptor_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : timestamp(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->series_index = 0ul;
      this->timestamp_is_set = false;
    }
  }

  // field types and members
  using _series_index_type =
    uint32_t;
  _series_index_type series_index;
  using _timestamp_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _timestamp_type timestamp;
  using _timestamp_is_set_type =
    bool;
  _timestamp_is_set_type timestamp_is_set;
  using _additional_indexes_type =
    std::vector<int64_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int64_t>>;
  _additional_indexes_type additional_indexes;

  // setters for named parameter idiom
  Type & set__series_index(
    const uint32_t & _arg)
  {
    this->series_index = _arg;
    return *this;
  }
  Type & set__timestamp(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->timestamp = _arg;
    return *this;
  }
  Type & set__timestamp_is_set(
    const bool & _arg)
  {
    this->timestamp_is_set = _arg;
    return *this;
  }
  Type & set__additional_indexes(
    const std::vector<int64_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int64_t>> & _arg)
  {
    this->additional_indexes = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    bosdyn_msgs::msg::DataDescriptor_<ContainerAllocator> *;
  using ConstRawPtr =
    const bosdyn_msgs::msg::DataDescriptor_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::DataDescriptor_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::DataDescriptor_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::DataDescriptor_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::DataDescriptor_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::DataDescriptor_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::DataDescriptor_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::DataDescriptor_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::DataDescriptor_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bosdyn_msgs__msg__DataDescriptor
    std::shared_ptr<bosdyn_msgs::msg::DataDescriptor_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bosdyn_msgs__msg__DataDescriptor
    std::shared_ptr<bosdyn_msgs::msg::DataDescriptor_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const DataDescriptor_ & other) const
  {
    if (this->series_index != other.series_index) {
      return false;
    }
    if (this->timestamp != other.timestamp) {
      return false;
    }
    if (this->timestamp_is_set != other.timestamp_is_set) {
      return false;
    }
    if (this->additional_indexes != other.additional_indexes) {
      return false;
    }
    return true;
  }
  bool operator!=(const DataDescriptor_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct DataDescriptor_

// alias to use template instance with default allocator
using DataDescriptor =
  bosdyn_msgs::msg::DataDescriptor_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__DATA_DESCRIPTOR__STRUCT_HPP_