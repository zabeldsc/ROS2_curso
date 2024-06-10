// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from pkg_interfaces:srv/ComputeRectangleArea.idl
// generated code does not contain a copyright notice

#ifndef PKG_INTERFACES__SRV__DETAIL__COMPUTE_RECTANGLE_AREA__BUILDER_HPP_
#define PKG_INTERFACES__SRV__DETAIL__COMPUTE_RECTANGLE_AREA__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "pkg_interfaces/srv/detail/compute_rectangle_area__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace pkg_interfaces
{

namespace srv
{

namespace builder
{

class Init_ComputeRectangleArea_Request_height
{
public:
  explicit Init_ComputeRectangleArea_Request_height(::pkg_interfaces::srv::ComputeRectangleArea_Request & msg)
  : msg_(msg)
  {}
  ::pkg_interfaces::srv::ComputeRectangleArea_Request height(::pkg_interfaces::srv::ComputeRectangleArea_Request::_height_type arg)
  {
    msg_.height = std::move(arg);
    return std::move(msg_);
  }

private:
  ::pkg_interfaces::srv::ComputeRectangleArea_Request msg_;
};

class Init_ComputeRectangleArea_Request_width
{
public:
  Init_ComputeRectangleArea_Request_width()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ComputeRectangleArea_Request_height width(::pkg_interfaces::srv::ComputeRectangleArea_Request::_width_type arg)
  {
    msg_.width = std::move(arg);
    return Init_ComputeRectangleArea_Request_height(msg_);
  }

private:
  ::pkg_interfaces::srv::ComputeRectangleArea_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::pkg_interfaces::srv::ComputeRectangleArea_Request>()
{
  return pkg_interfaces::srv::builder::Init_ComputeRectangleArea_Request_width();
}

}  // namespace pkg_interfaces


namespace pkg_interfaces
{

namespace srv
{

namespace builder
{

class Init_ComputeRectangleArea_Response_area
{
public:
  Init_ComputeRectangleArea_Response_area()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::pkg_interfaces::srv::ComputeRectangleArea_Response area(::pkg_interfaces::srv::ComputeRectangleArea_Response::_area_type arg)
  {
    msg_.area = std::move(arg);
    return std::move(msg_);
  }

private:
  ::pkg_interfaces::srv::ComputeRectangleArea_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::pkg_interfaces::srv::ComputeRectangleArea_Response>()
{
  return pkg_interfaces::srv::builder::Init_ComputeRectangleArea_Response_area();
}

}  // namespace pkg_interfaces

#endif  // PKG_INTERFACES__SRV__DETAIL__COMPUTE_RECTANGLE_AREA__BUILDER_HPP_
