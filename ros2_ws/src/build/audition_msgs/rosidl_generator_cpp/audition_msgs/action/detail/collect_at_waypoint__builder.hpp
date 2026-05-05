// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from audition_msgs:action/CollectAtWaypoint.idl
// generated code does not contain a copyright notice

#ifndef AUDITION_MSGS__ACTION__DETAIL__COLLECT_AT_WAYPOINT__BUILDER_HPP_
#define AUDITION_MSGS__ACTION__DETAIL__COLLECT_AT_WAYPOINT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "audition_msgs/action/detail/collect_at_waypoint__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace audition_msgs
{

namespace action
{

namespace builder
{

class Init_CollectAtWaypoint_Goal_yaw
{
public:
  explicit Init_CollectAtWaypoint_Goal_yaw(::audition_msgs::action::CollectAtWaypoint_Goal & msg)
  : msg_(msg)
  {}
  ::audition_msgs::action::CollectAtWaypoint_Goal yaw(::audition_msgs::action::CollectAtWaypoint_Goal::_yaw_type arg)
  {
    msg_.yaw = std::move(arg);
    return std::move(msg_);
  }

private:
  ::audition_msgs::action::CollectAtWaypoint_Goal msg_;
};

class Init_CollectAtWaypoint_Goal_y
{
public:
  explicit Init_CollectAtWaypoint_Goal_y(::audition_msgs::action::CollectAtWaypoint_Goal & msg)
  : msg_(msg)
  {}
  Init_CollectAtWaypoint_Goal_yaw y(::audition_msgs::action::CollectAtWaypoint_Goal::_y_type arg)
  {
    msg_.y = std::move(arg);
    return Init_CollectAtWaypoint_Goal_yaw(msg_);
  }

private:
  ::audition_msgs::action::CollectAtWaypoint_Goal msg_;
};

class Init_CollectAtWaypoint_Goal_x
{
public:
  explicit Init_CollectAtWaypoint_Goal_x(::audition_msgs::action::CollectAtWaypoint_Goal & msg)
  : msg_(msg)
  {}
  Init_CollectAtWaypoint_Goal_y x(::audition_msgs::action::CollectAtWaypoint_Goal::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_CollectAtWaypoint_Goal_y(msg_);
  }

private:
  ::audition_msgs::action::CollectAtWaypoint_Goal msg_;
};

class Init_CollectAtWaypoint_Goal_waypoint_label
{
public:
  explicit Init_CollectAtWaypoint_Goal_waypoint_label(::audition_msgs::action::CollectAtWaypoint_Goal & msg)
  : msg_(msg)
  {}
  Init_CollectAtWaypoint_Goal_x waypoint_label(::audition_msgs::action::CollectAtWaypoint_Goal::_waypoint_label_type arg)
  {
    msg_.waypoint_label = std::move(arg);
    return Init_CollectAtWaypoint_Goal_x(msg_);
  }

private:
  ::audition_msgs::action::CollectAtWaypoint_Goal msg_;
};

class Init_CollectAtWaypoint_Goal_waypoint_id
{
public:
  Init_CollectAtWaypoint_Goal_waypoint_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CollectAtWaypoint_Goal_waypoint_label waypoint_id(::audition_msgs::action::CollectAtWaypoint_Goal::_waypoint_id_type arg)
  {
    msg_.waypoint_id = std::move(arg);
    return Init_CollectAtWaypoint_Goal_waypoint_label(msg_);
  }

private:
  ::audition_msgs::action::CollectAtWaypoint_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::audition_msgs::action::CollectAtWaypoint_Goal>()
{
  return audition_msgs::action::builder::Init_CollectAtWaypoint_Goal_waypoint_id();
}

}  // namespace audition_msgs


namespace audition_msgs
{

namespace action
{

namespace builder
{

class Init_CollectAtWaypoint_Result_bag_count
{
public:
  explicit Init_CollectAtWaypoint_Result_bag_count(::audition_msgs::action::CollectAtWaypoint_Result & msg)
  : msg_(msg)
  {}
  ::audition_msgs::action::CollectAtWaypoint_Result bag_count(::audition_msgs::action::CollectAtWaypoint_Result::_bag_count_type arg)
  {
    msg_.bag_count = std::move(arg);
    return std::move(msg_);
  }

private:
  ::audition_msgs::action::CollectAtWaypoint_Result msg_;
};

class Init_CollectAtWaypoint_Result_message
{
public:
  explicit Init_CollectAtWaypoint_Result_message(::audition_msgs::action::CollectAtWaypoint_Result & msg)
  : msg_(msg)
  {}
  Init_CollectAtWaypoint_Result_bag_count message(::audition_msgs::action::CollectAtWaypoint_Result::_message_type arg)
  {
    msg_.message = std::move(arg);
    return Init_CollectAtWaypoint_Result_bag_count(msg_);
  }

private:
  ::audition_msgs::action::CollectAtWaypoint_Result msg_;
};

class Init_CollectAtWaypoint_Result_success
{
public:
  Init_CollectAtWaypoint_Result_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CollectAtWaypoint_Result_message success(::audition_msgs::action::CollectAtWaypoint_Result::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_CollectAtWaypoint_Result_message(msg_);
  }

private:
  ::audition_msgs::action::CollectAtWaypoint_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::audition_msgs::action::CollectAtWaypoint_Result>()
{
  return audition_msgs::action::builder::Init_CollectAtWaypoint_Result_success();
}

}  // namespace audition_msgs


namespace audition_msgs
{

namespace action
{

namespace builder
{

class Init_CollectAtWaypoint_Feedback_progress
{
public:
  explicit Init_CollectAtWaypoint_Feedback_progress(::audition_msgs::action::CollectAtWaypoint_Feedback & msg)
  : msg_(msg)
  {}
  ::audition_msgs::action::CollectAtWaypoint_Feedback progress(::audition_msgs::action::CollectAtWaypoint_Feedback::_progress_type arg)
  {
    msg_.progress = std::move(arg);
    return std::move(msg_);
  }

private:
  ::audition_msgs::action::CollectAtWaypoint_Feedback msg_;
};

class Init_CollectAtWaypoint_Feedback_current_state
{
public:
  Init_CollectAtWaypoint_Feedback_current_state()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CollectAtWaypoint_Feedback_progress current_state(::audition_msgs::action::CollectAtWaypoint_Feedback::_current_state_type arg)
  {
    msg_.current_state = std::move(arg);
    return Init_CollectAtWaypoint_Feedback_progress(msg_);
  }

private:
  ::audition_msgs::action::CollectAtWaypoint_Feedback msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::audition_msgs::action::CollectAtWaypoint_Feedback>()
{
  return audition_msgs::action::builder::Init_CollectAtWaypoint_Feedback_current_state();
}

}  // namespace audition_msgs


namespace audition_msgs
{

namespace action
{

namespace builder
{

class Init_CollectAtWaypoint_SendGoal_Request_goal
{
public:
  explicit Init_CollectAtWaypoint_SendGoal_Request_goal(::audition_msgs::action::CollectAtWaypoint_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::audition_msgs::action::CollectAtWaypoint_SendGoal_Request goal(::audition_msgs::action::CollectAtWaypoint_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::audition_msgs::action::CollectAtWaypoint_SendGoal_Request msg_;
};

class Init_CollectAtWaypoint_SendGoal_Request_goal_id
{
public:
  Init_CollectAtWaypoint_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CollectAtWaypoint_SendGoal_Request_goal goal_id(::audition_msgs::action::CollectAtWaypoint_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_CollectAtWaypoint_SendGoal_Request_goal(msg_);
  }

private:
  ::audition_msgs::action::CollectAtWaypoint_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::audition_msgs::action::CollectAtWaypoint_SendGoal_Request>()
{
  return audition_msgs::action::builder::Init_CollectAtWaypoint_SendGoal_Request_goal_id();
}

}  // namespace audition_msgs


namespace audition_msgs
{

namespace action
{

namespace builder
{

class Init_CollectAtWaypoint_SendGoal_Response_stamp
{
public:
  explicit Init_CollectAtWaypoint_SendGoal_Response_stamp(::audition_msgs::action::CollectAtWaypoint_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::audition_msgs::action::CollectAtWaypoint_SendGoal_Response stamp(::audition_msgs::action::CollectAtWaypoint_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::audition_msgs::action::CollectAtWaypoint_SendGoal_Response msg_;
};

class Init_CollectAtWaypoint_SendGoal_Response_accepted
{
public:
  Init_CollectAtWaypoint_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CollectAtWaypoint_SendGoal_Response_stamp accepted(::audition_msgs::action::CollectAtWaypoint_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_CollectAtWaypoint_SendGoal_Response_stamp(msg_);
  }

private:
  ::audition_msgs::action::CollectAtWaypoint_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::audition_msgs::action::CollectAtWaypoint_SendGoal_Response>()
{
  return audition_msgs::action::builder::Init_CollectAtWaypoint_SendGoal_Response_accepted();
}

}  // namespace audition_msgs


namespace audition_msgs
{

namespace action
{

namespace builder
{

class Init_CollectAtWaypoint_GetResult_Request_goal_id
{
public:
  Init_CollectAtWaypoint_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::audition_msgs::action::CollectAtWaypoint_GetResult_Request goal_id(::audition_msgs::action::CollectAtWaypoint_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::audition_msgs::action::CollectAtWaypoint_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::audition_msgs::action::CollectAtWaypoint_GetResult_Request>()
{
  return audition_msgs::action::builder::Init_CollectAtWaypoint_GetResult_Request_goal_id();
}

}  // namespace audition_msgs


namespace audition_msgs
{

namespace action
{

namespace builder
{

class Init_CollectAtWaypoint_GetResult_Response_result
{
public:
  explicit Init_CollectAtWaypoint_GetResult_Response_result(::audition_msgs::action::CollectAtWaypoint_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::audition_msgs::action::CollectAtWaypoint_GetResult_Response result(::audition_msgs::action::CollectAtWaypoint_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::audition_msgs::action::CollectAtWaypoint_GetResult_Response msg_;
};

class Init_CollectAtWaypoint_GetResult_Response_status
{
public:
  Init_CollectAtWaypoint_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CollectAtWaypoint_GetResult_Response_result status(::audition_msgs::action::CollectAtWaypoint_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_CollectAtWaypoint_GetResult_Response_result(msg_);
  }

private:
  ::audition_msgs::action::CollectAtWaypoint_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::audition_msgs::action::CollectAtWaypoint_GetResult_Response>()
{
  return audition_msgs::action::builder::Init_CollectAtWaypoint_GetResult_Response_status();
}

}  // namespace audition_msgs


namespace audition_msgs
{

namespace action
{

namespace builder
{

class Init_CollectAtWaypoint_FeedbackMessage_feedback
{
public:
  explicit Init_CollectAtWaypoint_FeedbackMessage_feedback(::audition_msgs::action::CollectAtWaypoint_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::audition_msgs::action::CollectAtWaypoint_FeedbackMessage feedback(::audition_msgs::action::CollectAtWaypoint_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::audition_msgs::action::CollectAtWaypoint_FeedbackMessage msg_;
};

class Init_CollectAtWaypoint_FeedbackMessage_goal_id
{
public:
  Init_CollectAtWaypoint_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CollectAtWaypoint_FeedbackMessage_feedback goal_id(::audition_msgs::action::CollectAtWaypoint_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_CollectAtWaypoint_FeedbackMessage_feedback(msg_);
  }

private:
  ::audition_msgs::action::CollectAtWaypoint_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::audition_msgs::action::CollectAtWaypoint_FeedbackMessage>()
{
  return audition_msgs::action::builder::Init_CollectAtWaypoint_FeedbackMessage_goal_id();
}

}  // namespace audition_msgs

#endif  // AUDITION_MSGS__ACTION__DETAIL__COLLECT_AT_WAYPOINT__BUILDER_HPP_
