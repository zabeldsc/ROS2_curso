// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from pkg_interfaces:srv/CalculadoraSrv.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "pkg_interfaces/srv/detail/calculadora_srv__rosidl_typesupport_introspection_c.h"
#include "pkg_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "pkg_interfaces/srv/detail/calculadora_srv__functions.h"
#include "pkg_interfaces/srv/detail/calculadora_srv__struct.h"


// Include directives for member types
// Member `operador`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void pkg_interfaces__srv__CalculadoraSrv_Request__rosidl_typesupport_introspection_c__CalculadoraSrv_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  pkg_interfaces__srv__CalculadoraSrv_Request__init(message_memory);
}

void pkg_interfaces__srv__CalculadoraSrv_Request__rosidl_typesupport_introspection_c__CalculadoraSrv_Request_fini_function(void * message_memory)
{
  pkg_interfaces__srv__CalculadoraSrv_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember pkg_interfaces__srv__CalculadoraSrv_Request__rosidl_typesupport_introspection_c__CalculadoraSrv_Request_message_member_array[3] = {
  {
    "operando1",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(pkg_interfaces__srv__CalculadoraSrv_Request, operando1),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "operando2",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(pkg_interfaces__srv__CalculadoraSrv_Request, operando2),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "operador",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(pkg_interfaces__srv__CalculadoraSrv_Request, operador),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers pkg_interfaces__srv__CalculadoraSrv_Request__rosidl_typesupport_introspection_c__CalculadoraSrv_Request_message_members = {
  "pkg_interfaces__srv",  // message namespace
  "CalculadoraSrv_Request",  // message name
  3,  // number of fields
  sizeof(pkg_interfaces__srv__CalculadoraSrv_Request),
  pkg_interfaces__srv__CalculadoraSrv_Request__rosidl_typesupport_introspection_c__CalculadoraSrv_Request_message_member_array,  // message members
  pkg_interfaces__srv__CalculadoraSrv_Request__rosidl_typesupport_introspection_c__CalculadoraSrv_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  pkg_interfaces__srv__CalculadoraSrv_Request__rosidl_typesupport_introspection_c__CalculadoraSrv_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t pkg_interfaces__srv__CalculadoraSrv_Request__rosidl_typesupport_introspection_c__CalculadoraSrv_Request_message_type_support_handle = {
  0,
  &pkg_interfaces__srv__CalculadoraSrv_Request__rosidl_typesupport_introspection_c__CalculadoraSrv_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_pkg_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, pkg_interfaces, srv, CalculadoraSrv_Request)() {
  if (!pkg_interfaces__srv__CalculadoraSrv_Request__rosidl_typesupport_introspection_c__CalculadoraSrv_Request_message_type_support_handle.typesupport_identifier) {
    pkg_interfaces__srv__CalculadoraSrv_Request__rosidl_typesupport_introspection_c__CalculadoraSrv_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &pkg_interfaces__srv__CalculadoraSrv_Request__rosidl_typesupport_introspection_c__CalculadoraSrv_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "pkg_interfaces/srv/detail/calculadora_srv__rosidl_typesupport_introspection_c.h"
// already included above
// #include "pkg_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "pkg_interfaces/srv/detail/calculadora_srv__functions.h"
// already included above
// #include "pkg_interfaces/srv/detail/calculadora_srv__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void pkg_interfaces__srv__CalculadoraSrv_Response__rosidl_typesupport_introspection_c__CalculadoraSrv_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  pkg_interfaces__srv__CalculadoraSrv_Response__init(message_memory);
}

void pkg_interfaces__srv__CalculadoraSrv_Response__rosidl_typesupport_introspection_c__CalculadoraSrv_Response_fini_function(void * message_memory)
{
  pkg_interfaces__srv__CalculadoraSrv_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember pkg_interfaces__srv__CalculadoraSrv_Response__rosidl_typesupport_introspection_c__CalculadoraSrv_Response_message_member_array[1] = {
  {
    "resultado",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(pkg_interfaces__srv__CalculadoraSrv_Response, resultado),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers pkg_interfaces__srv__CalculadoraSrv_Response__rosidl_typesupport_introspection_c__CalculadoraSrv_Response_message_members = {
  "pkg_interfaces__srv",  // message namespace
  "CalculadoraSrv_Response",  // message name
  1,  // number of fields
  sizeof(pkg_interfaces__srv__CalculadoraSrv_Response),
  pkg_interfaces__srv__CalculadoraSrv_Response__rosidl_typesupport_introspection_c__CalculadoraSrv_Response_message_member_array,  // message members
  pkg_interfaces__srv__CalculadoraSrv_Response__rosidl_typesupport_introspection_c__CalculadoraSrv_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  pkg_interfaces__srv__CalculadoraSrv_Response__rosidl_typesupport_introspection_c__CalculadoraSrv_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t pkg_interfaces__srv__CalculadoraSrv_Response__rosidl_typesupport_introspection_c__CalculadoraSrv_Response_message_type_support_handle = {
  0,
  &pkg_interfaces__srv__CalculadoraSrv_Response__rosidl_typesupport_introspection_c__CalculadoraSrv_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_pkg_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, pkg_interfaces, srv, CalculadoraSrv_Response)() {
  if (!pkg_interfaces__srv__CalculadoraSrv_Response__rosidl_typesupport_introspection_c__CalculadoraSrv_Response_message_type_support_handle.typesupport_identifier) {
    pkg_interfaces__srv__CalculadoraSrv_Response__rosidl_typesupport_introspection_c__CalculadoraSrv_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &pkg_interfaces__srv__CalculadoraSrv_Response__rosidl_typesupport_introspection_c__CalculadoraSrv_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "pkg_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "pkg_interfaces/srv/detail/calculadora_srv__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers pkg_interfaces__srv__detail__calculadora_srv__rosidl_typesupport_introspection_c__CalculadoraSrv_service_members = {
  "pkg_interfaces__srv",  // service namespace
  "CalculadoraSrv",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // pkg_interfaces__srv__detail__calculadora_srv__rosidl_typesupport_introspection_c__CalculadoraSrv_Request_message_type_support_handle,
  NULL  // response message
  // pkg_interfaces__srv__detail__calculadora_srv__rosidl_typesupport_introspection_c__CalculadoraSrv_Response_message_type_support_handle
};

static rosidl_service_type_support_t pkg_interfaces__srv__detail__calculadora_srv__rosidl_typesupport_introspection_c__CalculadoraSrv_service_type_support_handle = {
  0,
  &pkg_interfaces__srv__detail__calculadora_srv__rosidl_typesupport_introspection_c__CalculadoraSrv_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, pkg_interfaces, srv, CalculadoraSrv_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, pkg_interfaces, srv, CalculadoraSrv_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_pkg_interfaces
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, pkg_interfaces, srv, CalculadoraSrv)() {
  if (!pkg_interfaces__srv__detail__calculadora_srv__rosidl_typesupport_introspection_c__CalculadoraSrv_service_type_support_handle.typesupport_identifier) {
    pkg_interfaces__srv__detail__calculadora_srv__rosidl_typesupport_introspection_c__CalculadoraSrv_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)pkg_interfaces__srv__detail__calculadora_srv__rosidl_typesupport_introspection_c__CalculadoraSrv_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, pkg_interfaces, srv, CalculadoraSrv_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, pkg_interfaces, srv, CalculadoraSrv_Response)()->data;
  }

  return &pkg_interfaces__srv__detail__calculadora_srv__rosidl_typesupport_introspection_c__CalculadoraSrv_service_type_support_handle;
}
