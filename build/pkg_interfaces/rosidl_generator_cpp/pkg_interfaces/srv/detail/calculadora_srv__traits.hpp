// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from pkg_interfaces:srv/CalculadoraSrv.idl
// generated code does not contain a copyright notice

#ifndef PKG_INTERFACES__SRV__DETAIL__CALCULADORA_SRV__TRAITS_HPP_
#define PKG_INTERFACES__SRV__DETAIL__CALCULADORA_SRV__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "pkg_interfaces/srv/detail/calculadora_srv__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace pkg_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const CalculadoraSrv_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: operando1
  {
    out << "operando1: ";
    rosidl_generator_traits::value_to_yaml(msg.operando1, out);
    out << ", ";
  }

  // member: operando2
  {
    out << "operando2: ";
    rosidl_generator_traits::value_to_yaml(msg.operando2, out);
    out << ", ";
  }

  // member: operador
  {
    out << "operador: ";
    rosidl_generator_traits::value_to_yaml(msg.operador, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const CalculadoraSrv_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: operando1
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "operando1: ";
    rosidl_generator_traits::value_to_yaml(msg.operando1, out);
    out << "\n";
  }

  // member: operando2
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "operando2: ";
    rosidl_generator_traits::value_to_yaml(msg.operando2, out);
    out << "\n";
  }

  // member: operador
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "operador: ";
    rosidl_generator_traits::value_to_yaml(msg.operador, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const CalculadoraSrv_Request & msg, bool use_flow_style = false)
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
  const pkg_interfaces::srv::CalculadoraSrv_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  pkg_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use pkg_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const pkg_interfaces::srv::CalculadoraSrv_Request & msg)
{
  return pkg_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<pkg_interfaces::srv::CalculadoraSrv_Request>()
{
  return "pkg_interfaces::srv::CalculadoraSrv_Request";
}

template<>
inline const char * name<pkg_interfaces::srv::CalculadoraSrv_Request>()
{
  return "pkg_interfaces/srv/CalculadoraSrv_Request";
}

template<>
struct has_fixed_size<pkg_interfaces::srv::CalculadoraSrv_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<pkg_interfaces::srv::CalculadoraSrv_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<pkg_interfaces::srv::CalculadoraSrv_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace pkg_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const CalculadoraSrv_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: resultado
  {
    out << "resultado: ";
    rosidl_generator_traits::value_to_yaml(msg.resultado, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const CalculadoraSrv_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: resultado
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "resultado: ";
    rosidl_generator_traits::value_to_yaml(msg.resultado, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const CalculadoraSrv_Response & msg, bool use_flow_style = false)
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
  const pkg_interfaces::srv::CalculadoraSrv_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  pkg_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use pkg_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const pkg_interfaces::srv::CalculadoraSrv_Response & msg)
{
  return pkg_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<pkg_interfaces::srv::CalculadoraSrv_Response>()
{
  return "pkg_interfaces::srv::CalculadoraSrv_Response";
}

template<>
inline const char * name<pkg_interfaces::srv::CalculadoraSrv_Response>()
{
  return "pkg_interfaces/srv/CalculadoraSrv_Response";
}

template<>
struct has_fixed_size<pkg_interfaces::srv::CalculadoraSrv_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<pkg_interfaces::srv::CalculadoraSrv_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<pkg_interfaces::srv::CalculadoraSrv_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<pkg_interfaces::srv::CalculadoraSrv>()
{
  return "pkg_interfaces::srv::CalculadoraSrv";
}

template<>
inline const char * name<pkg_interfaces::srv::CalculadoraSrv>()
{
  return "pkg_interfaces/srv/CalculadoraSrv";
}

template<>
struct has_fixed_size<pkg_interfaces::srv::CalculadoraSrv>
  : std::integral_constant<
    bool,
    has_fixed_size<pkg_interfaces::srv::CalculadoraSrv_Request>::value &&
    has_fixed_size<pkg_interfaces::srv::CalculadoraSrv_Response>::value
  >
{
};

template<>
struct has_bounded_size<pkg_interfaces::srv::CalculadoraSrv>
  : std::integral_constant<
    bool,
    has_bounded_size<pkg_interfaces::srv::CalculadoraSrv_Request>::value &&
    has_bounded_size<pkg_interfaces::srv::CalculadoraSrv_Response>::value
  >
{
};

template<>
struct is_service<pkg_interfaces::srv::CalculadoraSrv>
  : std::true_type
{
};

template<>
struct is_service_request<pkg_interfaces::srv::CalculadoraSrv_Request>
  : std::true_type
{
};

template<>
struct is_service_response<pkg_interfaces::srv::CalculadoraSrv_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // PKG_INTERFACES__SRV__DETAIL__CALCULADORA_SRV__TRAITS_HPP_
