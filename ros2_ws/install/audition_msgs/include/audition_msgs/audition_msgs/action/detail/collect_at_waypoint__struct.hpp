// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from audition_msgs:action/CollectAtWaypoint.idl
// generated code does not contain a copyright notice

#ifndef AUDITION_MSGS__ACTION__DETAIL__COLLECT_AT_WAYPOINT__STRUCT_HPP_
#define AUDITION_MSGS__ACTION__DETAIL__COLLECT_AT_WAYPOINT__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__audition_msgs__action__CollectAtWaypoint_Goal __attribute__((deprecated))
#else
# define DEPRECATED__audition_msgs__action__CollectAtWaypoint_Goal __declspec(deprecated)
#endif

namespace audition_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct CollectAtWaypoint_Goal_
{
  using Type = CollectAtWaypoint_Goal_<ContainerAllocator>;

  explicit CollectAtWaypoint_Goal_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->waypoint_id = 0l;
      this->waypoint_label = "";
      this->x = 0.0;
      this->y = 0.0;
      this->yaw = 0.0;
    }
  }

  explicit CollectAtWaypoint_Goal_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : waypoint_label(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->waypoint_id = 0l;
      this->waypoint_label = "";
      this->x = 0.0;
      this->y = 0.0;
      this->yaw = 0.0;
    }
  }

  // field types and members
  using _waypoint_id_type =
    int32_t;
  _waypoint_id_type waypoint_id;
  using _waypoint_label_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _waypoint_label_type waypoint_label;
  using _x_type =
    double;
  _x_type x;
  using _y_type =
    double;
  _y_type y;
  using _yaw_type =
    double;
  _yaw_type yaw;

  // setters for named parameter idiom
  Type & set__waypoint_id(
    const int32_t & _arg)
  {
    this->waypoint_id = _arg;
    return *this;
  }
  Type & set__waypoint_label(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->waypoint_label = _arg;
    return *this;
  }
  Type & set__x(
    const double & _arg)
  {
    this->x = _arg;
    return *this;
  }
  Type & set__y(
    const double & _arg)
  {
    this->y = _arg;
    return *this;
  }
  Type & set__yaw(
    const double & _arg)
  {
    this->yaw = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    audition_msgs::action::CollectAtWaypoint_Goal_<ContainerAllocator> *;
  using ConstRawPtr =
    const audition_msgs::action::CollectAtWaypoint_Goal_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<audition_msgs::action::CollectAtWaypoint_Goal_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<audition_msgs::action::CollectAtWaypoint_Goal_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      audition_msgs::action::CollectAtWaypoint_Goal_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<audition_msgs::action::CollectAtWaypoint_Goal_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      audition_msgs::action::CollectAtWaypoint_Goal_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<audition_msgs::action::CollectAtWaypoint_Goal_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<audition_msgs::action::CollectAtWaypoint_Goal_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<audition_msgs::action::CollectAtWaypoint_Goal_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__audition_msgs__action__CollectAtWaypoint_Goal
    std::shared_ptr<audition_msgs::action::CollectAtWaypoint_Goal_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__audition_msgs__action__CollectAtWaypoint_Goal
    std::shared_ptr<audition_msgs::action::CollectAtWaypoint_Goal_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CollectAtWaypoint_Goal_ & other) const
  {
    if (this->waypoint_id != other.waypoint_id) {
      return false;
    }
    if (this->waypoint_label != other.waypoint_label) {
      return false;
    }
    if (this->x != other.x) {
      return false;
    }
    if (this->y != other.y) {
      return false;
    }
    if (this->yaw != other.yaw) {
      return false;
    }
    return true;
  }
  bool operator!=(const CollectAtWaypoint_Goal_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CollectAtWaypoint_Goal_

// alias to use template instance with default allocator
using CollectAtWaypoint_Goal =
  audition_msgs::action::CollectAtWaypoint_Goal_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace audition_msgs


#ifndef _WIN32
# define DEPRECATED__audition_msgs__action__CollectAtWaypoint_Result __attribute__((deprecated))
#else
# define DEPRECATED__audition_msgs__action__CollectAtWaypoint_Result __declspec(deprecated)
#endif

namespace audition_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct CollectAtWaypoint_Result_
{
  using Type = CollectAtWaypoint_Result_<ContainerAllocator>;

  explicit CollectAtWaypoint_Result_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->message = "";
      this->bag_count = 0l;
    }
  }

  explicit CollectAtWaypoint_Result_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : message(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->message = "";
      this->bag_count = 0l;
    }
  }

  // field types and members
  using _success_type =
    bool;
  _success_type success;
  using _message_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _message_type message;
  using _bag_count_type =
    int32_t;
  _bag_count_type bag_count;

  // setters for named parameter idiom
  Type & set__success(
    const bool & _arg)
  {
    this->success = _arg;
    return *this;
  }
  Type & set__message(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->message = _arg;
    return *this;
  }
  Type & set__bag_count(
    const int32_t & _arg)
  {
    this->bag_count = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    audition_msgs::action::CollectAtWaypoint_Result_<ContainerAllocator> *;
  using ConstRawPtr =
    const audition_msgs::action::CollectAtWaypoint_Result_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<audition_msgs::action::CollectAtWaypoint_Result_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<audition_msgs::action::CollectAtWaypoint_Result_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      audition_msgs::action::CollectAtWaypoint_Result_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<audition_msgs::action::CollectAtWaypoint_Result_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      audition_msgs::action::CollectAtWaypoint_Result_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<audition_msgs::action::CollectAtWaypoint_Result_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<audition_msgs::action::CollectAtWaypoint_Result_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<audition_msgs::action::CollectAtWaypoint_Result_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__audition_msgs__action__CollectAtWaypoint_Result
    std::shared_ptr<audition_msgs::action::CollectAtWaypoint_Result_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__audition_msgs__action__CollectAtWaypoint_Result
    std::shared_ptr<audition_msgs::action::CollectAtWaypoint_Result_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CollectAtWaypoint_Result_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    if (this->message != other.message) {
      return false;
    }
    if (this->bag_count != other.bag_count) {
      return false;
    }
    return true;
  }
  bool operator!=(const CollectAtWaypoint_Result_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CollectAtWaypoint_Result_

// alias to use template instance with default allocator
using CollectAtWaypoint_Result =
  audition_msgs::action::CollectAtWaypoint_Result_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace audition_msgs


#ifndef _WIN32
# define DEPRECATED__audition_msgs__action__CollectAtWaypoint_Feedback __attribute__((deprecated))
#else
# define DEPRECATED__audition_msgs__action__CollectAtWaypoint_Feedback __declspec(deprecated)
#endif

namespace audition_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct CollectAtWaypoint_Feedback_
{
  using Type = CollectAtWaypoint_Feedback_<ContainerAllocator>;

  explicit CollectAtWaypoint_Feedback_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->current_state = "";
      this->progress = 0.0f;
    }
  }

  explicit CollectAtWaypoint_Feedback_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : current_state(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->current_state = "";
      this->progress = 0.0f;
    }
  }

  // field types and members
  using _current_state_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _current_state_type current_state;
  using _progress_type =
    float;
  _progress_type progress;

  // setters for named parameter idiom
  Type & set__current_state(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->current_state = _arg;
    return *this;
  }
  Type & set__progress(
    const float & _arg)
  {
    this->progress = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    audition_msgs::action::CollectAtWaypoint_Feedback_<ContainerAllocator> *;
  using ConstRawPtr =
    const audition_msgs::action::CollectAtWaypoint_Feedback_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<audition_msgs::action::CollectAtWaypoint_Feedback_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<audition_msgs::action::CollectAtWaypoint_Feedback_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      audition_msgs::action::CollectAtWaypoint_Feedback_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<audition_msgs::action::CollectAtWaypoint_Feedback_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      audition_msgs::action::CollectAtWaypoint_Feedback_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<audition_msgs::action::CollectAtWaypoint_Feedback_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<audition_msgs::action::CollectAtWaypoint_Feedback_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<audition_msgs::action::CollectAtWaypoint_Feedback_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__audition_msgs__action__CollectAtWaypoint_Feedback
    std::shared_ptr<audition_msgs::action::CollectAtWaypoint_Feedback_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__audition_msgs__action__CollectAtWaypoint_Feedback
    std::shared_ptr<audition_msgs::action::CollectAtWaypoint_Feedback_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CollectAtWaypoint_Feedback_ & other) const
  {
    if (this->current_state != other.current_state) {
      return false;
    }
    if (this->progress != other.progress) {
      return false;
    }
    return true;
  }
  bool operator!=(const CollectAtWaypoint_Feedback_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CollectAtWaypoint_Feedback_

// alias to use template instance with default allocator
using CollectAtWaypoint_Feedback =
  audition_msgs::action::CollectAtWaypoint_Feedback_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace audition_msgs


// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"
// Member 'goal'
#include "audition_msgs/action/detail/collect_at_waypoint__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__audition_msgs__action__CollectAtWaypoint_SendGoal_Request __attribute__((deprecated))
#else
# define DEPRECATED__audition_msgs__action__CollectAtWaypoint_SendGoal_Request __declspec(deprecated)
#endif

namespace audition_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct CollectAtWaypoint_SendGoal_Request_
{
  using Type = CollectAtWaypoint_SendGoal_Request_<ContainerAllocator>;

  explicit CollectAtWaypoint_SendGoal_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init),
    goal(_init)
  {
    (void)_init;
  }

  explicit CollectAtWaypoint_SendGoal_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init),
    goal(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;
  using _goal_type =
    audition_msgs::action::CollectAtWaypoint_Goal_<ContainerAllocator>;
  _goal_type goal;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }
  Type & set__goal(
    const audition_msgs::action::CollectAtWaypoint_Goal_<ContainerAllocator> & _arg)
  {
    this->goal = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    audition_msgs::action::CollectAtWaypoint_SendGoal_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const audition_msgs::action::CollectAtWaypoint_SendGoal_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<audition_msgs::action::CollectAtWaypoint_SendGoal_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<audition_msgs::action::CollectAtWaypoint_SendGoal_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      audition_msgs::action::CollectAtWaypoint_SendGoal_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<audition_msgs::action::CollectAtWaypoint_SendGoal_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      audition_msgs::action::CollectAtWaypoint_SendGoal_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<audition_msgs::action::CollectAtWaypoint_SendGoal_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<audition_msgs::action::CollectAtWaypoint_SendGoal_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<audition_msgs::action::CollectAtWaypoint_SendGoal_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__audition_msgs__action__CollectAtWaypoint_SendGoal_Request
    std::shared_ptr<audition_msgs::action::CollectAtWaypoint_SendGoal_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__audition_msgs__action__CollectAtWaypoint_SendGoal_Request
    std::shared_ptr<audition_msgs::action::CollectAtWaypoint_SendGoal_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CollectAtWaypoint_SendGoal_Request_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    if (this->goal != other.goal) {
      return false;
    }
    return true;
  }
  bool operator!=(const CollectAtWaypoint_SendGoal_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CollectAtWaypoint_SendGoal_Request_

// alias to use template instance with default allocator
using CollectAtWaypoint_SendGoal_Request =
  audition_msgs::action::CollectAtWaypoint_SendGoal_Request_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace audition_msgs


// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__audition_msgs__action__CollectAtWaypoint_SendGoal_Response __attribute__((deprecated))
#else
# define DEPRECATED__audition_msgs__action__CollectAtWaypoint_SendGoal_Response __declspec(deprecated)
#endif

namespace audition_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct CollectAtWaypoint_SendGoal_Response_
{
  using Type = CollectAtWaypoint_SendGoal_Response_<ContainerAllocator>;

  explicit CollectAtWaypoint_SendGoal_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->accepted = false;
    }
  }

  explicit CollectAtWaypoint_SendGoal_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->accepted = false;
    }
  }

  // field types and members
  using _accepted_type =
    bool;
  _accepted_type accepted;
  using _stamp_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _stamp_type stamp;

  // setters for named parameter idiom
  Type & set__accepted(
    const bool & _arg)
  {
    this->accepted = _arg;
    return *this;
  }
  Type & set__stamp(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->stamp = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    audition_msgs::action::CollectAtWaypoint_SendGoal_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const audition_msgs::action::CollectAtWaypoint_SendGoal_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<audition_msgs::action::CollectAtWaypoint_SendGoal_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<audition_msgs::action::CollectAtWaypoint_SendGoal_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      audition_msgs::action::CollectAtWaypoint_SendGoal_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<audition_msgs::action::CollectAtWaypoint_SendGoal_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      audition_msgs::action::CollectAtWaypoint_SendGoal_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<audition_msgs::action::CollectAtWaypoint_SendGoal_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<audition_msgs::action::CollectAtWaypoint_SendGoal_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<audition_msgs::action::CollectAtWaypoint_SendGoal_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__audition_msgs__action__CollectAtWaypoint_SendGoal_Response
    std::shared_ptr<audition_msgs::action::CollectAtWaypoint_SendGoal_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__audition_msgs__action__CollectAtWaypoint_SendGoal_Response
    std::shared_ptr<audition_msgs::action::CollectAtWaypoint_SendGoal_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CollectAtWaypoint_SendGoal_Response_ & other) const
  {
    if (this->accepted != other.accepted) {
      return false;
    }
    if (this->stamp != other.stamp) {
      return false;
    }
    return true;
  }
  bool operator!=(const CollectAtWaypoint_SendGoal_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CollectAtWaypoint_SendGoal_Response_

// alias to use template instance with default allocator
using CollectAtWaypoint_SendGoal_Response =
  audition_msgs::action::CollectAtWaypoint_SendGoal_Response_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace audition_msgs

namespace audition_msgs
{

namespace action
{

struct CollectAtWaypoint_SendGoal
{
  using Request = audition_msgs::action::CollectAtWaypoint_SendGoal_Request;
  using Response = audition_msgs::action::CollectAtWaypoint_SendGoal_Response;
};

}  // namespace action

}  // namespace audition_msgs


// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__audition_msgs__action__CollectAtWaypoint_GetResult_Request __attribute__((deprecated))
#else
# define DEPRECATED__audition_msgs__action__CollectAtWaypoint_GetResult_Request __declspec(deprecated)
#endif

namespace audition_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct CollectAtWaypoint_GetResult_Request_
{
  using Type = CollectAtWaypoint_GetResult_Request_<ContainerAllocator>;

  explicit CollectAtWaypoint_GetResult_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init)
  {
    (void)_init;
  }

  explicit CollectAtWaypoint_GetResult_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    audition_msgs::action::CollectAtWaypoint_GetResult_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const audition_msgs::action::CollectAtWaypoint_GetResult_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<audition_msgs::action::CollectAtWaypoint_GetResult_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<audition_msgs::action::CollectAtWaypoint_GetResult_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      audition_msgs::action::CollectAtWaypoint_GetResult_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<audition_msgs::action::CollectAtWaypoint_GetResult_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      audition_msgs::action::CollectAtWaypoint_GetResult_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<audition_msgs::action::CollectAtWaypoint_GetResult_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<audition_msgs::action::CollectAtWaypoint_GetResult_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<audition_msgs::action::CollectAtWaypoint_GetResult_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__audition_msgs__action__CollectAtWaypoint_GetResult_Request
    std::shared_ptr<audition_msgs::action::CollectAtWaypoint_GetResult_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__audition_msgs__action__CollectAtWaypoint_GetResult_Request
    std::shared_ptr<audition_msgs::action::CollectAtWaypoint_GetResult_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CollectAtWaypoint_GetResult_Request_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    return true;
  }
  bool operator!=(const CollectAtWaypoint_GetResult_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CollectAtWaypoint_GetResult_Request_

// alias to use template instance with default allocator
using CollectAtWaypoint_GetResult_Request =
  audition_msgs::action::CollectAtWaypoint_GetResult_Request_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace audition_msgs


// Include directives for member types
// Member 'result'
// already included above
// #include "audition_msgs/action/detail/collect_at_waypoint__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__audition_msgs__action__CollectAtWaypoint_GetResult_Response __attribute__((deprecated))
#else
# define DEPRECATED__audition_msgs__action__CollectAtWaypoint_GetResult_Response __declspec(deprecated)
#endif

namespace audition_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct CollectAtWaypoint_GetResult_Response_
{
  using Type = CollectAtWaypoint_GetResult_Response_<ContainerAllocator>;

  explicit CollectAtWaypoint_GetResult_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : result(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0;
    }
  }

  explicit CollectAtWaypoint_GetResult_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : result(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0;
    }
  }

  // field types and members
  using _status_type =
    int8_t;
  _status_type status;
  using _result_type =
    audition_msgs::action::CollectAtWaypoint_Result_<ContainerAllocator>;
  _result_type result;

  // setters for named parameter idiom
  Type & set__status(
    const int8_t & _arg)
  {
    this->status = _arg;
    return *this;
  }
  Type & set__result(
    const audition_msgs::action::CollectAtWaypoint_Result_<ContainerAllocator> & _arg)
  {
    this->result = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    audition_msgs::action::CollectAtWaypoint_GetResult_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const audition_msgs::action::CollectAtWaypoint_GetResult_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<audition_msgs::action::CollectAtWaypoint_GetResult_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<audition_msgs::action::CollectAtWaypoint_GetResult_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      audition_msgs::action::CollectAtWaypoint_GetResult_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<audition_msgs::action::CollectAtWaypoint_GetResult_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      audition_msgs::action::CollectAtWaypoint_GetResult_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<audition_msgs::action::CollectAtWaypoint_GetResult_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<audition_msgs::action::CollectAtWaypoint_GetResult_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<audition_msgs::action::CollectAtWaypoint_GetResult_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__audition_msgs__action__CollectAtWaypoint_GetResult_Response
    std::shared_ptr<audition_msgs::action::CollectAtWaypoint_GetResult_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__audition_msgs__action__CollectAtWaypoint_GetResult_Response
    std::shared_ptr<audition_msgs::action::CollectAtWaypoint_GetResult_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CollectAtWaypoint_GetResult_Response_ & other) const
  {
    if (this->status != other.status) {
      return false;
    }
    if (this->result != other.result) {
      return false;
    }
    return true;
  }
  bool operator!=(const CollectAtWaypoint_GetResult_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CollectAtWaypoint_GetResult_Response_

// alias to use template instance with default allocator
using CollectAtWaypoint_GetResult_Response =
  audition_msgs::action::CollectAtWaypoint_GetResult_Response_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace audition_msgs

namespace audition_msgs
{

namespace action
{

struct CollectAtWaypoint_GetResult
{
  using Request = audition_msgs::action::CollectAtWaypoint_GetResult_Request;
  using Response = audition_msgs::action::CollectAtWaypoint_GetResult_Response;
};

}  // namespace action

}  // namespace audition_msgs


// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"
// Member 'feedback'
// already included above
// #include "audition_msgs/action/detail/collect_at_waypoint__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__audition_msgs__action__CollectAtWaypoint_FeedbackMessage __attribute__((deprecated))
#else
# define DEPRECATED__audition_msgs__action__CollectAtWaypoint_FeedbackMessage __declspec(deprecated)
#endif

namespace audition_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct CollectAtWaypoint_FeedbackMessage_
{
  using Type = CollectAtWaypoint_FeedbackMessage_<ContainerAllocator>;

  explicit CollectAtWaypoint_FeedbackMessage_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init),
    feedback(_init)
  {
    (void)_init;
  }

  explicit CollectAtWaypoint_FeedbackMessage_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init),
    feedback(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;
  using _feedback_type =
    audition_msgs::action::CollectAtWaypoint_Feedback_<ContainerAllocator>;
  _feedback_type feedback;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }
  Type & set__feedback(
    const audition_msgs::action::CollectAtWaypoint_Feedback_<ContainerAllocator> & _arg)
  {
    this->feedback = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    audition_msgs::action::CollectAtWaypoint_FeedbackMessage_<ContainerAllocator> *;
  using ConstRawPtr =
    const audition_msgs::action::CollectAtWaypoint_FeedbackMessage_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<audition_msgs::action::CollectAtWaypoint_FeedbackMessage_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<audition_msgs::action::CollectAtWaypoint_FeedbackMessage_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      audition_msgs::action::CollectAtWaypoint_FeedbackMessage_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<audition_msgs::action::CollectAtWaypoint_FeedbackMessage_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      audition_msgs::action::CollectAtWaypoint_FeedbackMessage_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<audition_msgs::action::CollectAtWaypoint_FeedbackMessage_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<audition_msgs::action::CollectAtWaypoint_FeedbackMessage_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<audition_msgs::action::CollectAtWaypoint_FeedbackMessage_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__audition_msgs__action__CollectAtWaypoint_FeedbackMessage
    std::shared_ptr<audition_msgs::action::CollectAtWaypoint_FeedbackMessage_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__audition_msgs__action__CollectAtWaypoint_FeedbackMessage
    std::shared_ptr<audition_msgs::action::CollectAtWaypoint_FeedbackMessage_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CollectAtWaypoint_FeedbackMessage_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    if (this->feedback != other.feedback) {
      return false;
    }
    return true;
  }
  bool operator!=(const CollectAtWaypoint_FeedbackMessage_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CollectAtWaypoint_FeedbackMessage_

// alias to use template instance with default allocator
using CollectAtWaypoint_FeedbackMessage =
  audition_msgs::action::CollectAtWaypoint_FeedbackMessage_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace audition_msgs

#include "action_msgs/srv/cancel_goal.hpp"
#include "action_msgs/msg/goal_info.hpp"
#include "action_msgs/msg/goal_status_array.hpp"

namespace audition_msgs
{

namespace action
{

struct CollectAtWaypoint
{
  /// The goal message defined in the action definition.
  using Goal = audition_msgs::action::CollectAtWaypoint_Goal;
  /// The result message defined in the action definition.
  using Result = audition_msgs::action::CollectAtWaypoint_Result;
  /// The feedback message defined in the action definition.
  using Feedback = audition_msgs::action::CollectAtWaypoint_Feedback;

  struct Impl
  {
    /// The send_goal service using a wrapped version of the goal message as a request.
    using SendGoalService = audition_msgs::action::CollectAtWaypoint_SendGoal;
    /// The get_result service using a wrapped version of the result message as a response.
    using GetResultService = audition_msgs::action::CollectAtWaypoint_GetResult;
    /// The feedback message with generic fields which wraps the feedback message.
    using FeedbackMessage = audition_msgs::action::CollectAtWaypoint_FeedbackMessage;

    /// The generic service to cancel a goal.
    using CancelGoalService = action_msgs::srv::CancelGoal;
    /// The generic message for the status of a goal.
    using GoalStatusMessage = action_msgs::msg::GoalStatusArray;
  };
};

typedef struct CollectAtWaypoint CollectAtWaypoint;

}  // namespace action

}  // namespace audition_msgs

#endif  // AUDITION_MSGS__ACTION__DETAIL__COLLECT_AT_WAYPOINT__STRUCT_HPP_
