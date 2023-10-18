// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bosdyn_msgs:msg/GetLocalGridsRequest.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__GET_LOCAL_GRIDS_REQUEST__STRUCT_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__GET_LOCAL_GRIDS_REQUEST__STRUCT_HPP_

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
// Member 'local_grid_requests'
#include "bosdyn_msgs/msg/detail/local_grid_request__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__bosdyn_msgs__msg__GetLocalGridsRequest __attribute__((deprecated))
#else
# define DEPRECATED__bosdyn_msgs__msg__GetLocalGridsRequest __declspec(deprecated)
#endif

namespace bosdyn_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct GetLocalGridsRequest_
{
  using Type = GetLocalGridsRequest_<ContainerAllocator>;

  explicit GetLocalGridsRequest_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->header_is_set = false;
    }
  }

  explicit GetLocalGridsRequest_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    bosdyn_msgs::msg::RequestHeader_<ContainerAllocator>;
  _header_type header;
  using _header_is_set_type =
    bool;
  _header_is_set_type header_is_set;
  using _local_grid_requests_type =
    std::vector<bosdyn_msgs::msg::LocalGridRequest_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<bosdyn_msgs::msg::LocalGridRequest_<ContainerAllocator>>>;
  _local_grid_requests_type local_grid_requests;

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
  Type & set__local_grid_requests(
    const std::vector<bosdyn_msgs::msg::LocalGridRequest_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<bosdyn_msgs::msg::LocalGridRequest_<ContainerAllocator>>> & _arg)
  {
    this->local_grid_requests = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    bosdyn_msgs::msg::GetLocalGridsRequest_<ContainerAllocator> *;
  using ConstRawPtr =
    const bosdyn_msgs::msg::GetLocalGridsRequest_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::GetLocalGridsRequest_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::GetLocalGridsRequest_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::GetLocalGridsRequest_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::GetLocalGridsRequest_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::GetLocalGridsRequest_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::GetLocalGridsRequest_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::GetLocalGridsRequest_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::GetLocalGridsRequest_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bosdyn_msgs__msg__GetLocalGridsRequest
    std::shared_ptr<bosdyn_msgs::msg::GetLocalGridsRequest_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bosdyn_msgs__msg__GetLocalGridsRequest
    std::shared_ptr<bosdyn_msgs::msg::GetLocalGridsRequest_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetLocalGridsRequest_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->header_is_set != other.header_is_set) {
      return false;
    }
    if (this->local_grid_requests != other.local_grid_requests) {
      return false;
    }
    return true;
  }
  bool operator!=(const GetLocalGridsRequest_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetLocalGridsRequest_

// alias to use template instance with default allocator
using GetLocalGridsRequest =
  bosdyn_msgs::msg::GetLocalGridsRequest_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__GET_LOCAL_GRIDS_REQUEST__STRUCT_HPP_