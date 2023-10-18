// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bosdyn_msgs:msg/ProcessAnchoringResponseStatus.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__PROCESS_ANCHORING_RESPONSE_STATUS__STRUCT_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__PROCESS_ANCHORING_RESPONSE_STATUS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__bosdyn_msgs__msg__ProcessAnchoringResponseStatus __attribute__((deprecated))
#else
# define DEPRECATED__bosdyn_msgs__msg__ProcessAnchoringResponseStatus __declspec(deprecated)
#endif

namespace bosdyn_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ProcessAnchoringResponseStatus_
{
  using Type = ProcessAnchoringResponseStatus_<ContainerAllocator>;

  explicit ProcessAnchoringResponseStatus_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->value = 0;
    }
  }

  explicit ProcessAnchoringResponseStatus_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->value = 0;
    }
  }

  // field types and members
  using _value_type =
    int8_t;
  _value_type value;

  // setters for named parameter idiom
  Type & set__value(
    const int8_t & _arg)
  {
    this->value = _arg;
    return *this;
  }

  // constant declarations
  static constexpr int8_t STATUS_UNKNOWN =
    0;
  static constexpr int8_t STATUS_OK =
    1;
  static constexpr int8_t STATUS_MISSING_WAYPOINT_SNAPSHOTS =
    2;
  static constexpr int8_t STATUS_INVALID_GRAPH =
    3;
  static constexpr int8_t STATUS_OPTIMIZATION_FAILURE =
    4;
  static constexpr int8_t STATUS_INVALID_PARAMS =
    5;
  static constexpr int8_t STATUS_CONSTRAINT_VIOLATION =
    6;
  static constexpr int8_t STATUS_MAX_ITERATIONS =
    7;
  static constexpr int8_t STATUS_MAX_TIME =
    8;
  static constexpr int8_t STATUS_INVALID_HINTS =
    9;
  static constexpr int8_t STATUS_MAP_MODIFIED_DURING_PROCESSING =
    10;
  static constexpr int8_t STATUS_INVALID_GRAVITY_ALIGNMENT =
    11;

  // pointer types
  using RawPtr =
    bosdyn_msgs::msg::ProcessAnchoringResponseStatus_<ContainerAllocator> *;
  using ConstRawPtr =
    const bosdyn_msgs::msg::ProcessAnchoringResponseStatus_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::ProcessAnchoringResponseStatus_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::ProcessAnchoringResponseStatus_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::ProcessAnchoringResponseStatus_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::ProcessAnchoringResponseStatus_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::ProcessAnchoringResponseStatus_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::ProcessAnchoringResponseStatus_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::ProcessAnchoringResponseStatus_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::ProcessAnchoringResponseStatus_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bosdyn_msgs__msg__ProcessAnchoringResponseStatus
    std::shared_ptr<bosdyn_msgs::msg::ProcessAnchoringResponseStatus_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bosdyn_msgs__msg__ProcessAnchoringResponseStatus
    std::shared_ptr<bosdyn_msgs::msg::ProcessAnchoringResponseStatus_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ProcessAnchoringResponseStatus_ & other) const
  {
    if (this->value != other.value) {
      return false;
    }
    return true;
  }
  bool operator!=(const ProcessAnchoringResponseStatus_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ProcessAnchoringResponseStatus_

// alias to use template instance with default allocator
using ProcessAnchoringResponseStatus =
  bosdyn_msgs::msg::ProcessAnchoringResponseStatus_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t ProcessAnchoringResponseStatus_<ContainerAllocator>::STATUS_UNKNOWN;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t ProcessAnchoringResponseStatus_<ContainerAllocator>::STATUS_OK;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t ProcessAnchoringResponseStatus_<ContainerAllocator>::STATUS_MISSING_WAYPOINT_SNAPSHOTS;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t ProcessAnchoringResponseStatus_<ContainerAllocator>::STATUS_INVALID_GRAPH;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t ProcessAnchoringResponseStatus_<ContainerAllocator>::STATUS_OPTIMIZATION_FAILURE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t ProcessAnchoringResponseStatus_<ContainerAllocator>::STATUS_INVALID_PARAMS;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t ProcessAnchoringResponseStatus_<ContainerAllocator>::STATUS_CONSTRAINT_VIOLATION;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t ProcessAnchoringResponseStatus_<ContainerAllocator>::STATUS_MAX_ITERATIONS;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t ProcessAnchoringResponseStatus_<ContainerAllocator>::STATUS_MAX_TIME;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t ProcessAnchoringResponseStatus_<ContainerAllocator>::STATUS_INVALID_HINTS;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t ProcessAnchoringResponseStatus_<ContainerAllocator>::STATUS_MAP_MODIFIED_DURING_PROCESSING;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t ProcessAnchoringResponseStatus_<ContainerAllocator>::STATUS_INVALID_GRAVITY_ALIGNMENT;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__PROCESS_ANCHORING_RESPONSE_STATUS__STRUCT_HPP_