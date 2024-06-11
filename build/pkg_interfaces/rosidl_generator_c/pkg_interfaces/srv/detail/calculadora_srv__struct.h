// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from pkg_interfaces:srv/CalculadoraSrv.idl
// generated code does not contain a copyright notice

#ifndef PKG_INTERFACES__SRV__DETAIL__CALCULADORA_SRV__STRUCT_H_
#define PKG_INTERFACES__SRV__DETAIL__CALCULADORA_SRV__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'operador'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/CalculadoraSrv in the package pkg_interfaces.
typedef struct pkg_interfaces__srv__CalculadoraSrv_Request
{
  double operando1;
  double operando2;
  rosidl_runtime_c__String operador;
} pkg_interfaces__srv__CalculadoraSrv_Request;

// Struct for a sequence of pkg_interfaces__srv__CalculadoraSrv_Request.
typedef struct pkg_interfaces__srv__CalculadoraSrv_Request__Sequence
{
  pkg_interfaces__srv__CalculadoraSrv_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} pkg_interfaces__srv__CalculadoraSrv_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'status'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in srv/CalculadoraSrv in the package pkg_interfaces.
typedef struct pkg_interfaces__srv__CalculadoraSrv_Response
{
  double resultado;
  rosidl_runtime_c__String status;
} pkg_interfaces__srv__CalculadoraSrv_Response;

// Struct for a sequence of pkg_interfaces__srv__CalculadoraSrv_Response.
typedef struct pkg_interfaces__srv__CalculadoraSrv_Response__Sequence
{
  pkg_interfaces__srv__CalculadoraSrv_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} pkg_interfaces__srv__CalculadoraSrv_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PKG_INTERFACES__SRV__DETAIL__CALCULADORA_SRV__STRUCT_H_
