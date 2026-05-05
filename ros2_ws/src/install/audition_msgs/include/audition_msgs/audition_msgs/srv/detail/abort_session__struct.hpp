// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from audition_msgs:srv/AbortSession.idl
// generated code does not contain a copyright notice

#ifndef AUDITION_MSGS__SRV__DETAIL__ABORT_SESSION__STRUCT_HPP_
#define AUDITION_MSGS__SRV__DETAIL__ABORT_SESSION__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__audition_msgs__srv__AbortSession_Request __attribute__((deprecated))
#else
# define DEPRECATED__audition_msgs__srv__AbortSession_Request __declspec(deprecated)
#endif

namespace audition_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct AbortSession_Request_
{
  using Type = AbortSession_Request_<ContainerAllocator>;

  explicit AbortSession_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->reason = "";
    }
  }

  explicit AbortSession_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : reason(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->reason = "";
    }
  }

  // field types and members
  using _reason_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _reason_type reason;

  // setters for named parameter idiom
  Type & set__reason(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->reason = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    audition_msgs::srv::AbortSession_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const audition_msgs::srv::AbortSession_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<audition_msgs::srv::AbortSession_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<audition_msgs::srv::AbortSession_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      audition_msgs::srv::AbortSession_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<audition_msgs::srv::AbortSession_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      audition_msgs::srv::AbortSession_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<audition_msgs::srv::AbortSession_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<audition_msgs::srv::AbortSession_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<audition_msgs::srv::AbortSession_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__audition_msgs__srv__AbortSession_Request
    std::shared_ptr<audition_msgs::srv::AbortSession_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__audition_msgs__srv__AbortSession_Request
    std::shared_ptr<audition_msgs::srv::AbortSession_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const AbortSession_Request_ & other) const
  {
    if (this->reason != other.reason) {
      return false;
    }
    return true;
  }
  bool operator!=(const AbortSession_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct AbortSession_Request_

// alias to use template instance with default allocator
using AbortSession_Request =
  audition_msgs::srv::AbortSession_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace audition_msgs


#ifndef _WIN32
# define DEPRECATED__audition_msgs__srv__AbortSession_Response __attribute__((deprecated))
#else
# define DEPRECATED__audition_msgs__srv__AbortSession_Response __declspec(deprecated)
#endif

namespace audition_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct AbortSession_Response_
{
  using Type = AbortSession_Response_<ContainerAllocator>;

  explicit AbortSession_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->accepted = false;
      this->message = "";
    }
  }

  explicit AbortSession_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : message(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->accepted = false;
      this->message = "";
    }
  }

  // field types and members
  using _accepted_type =
    bool;
  _accepted_type accepted;
  using _message_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _message_type message;

  // setters for named parameter idiom
  Type & set__accepted(
    const bool & _arg)
  {
    this->accepted = _arg;
    return *this;
  }
  Type & set__message(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->message = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    audition_msgs::srv::AbortSession_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const audition_msgs::srv::AbortSession_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<audition_msgs::srv::AbortSession_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<audition_msgs::srv::AbortSession_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      audition_msgs::srv::AbortSession_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<audition_msgs::srv::AbortSession_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      audition_msgs::srv::AbortSession_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<audition_msgs::srv::AbortSession_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<audition_msgs::srv::AbortSession_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<audition_msgs::srv::AbortSession_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__audition_msgs__srv__AbortSession_Response
    std::shared_ptr<audition_msgs::srv::AbortSession_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__audition_msgs__srv__AbortSession_Response
    std::shared_ptr<audition_msgs::srv::AbortSession_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const AbortSession_Response_ & other) const
  {
    if (this->accepted != other.accepted) {
      return false;
    }
    if (this->message != other.message) {
      return false;
    }
    return true;
  }
  bool operator!=(const AbortSession_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct AbortSession_Response_

// alias to use template instance with default allocator
using AbortSession_Response =
  audition_msgs::srv::AbortSession_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace audition_msgs

namespace audition_msgs
{

namespace srv
{

struct AbortSession
{
  using Request = audition_msgs::srv::AbortSession_Request;
  using Response = audition_msgs::srv::AbortSession_Response;
};

}  // namespace srv

}  // namespace audition_msgs

#endif  // AUDITION_MSGS__SRV__DETAIL__ABORT_SESSION__STRUCT_HPP_
