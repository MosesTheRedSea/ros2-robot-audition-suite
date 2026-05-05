// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from audition_msgs:msg/CollectionStatus.idl
// generated code does not contain a copyright notice

#ifndef AUDITION_MSGS__MSG__DETAIL__COLLECTION_STATUS__STRUCT_HPP_
#define AUDITION_MSGS__MSG__DETAIL__COLLECTION_STATUS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__audition_msgs__msg__CollectionStatus __attribute__((deprecated))
#else
# define DEPRECATED__audition_msgs__msg__CollectionStatus __declspec(deprecated)
#endif

namespace audition_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct CollectionStatus_
{
  using Type = CollectionStatus_<ContainerAllocator>;

  explicit CollectionStatus_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->current_waypoint_id = 0l;
      this->current_waypoint_label = "";
      this->state = "";
      this->recording = false;
      this->total_waypoints = 0l;
      this->completed_waypoints = 0l;
    }
  }

  explicit CollectionStatus_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    current_waypoint_label(_alloc),
    state(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->current_waypoint_id = 0l;
      this->current_waypoint_label = "";
      this->state = "";
      this->recording = false;
      this->total_waypoints = 0l;
      this->completed_waypoints = 0l;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _current_waypoint_id_type =
    int32_t;
  _current_waypoint_id_type current_waypoint_id;
  using _current_waypoint_label_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _current_waypoint_label_type current_waypoint_label;
  using _state_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _state_type state;
  using _recording_type =
    bool;
  _recording_type recording;
  using _total_waypoints_type =
    int32_t;
  _total_waypoints_type total_waypoints;
  using _completed_waypoints_type =
    int32_t;
  _completed_waypoints_type completed_waypoints;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__current_waypoint_id(
    const int32_t & _arg)
  {
    this->current_waypoint_id = _arg;
    return *this;
  }
  Type & set__current_waypoint_label(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->current_waypoint_label = _arg;
    return *this;
  }
  Type & set__state(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->state = _arg;
    return *this;
  }
  Type & set__recording(
    const bool & _arg)
  {
    this->recording = _arg;
    return *this;
  }
  Type & set__total_waypoints(
    const int32_t & _arg)
  {
    this->total_waypoints = _arg;
    return *this;
  }
  Type & set__completed_waypoints(
    const int32_t & _arg)
  {
    this->completed_waypoints = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    audition_msgs::msg::CollectionStatus_<ContainerAllocator> *;
  using ConstRawPtr =
    const audition_msgs::msg::CollectionStatus_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<audition_msgs::msg::CollectionStatus_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<audition_msgs::msg::CollectionStatus_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      audition_msgs::msg::CollectionStatus_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<audition_msgs::msg::CollectionStatus_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      audition_msgs::msg::CollectionStatus_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<audition_msgs::msg::CollectionStatus_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<audition_msgs::msg::CollectionStatus_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<audition_msgs::msg::CollectionStatus_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__audition_msgs__msg__CollectionStatus
    std::shared_ptr<audition_msgs::msg::CollectionStatus_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__audition_msgs__msg__CollectionStatus
    std::shared_ptr<audition_msgs::msg::CollectionStatus_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CollectionStatus_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->current_waypoint_id != other.current_waypoint_id) {
      return false;
    }
    if (this->current_waypoint_label != other.current_waypoint_label) {
      return false;
    }
    if (this->state != other.state) {
      return false;
    }
    if (this->recording != other.recording) {
      return false;
    }
    if (this->total_waypoints != other.total_waypoints) {
      return false;
    }
    if (this->completed_waypoints != other.completed_waypoints) {
      return false;
    }
    return true;
  }
  bool operator!=(const CollectionStatus_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CollectionStatus_

// alias to use template instance with default allocator
using CollectionStatus =
  audition_msgs::msg::CollectionStatus_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace audition_msgs

#endif  // AUDITION_MSGS__MSG__DETAIL__COLLECTION_STATUS__STRUCT_HPP_
