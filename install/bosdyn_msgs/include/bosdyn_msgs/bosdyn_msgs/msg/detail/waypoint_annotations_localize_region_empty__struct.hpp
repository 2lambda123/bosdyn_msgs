// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bosdyn_msgs:msg/WaypointAnnotationsLocalizeRegionEmpty.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__WAYPOINT_ANNOTATIONS_LOCALIZE_REGION_EMPTY__STRUCT_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__WAYPOINT_ANNOTATIONS_LOCALIZE_REGION_EMPTY__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__bosdyn_msgs__msg__WaypointAnnotationsLocalizeRegionEmpty __attribute__((deprecated))
#else
# define DEPRECATED__bosdyn_msgs__msg__WaypointAnnotationsLocalizeRegionEmpty __declspec(deprecated)
#endif

namespace bosdyn_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct WaypointAnnotationsLocalizeRegionEmpty_
{
  using Type = WaypointAnnotationsLocalizeRegionEmpty_<ContainerAllocator>;

  explicit WaypointAnnotationsLocalizeRegionEmpty_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  explicit WaypointAnnotationsLocalizeRegionEmpty_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  // field types and members
  using _structure_needs_at_least_one_member_type =
    uint8_t;
  _structure_needs_at_least_one_member_type structure_needs_at_least_one_member;


  // constant declarations

  // pointer types
  using RawPtr =
    bosdyn_msgs::msg::WaypointAnnotationsLocalizeRegionEmpty_<ContainerAllocator> *;
  using ConstRawPtr =
    const bosdyn_msgs::msg::WaypointAnnotationsLocalizeRegionEmpty_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::WaypointAnnotationsLocalizeRegionEmpty_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::WaypointAnnotationsLocalizeRegionEmpty_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::WaypointAnnotationsLocalizeRegionEmpty_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::WaypointAnnotationsLocalizeRegionEmpty_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::WaypointAnnotationsLocalizeRegionEmpty_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::WaypointAnnotationsLocalizeRegionEmpty_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::WaypointAnnotationsLocalizeRegionEmpty_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::WaypointAnnotationsLocalizeRegionEmpty_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bosdyn_msgs__msg__WaypointAnnotationsLocalizeRegionEmpty
    std::shared_ptr<bosdyn_msgs::msg::WaypointAnnotationsLocalizeRegionEmpty_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bosdyn_msgs__msg__WaypointAnnotationsLocalizeRegionEmpty
    std::shared_ptr<bosdyn_msgs::msg::WaypointAnnotationsLocalizeRegionEmpty_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const WaypointAnnotationsLocalizeRegionEmpty_ & other) const
  {
    if (this->structure_needs_at_least_one_member != other.structure_needs_at_least_one_member) {
      return false;
    }
    return true;
  }
  bool operator!=(const WaypointAnnotationsLocalizeRegionEmpty_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct WaypointAnnotationsLocalizeRegionEmpty_

// alias to use template instance with default allocator
using WaypointAnnotationsLocalizeRegionEmpty =
  bosdyn_msgs::msg::WaypointAnnotationsLocalizeRegionEmpty_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__WAYPOINT_ANNOTATIONS_LOCALIZE_REGION_EMPTY__STRUCT_HPP_