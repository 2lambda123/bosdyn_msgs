// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bosdyn_msgs:msg/ListScreensResponse.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__LIST_SCREENS_RESPONSE__STRUCT_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__LIST_SCREENS_RESPONSE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'header'
#include "bosdyn_msgs/msg/detail/response_header__struct.hpp"
// Member 'screens'
#include "bosdyn_msgs/msg/detail/screen_description__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__bosdyn_msgs__msg__ListScreensResponse __attribute__((deprecated))
#else
# define DEPRECATED__bosdyn_msgs__msg__ListScreensResponse __declspec(deprecated)
#endif

namespace bosdyn_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ListScreensResponse_
{
  using Type = ListScreensResponse_<ContainerAllocator>;

  explicit ListScreensResponse_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->header_is_set = false;
    }
  }

  explicit ListScreensResponse_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->header_is_set = false;
    }
  }

  // field types and members
  using _header_type =
    bosdyn_msgs::msg::ResponseHeader_<ContainerAllocator>;
  _header_type header;
  using _header_is_set_type =
    bool;
  _header_is_set_type header_is_set;
  using _screens_type =
    std::vector<bosdyn_msgs::msg::ScreenDescription_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<bosdyn_msgs::msg::ScreenDescription_<ContainerAllocator>>>;
  _screens_type screens;

  // setters for named parameter idiom
  Type & set__header(
    const bosdyn_msgs::msg::ResponseHeader_<ContainerAllocator> & _arg)
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
  Type & set__screens(
    const std::vector<bosdyn_msgs::msg::ScreenDescription_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<bosdyn_msgs::msg::ScreenDescription_<ContainerAllocator>>> & _arg)
  {
    this->screens = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    bosdyn_msgs::msg::ListScreensResponse_<ContainerAllocator> *;
  using ConstRawPtr =
    const bosdyn_msgs::msg::ListScreensResponse_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::ListScreensResponse_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::ListScreensResponse_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::ListScreensResponse_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::ListScreensResponse_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::ListScreensResponse_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::ListScreensResponse_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::ListScreensResponse_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::ListScreensResponse_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bosdyn_msgs__msg__ListScreensResponse
    std::shared_ptr<bosdyn_msgs::msg::ListScreensResponse_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bosdyn_msgs__msg__ListScreensResponse
    std::shared_ptr<bosdyn_msgs::msg::ListScreensResponse_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ListScreensResponse_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->header_is_set != other.header_is_set) {
      return false;
    }
    if (this->screens != other.screens) {
      return false;
    }
    return true;
  }
  bool operator!=(const ListScreensResponse_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ListScreensResponse_

// alias to use template instance with default allocator
using ListScreensResponse =
  bosdyn_msgs::msg::ListScreensResponse_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__LIST_SCREENS_RESPONSE__STRUCT_HPP_