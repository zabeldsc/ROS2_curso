// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from pkg_interfaces:msg/HardwareStatus.idl
// generated code does not contain a copyright notice

#ifndef PKG_INTERFACES__MSG__DETAIL__HARDWARE_STATUS__BUILDER_HPP_
#define PKG_INTERFACES__MSG__DETAIL__HARDWARE_STATUS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "pkg_interfaces/msg/detail/hardware_status__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace pkg_interfaces
{

namespace msg
{

namespace builder
{

class Init_HardwareStatus_debug_info
{
public:
  explicit Init_HardwareStatus_debug_info(::pkg_interfaces::msg::HardwareStatus & msg)
  : msg_(msg)
  {}
  ::pkg_interfaces::msg::HardwareStatus debug_info(::pkg_interfaces::msg::HardwareStatus::_debug_info_type arg)
  {
    msg_.debug_info = std::move(arg);
    return std::move(msg_);
  }

private:
  ::pkg_interfaces::msg::HardwareStatus msg_;
};

class Init_HardwareStatus_are_motors_ready
{
public:
  explicit Init_HardwareStatus_are_motors_ready(::pkg_interfaces::msg::HardwareStatus & msg)
  : msg_(msg)
  {}
  Init_HardwareStatus_debug_info are_motors_ready(::pkg_interfaces::msg::HardwareStatus::_are_motors_ready_type arg)
  {
    msg_.are_motors_ready = std::move(arg);
    return Init_HardwareStatus_debug_info(msg_);
  }

private:
  ::pkg_interfaces::msg::HardwareStatus msg_;
};

class Init_HardwareStatus_temperature
{
public:
  Init_HardwareStatus_temperature()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_HardwareStatus_are_motors_ready temperature(::pkg_interfaces::msg::HardwareStatus::_temperature_type arg)
  {
    msg_.temperature = std::move(arg);
    return Init_HardwareStatus_are_motors_ready(msg_);
  }

private:
  ::pkg_interfaces::msg::HardwareStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::pkg_interfaces::msg::HardwareStatus>()
{
  return pkg_interfaces::msg::builder::Init_HardwareStatus_temperature();
}

}  // namespace pkg_interfaces

#endif  // PKG_INTERFACES__MSG__DETAIL__HARDWARE_STATUS__BUILDER_HPP_
