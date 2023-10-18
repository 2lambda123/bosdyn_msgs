// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bosdyn_msgs:msg/StartRecordingRequest.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__START_RECORDING_REQUEST__STRUCT_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__START_RECORDING_REQUEST__STRUCT_HPP_

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
// Member 'lease'
#include "bosdyn_msgs/msg/detail/lease__struct.hpp"
// Member 'recording_environment'
#include "bosdyn_msgs/msg/detail/recording_environment__struct.hpp"
// Member 'session_start_time'
#include "builtin_interfaces/msg/detail/time__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__bosdyn_msgs__msg__StartRecordingRequest __attribute__((deprecated))
#else
# define DEPRECATED__bosdyn_msgs__msg__StartRecordingRequest __declspec(deprecated)
#endif

namespace bosdyn_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct StartRecordingRequest_
{
  using Type = StartRecordingRequest_<ContainerAllocator>;

  explicit StartRecordingRequest_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    lease(_init),
    recording_environment(_init),
    session_start_time(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->header_is_set = false;
      this->lease_is_set = false;
      this->recording_environment_is_set = false;
      this->session_start_time_is_set = false;
    }
  }

  explicit StartRecordingRequest_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    lease(_alloc, _init),
    recording_environment(_alloc, _init),
    session_start_time(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->header_is_set = false;
      this->lease_is_set = false;
      this->recording_environment_is_set = false;
      this->session_start_time_is_set = false;
    }
  }

  // field types and members
  using _header_type =
    bosdyn_msgs::msg::RequestHeader_<ContainerAllocator>;
  _header_type header;
  using _header_is_set_type =
    bool;
  _header_is_set_type header_is_set;
  using _lease_type =
    bosdyn_msgs::msg::Lease_<ContainerAllocator>;
  _lease_type lease;
  using _lease_is_set_type =
    bool;
  _lease_is_set_type lease_is_set;
  using _recording_environment_type =
    bosdyn_msgs::msg::RecordingEnvironment_<ContainerAllocator>;
  _recording_environment_type recording_environment;
  using _recording_environment_is_set_type =
    bool;
  _recording_environment_is_set_type recording_environment_is_set;
  using _require_fiducials_type =
    std::vector<int32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int32_t>>;
  _require_fiducials_type require_fiducials;
  using _session_start_time_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _session_start_time_type session_start_time;
  using _session_start_time_is_set_type =
    bool;
  _session_start_time_is_set_type session_start_time_is_set;

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
  Type & set__lease(
    const bosdyn_msgs::msg::Lease_<ContainerAllocator> & _arg)
  {
    this->lease = _arg;
    return *this;
  }
  Type & set__lease_is_set(
    const bool & _arg)
  {
    this->lease_is_set = _arg;
    return *this;
  }
  Type & set__recording_environment(
    const bosdyn_msgs::msg::RecordingEnvironment_<ContainerAllocator> & _arg)
  {
    this->recording_environment = _arg;
    return *this;
  }
  Type & set__recording_environment_is_set(
    const bool & _arg)
  {
    this->recording_environment_is_set = _arg;
    return *this;
  }
  Type & set__require_fiducials(
    const std::vector<int32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int32_t>> & _arg)
  {
    this->require_fiducials = _arg;
    return *this;
  }
  Type & set__session_start_time(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->session_start_time = _arg;
    return *this;
  }
  Type & set__session_start_time_is_set(
    const bool & _arg)
  {
    this->session_start_time_is_set = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    bosdyn_msgs::msg::StartRecordingRequest_<ContainerAllocator> *;
  using ConstRawPtr =
    const bosdyn_msgs::msg::StartRecordingRequest_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::StartRecordingRequest_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::StartRecordingRequest_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::StartRecordingRequest_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::StartRecordingRequest_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::StartRecordingRequest_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::StartRecordingRequest_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::StartRecordingRequest_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::StartRecordingRequest_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bosdyn_msgs__msg__StartRecordingRequest
    std::shared_ptr<bosdyn_msgs::msg::StartRecordingRequest_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bosdyn_msgs__msg__StartRecordingRequest
    std::shared_ptr<bosdyn_msgs::msg::StartRecordingRequest_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const StartRecordingRequest_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->header_is_set != other.header_is_set) {
      return false;
    }
    if (this->lease != other.lease) {
      return false;
    }
    if (this->lease_is_set != other.lease_is_set) {
      return false;
    }
    if (this->recording_environment != other.recording_environment) {
      return false;
    }
    if (this->recording_environment_is_set != other.recording_environment_is_set) {
      return false;
    }
    if (this->require_fiducials != other.require_fiducials) {
      return false;
    }
    if (this->session_start_time != other.session_start_time) {
      return false;
    }
    if (this->session_start_time_is_set != other.session_start_time_is_set) {
      return false;
    }
    return true;
  }
  bool operator!=(const StartRecordingRequest_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct StartRecordingRequest_

// alias to use template instance with default allocator
using StartRecordingRequest =
  bosdyn_msgs::msg::StartRecordingRequest_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__START_RECORDING_REQUEST__STRUCT_HPP_