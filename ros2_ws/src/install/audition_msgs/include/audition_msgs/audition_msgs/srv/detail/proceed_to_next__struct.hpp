// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from audition_msgs:srv/ProceedToNext.idl
// generated code does not contain a copyright notice

#ifndef AUDITION_MSGS__SRV__DETAIL__PROCEED_TO_NEXT__STRUCT_HPP_
#define AUDITION_MSGS__SRV__DETAIL__PROCEED_TO_NEXT__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__audition_msgs__srv__ProceedToNext_Request __attribute__((deprecated))
#else
# define DEPRECATED__audition_msgs__srv__ProceedToNext_Request __declspec(deprecated)
#endif

namespace audition_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct ProceedToNext_Request_
{
  using Type = ProceedToNext_Request_<ContainerAllocator>;

  explicit ProceedToNext_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->proceed = false;
      this->operator_note = "";
    }
  }

  explicit ProceedToNext_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : operator_note(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->proceed = false;
      this->operator_note = "";
    }
  }

  // field types and members
  using _proceed_type =
    bool;
  _proceed_type proceed;
  using _operator_note_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _operator_note_type operator_note;

  // setters for named parameter idiom
  Type & set__proceed(
    const bool & _arg)
  {
    this->proceed = _arg;
    return *this;
  }
  Type & set__operator_note(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->operator_note = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    audition_msgs::srv::ProceedToNext_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const audition_msgs::srv::ProceedToNext_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<audition_msgs::srv::ProceedToNext_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<audition_msgs::srv::ProceedToNext_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      audition_msgs::srv::ProceedToNext_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<audition_msgs::srv::ProceedToNext_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      audition_msgs::srv::ProceedToNext_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<audition_msgs::srv::ProceedToNext_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<audition_msgs::srv::ProceedToNext_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<audition_msgs::srv::ProceedToNext_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__audition_msgs__srv__ProceedToNext_Request
    std::shared_ptr<audition_msgs::srv::ProceedToNext_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__audition_msgs__srv__ProceedToNext_Request
    std::shared_ptr<audition_msgs::srv::ProceedToNext_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ProceedToNext_Request_ & other) const
  {
    if (this->proceed != other.proceed) {
      return false;
    }
    if (this->operator_note != other.operator_note) {
      return false;
    }
    return true;
  }
  bool operator!=(const ProceedToNext_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ProceedToNext_Request_

// alias to use template instance with default allocator
using ProceedToNext_Request =
  audition_msgs::srv::ProceedToNext_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace audition_msgs


#ifndef _WIN32
# define DEPRECATED__audition_msgs__srv__ProceedToNext_Response __attribute__((deprecated))
#else
# define DEPRECATED__audition_msgs__srv__ProceedToNext_Response __declspec(deprecated)
#endif

namespace audition_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct ProceedToNext_Response_
{
  using Type = ProceedToNext_Response_<ContainerAllocator>;

  explicit ProceedToNext_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->accepted = false;
      this->next_waypoint_label = "";
    }
  }

  explicit ProceedToNext_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : next_waypoint_label(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->accepted = false;
      this->next_waypoint_label = "";
    }
  }

  // field types and members
  using _accepted_type =
    bool;
  _accepted_type accepted;
  using _next_waypoint_label_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _next_waypoint_label_type next_waypoint_label;

  // setters for named parameter idiom
  Type & set__accepted(
    const bool & _arg)
  {
    this->accepted = _arg;
    return *this;
  }
  Type & set__next_waypoint_label(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->next_waypoint_label = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    audition_msgs::srv::ProceedToNext_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const audition_msgs::srv::ProceedToNext_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<audition_msgs::srv::ProceedToNext_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<audition_msgs::srv::ProceedToNext_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      audition_msgs::srv::ProceedToNext_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<audition_msgs::srv::ProceedToNext_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      audition_msgs::srv::ProceedToNext_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<audition_msgs::srv::ProceedToNext_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<audition_msgs::srv::ProceedToNext_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<audition_msgs::srv::ProceedToNext_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__audition_msgs__srv__ProceedToNext_Response
    std::shared_ptr<audition_msgs::srv::ProceedToNext_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__audition_msgs__srv__ProceedToNext_Response
    std::shared_ptr<audition_msgs::srv::ProceedToNext_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ProceedToNext_Response_ & other) const
  {
    if (this->accepted != other.accepted) {
      return false;
    }
    if (this->next_waypoint_label != other.next_waypoint_label) {
      return false;
    }
    return true;
  }
  bool operator!=(const ProceedToNext_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ProceedToNext_Response_

// alias to use template instance with default allocator
using ProceedToNext_Response =
  audition_msgs::srv::ProceedToNext_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace audition_msgs

namespace audition_msgs
{

namespace srv
{

struct ProceedToNext
{
  using Request = audition_msgs::srv::ProceedToNext_Request;
  using Response = audition_msgs::srv::ProceedToNext_Response;
};

}  // namespace srv

}  // namespace audition_msgs

#endif  // AUDITION_MSGS__SRV__DETAIL__PROCEED_TO_NEXT__STRUCT_HPP_
