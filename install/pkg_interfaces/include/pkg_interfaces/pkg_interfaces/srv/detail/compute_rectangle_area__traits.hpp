// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from pkg_interfaces:srv/ComputeRectangleArea.idl
// generated code does not contain a copyright notice

#ifndef PKG_INTERFACES__SRV__DETAIL__COMPUTE_RECTANGLE_AREA__TRAITS_HPP_
#define PKG_INTERFACES__SRV__DETAIL__COMPUTE_RECTANGLE_AREA__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "pkg_interfaces/srv/detail/compute_rectangle_area__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace pkg_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const ComputeRectangleArea_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: width
  {
    out << "width: ";
    rosidl_generator_traits::value_to_yaml(msg.width, out);
    out << ", ";
  }

  // member: height
  {
    out << "height: ";
    rosidl_generator_traits::value_to_yaml(msg.height, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ComputeRectangleArea_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: width
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "width: ";
    rosidl_generator_traits::value_to_yaml(msg.width, out);
    out << "\n";
  }

  // member: height
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "height: ";
    rosidl_generator_traits::value_to_yaml(msg.height, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ComputeRectangleArea_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace pkg_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use pkg_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const pkg_interfaces::srv::ComputeRectangleArea_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  pkg_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use pkg_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const pkg_interfaces::srv::ComputeRectangleArea_Request & msg)
{
  return pkg_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<pkg_interfaces::srv::ComputeRectangleArea_Request>()
{
  return "pkg_interfaces::srv::ComputeRectangleArea_Request";
}

template<>
inline const char * name<pkg_interfaces::srv::ComputeRectangleArea_Request>()
{
  return "pkg_interfaces/srv/ComputeRectangleArea_Request";
}

template<>
struct has_fixed_size<pkg_interfaces::srv::ComputeRectangleArea_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<pkg_interfaces::srv::ComputeRectangleArea_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<pkg_interfaces::srv::ComputeRectangleArea_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace pkg_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const ComputeRectangleArea_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: area
  {
    out << "area: ";
    rosidl_generator_traits::value_to_yaml(msg.area, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ComputeRectangleArea_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: area
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "area: ";
    rosidl_generator_traits::value_to_yaml(msg.area, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ComputeRectangleArea_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace pkg_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use pkg_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const pkg_interfaces::srv::ComputeRectangleArea_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  pkg_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use pkg_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const pkg_interfaces::srv::ComputeRectangleArea_Response & msg)
{
  return pkg_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<pkg_interfaces::srv::ComputeRectangleArea_Response>()
{
  return "pkg_interfaces::srv::ComputeRectangleArea_Response";
}

template<>
inline const char * name<pkg_interfaces::srv::ComputeRectangleArea_Response>()
{
  return "pkg_interfaces/srv/ComputeRectangleArea_Response";
}

template<>
struct has_fixed_size<pkg_interfaces::srv::ComputeRectangleArea_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<pkg_interfaces::srv::ComputeRectangleArea_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<pkg_interfaces::srv::ComputeRectangleArea_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<pkg_interfaces::srv::ComputeRectangleArea>()
{
  return "pkg_interfaces::srv::ComputeRectangleArea";
}

template<>
inline const char * name<pkg_interfaces::srv::ComputeRectangleArea>()
{
  return "pkg_interfaces/srv/ComputeRectangleArea";
}

template<>
struct has_fixed_size<pkg_interfaces::srv::ComputeRectangleArea>
  : std::integral_constant<
    bool,
    has_fixed_size<pkg_interfaces::srv::ComputeRectangleArea_Request>::value &&
    has_fixed_size<pkg_interfaces::srv::ComputeRectangleArea_Response>::value
  >
{
};

template<>
struct has_bounded_size<pkg_interfaces::srv::ComputeRectangleArea>
  : std::integral_constant<
    bool,
    has_bounded_size<pkg_interfaces::srv::ComputeRectangleArea_Request>::value &&
    has_bounded_size<pkg_interfaces::srv::ComputeRectangleArea_Response>::value
  >
{
};

template<>
struct is_service<pkg_interfaces::srv::ComputeRectangleArea>
  : std::true_type
{
};

template<>
struct is_service_request<pkg_interfaces::srv::ComputeRectangleArea_Request>
  : std::true_type
{
};

template<>
struct is_service_response<pkg_interfaces::srv::ComputeRectangleArea_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // PKG_INTERFACES__SRV__DETAIL__COMPUTE_RECTANGLE_AREA__TRAITS_HPP_
