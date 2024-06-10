// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from pkg_interfaces:srv/CalculadoraSrv.idl
// generated code does not contain a copyright notice

#ifndef PKG_INTERFACES__SRV__DETAIL__CALCULADORA_SRV__BUILDER_HPP_
#define PKG_INTERFACES__SRV__DETAIL__CALCULADORA_SRV__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "pkg_interfaces/srv/detail/calculadora_srv__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace pkg_interfaces
{

namespace srv
{

namespace builder
{

class Init_CalculadoraSrv_Request_operador
{
public:
  explicit Init_CalculadoraSrv_Request_operador(::pkg_interfaces::srv::CalculadoraSrv_Request & msg)
  : msg_(msg)
  {}
  ::pkg_interfaces::srv::CalculadoraSrv_Request operador(::pkg_interfaces::srv::CalculadoraSrv_Request::_operador_type arg)
  {
    msg_.operador = std::move(arg);
    return std::move(msg_);
  }

private:
  ::pkg_interfaces::srv::CalculadoraSrv_Request msg_;
};

class Init_CalculadoraSrv_Request_operando2
{
public:
  explicit Init_CalculadoraSrv_Request_operando2(::pkg_interfaces::srv::CalculadoraSrv_Request & msg)
  : msg_(msg)
  {}
  Init_CalculadoraSrv_Request_operador operando2(::pkg_interfaces::srv::CalculadoraSrv_Request::_operando2_type arg)
  {
    msg_.operando2 = std::move(arg);
    return Init_CalculadoraSrv_Request_operador(msg_);
  }

private:
  ::pkg_interfaces::srv::CalculadoraSrv_Request msg_;
};

class Init_CalculadoraSrv_Request_operando1
{
public:
  Init_CalculadoraSrv_Request_operando1()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CalculadoraSrv_Request_operando2 operando1(::pkg_interfaces::srv::CalculadoraSrv_Request::_operando1_type arg)
  {
    msg_.operando1 = std::move(arg);
    return Init_CalculadoraSrv_Request_operando2(msg_);
  }

private:
  ::pkg_interfaces::srv::CalculadoraSrv_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::pkg_interfaces::srv::CalculadoraSrv_Request>()
{
  return pkg_interfaces::srv::builder::Init_CalculadoraSrv_Request_operando1();
}

}  // namespace pkg_interfaces


namespace pkg_interfaces
{

namespace srv
{

namespace builder
{

class Init_CalculadoraSrv_Response_resultado
{
public:
  Init_CalculadoraSrv_Response_resultado()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::pkg_interfaces::srv::CalculadoraSrv_Response resultado(::pkg_interfaces::srv::CalculadoraSrv_Response::_resultado_type arg)
  {
    msg_.resultado = std::move(arg);
    return std::move(msg_);
  }

private:
  ::pkg_interfaces::srv::CalculadoraSrv_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::pkg_interfaces::srv::CalculadoraSrv_Response>()
{
  return pkg_interfaces::srv::builder::Init_CalculadoraSrv_Response_resultado();
}

}  // namespace pkg_interfaces

#endif  // PKG_INTERFACES__SRV__DETAIL__CALCULADORA_SRV__BUILDER_HPP_
