// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from pkg_interfaces:msg/HardwareStatus.idl
// generated code does not contain a copyright notice

#ifndef PKG_INTERFACES__MSG__DETAIL__HARDWARE_STATUS__TRAITS_HPP_
#define PKG_INTERFACES__MSG__DETAIL__HARDWARE_STATUS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "pkg_interfaces/msg/detail/hardware_status__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace pkg_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const HardwareStatus & msg,
  std::ostream & out)
{
  out << "{";
  // member: temperature
  {
    out << "temperature: ";
    rosidl_generator_traits::value_to_yaml(msg.temperature, out);
    out << ", ";
  }

  // member: are_motors_ready
  {
    out << "are_motors_ready: ";
    rosidl_generator_traits::value_to_yaml(msg.are_motors_ready, out);
    out << ", ";
  }

  // member: debug_info
  {
    out << "debug_info: ";
    rosidl_generator_traits::value_to_yaml(msg.debug_info, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const HardwareStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: temperature
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "temperature: ";
    rosidl_generator_traits::value_to_yaml(msg.temperature, out);
    out << "\n";
  }

  // member: are_motors_ready
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "are_motors_ready: ";
    rosidl_generator_traits::value_to_yaml(msg.are_motors_ready, out);
    out << "\n";
  }

  // member: debug_info
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "debug_info: ";
    rosidl_generator_traits::value_to_yaml(msg.debug_info, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const HardwareStatus & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace pkg_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use pkg_interfaces::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const pkg_interfaces::msg::HardwareStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  pkg_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use pkg_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const pkg_interfaces::msg::HardwareStatus & msg)
{
  return pkg_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<pkg_interfaces::msg::HardwareStatus>()
{
  return "pkg_interfaces::msg::HardwareStatus";
}

template<>
inline const char * name<pkg_interfaces::msg::HardwareStatus>()
{
  return "pkg_interfaces/msg/HardwareStatus";
}

template<>
struct has_fixed_size<pkg_interfaces::msg::HardwareStatus>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<pkg_interfaces::msg::HardwareStatus>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<pkg_interfaces::msg::HardwareStatus>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PKG_INTERFACES__MSG__DETAIL__HARDWARE_STATUS__TRAITS_HPP_
