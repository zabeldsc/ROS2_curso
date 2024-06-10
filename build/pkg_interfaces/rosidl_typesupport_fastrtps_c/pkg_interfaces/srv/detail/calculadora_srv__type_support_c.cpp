// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from pkg_interfaces:srv/CalculadoraSrv.idl
// generated code does not contain a copyright notice
#include "pkg_interfaces/srv/detail/calculadora_srv__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "pkg_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "pkg_interfaces/srv/detail/calculadora_srv__struct.h"
#include "pkg_interfaces/srv/detail/calculadora_srv__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "rosidl_runtime_c/string.h"  // operador
#include "rosidl_runtime_c/string_functions.h"  // operador

// forward declare type support functions


using _CalculadoraSrv_Request__ros_msg_type = pkg_interfaces__srv__CalculadoraSrv_Request;

static bool _CalculadoraSrv_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _CalculadoraSrv_Request__ros_msg_type * ros_message = static_cast<const _CalculadoraSrv_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: operando1
  {
    cdr << ros_message->operando1;
  }

  // Field name: operando2
  {
    cdr << ros_message->operando2;
  }

  // Field name: operador
  {
    const rosidl_runtime_c__String * str = &ros_message->operador;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  return true;
}

static bool _CalculadoraSrv_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _CalculadoraSrv_Request__ros_msg_type * ros_message = static_cast<_CalculadoraSrv_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: operando1
  {
    cdr >> ros_message->operando1;
  }

  // Field name: operando2
  {
    cdr >> ros_message->operando2;
  }

  // Field name: operador
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->operador.data) {
      rosidl_runtime_c__String__init(&ros_message->operador);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->operador,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'operador'\n");
      return false;
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_pkg_interfaces
size_t get_serialized_size_pkg_interfaces__srv__CalculadoraSrv_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _CalculadoraSrv_Request__ros_msg_type * ros_message = static_cast<const _CalculadoraSrv_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name operando1
  {
    size_t item_size = sizeof(ros_message->operando1);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name operando2
  {
    size_t item_size = sizeof(ros_message->operando2);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name operador
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->operador.size + 1);

  return current_alignment - initial_alignment;
}

static uint32_t _CalculadoraSrv_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_pkg_interfaces__srv__CalculadoraSrv_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_pkg_interfaces
size_t max_serialized_size_pkg_interfaces__srv__CalculadoraSrv_Request(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: operando1
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: operando2
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: operador
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = pkg_interfaces__srv__CalculadoraSrv_Request;
    is_plain =
      (
      offsetof(DataType, operador) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _CalculadoraSrv_Request__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_pkg_interfaces__srv__CalculadoraSrv_Request(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_CalculadoraSrv_Request = {
  "pkg_interfaces::srv",
  "CalculadoraSrv_Request",
  _CalculadoraSrv_Request__cdr_serialize,
  _CalculadoraSrv_Request__cdr_deserialize,
  _CalculadoraSrv_Request__get_serialized_size,
  _CalculadoraSrv_Request__max_serialized_size
};

static rosidl_message_type_support_t _CalculadoraSrv_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_CalculadoraSrv_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, pkg_interfaces, srv, CalculadoraSrv_Request)() {
  return &_CalculadoraSrv_Request__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <cassert>
// already included above
// #include <limits>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "pkg_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "pkg_interfaces/srv/detail/calculadora_srv__struct.h"
// already included above
// #include "pkg_interfaces/srv/detail/calculadora_srv__functions.h"
// already included above
// #include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _CalculadoraSrv_Response__ros_msg_type = pkg_interfaces__srv__CalculadoraSrv_Response;

static bool _CalculadoraSrv_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _CalculadoraSrv_Response__ros_msg_type * ros_message = static_cast<const _CalculadoraSrv_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: resultado
  {
    cdr << ros_message->resultado;
  }

  return true;
}

static bool _CalculadoraSrv_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _CalculadoraSrv_Response__ros_msg_type * ros_message = static_cast<_CalculadoraSrv_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: resultado
  {
    cdr >> ros_message->resultado;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_pkg_interfaces
size_t get_serialized_size_pkg_interfaces__srv__CalculadoraSrv_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _CalculadoraSrv_Response__ros_msg_type * ros_message = static_cast<const _CalculadoraSrv_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name resultado
  {
    size_t item_size = sizeof(ros_message->resultado);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _CalculadoraSrv_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_pkg_interfaces__srv__CalculadoraSrv_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_pkg_interfaces
size_t max_serialized_size_pkg_interfaces__srv__CalculadoraSrv_Response(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: resultado
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = pkg_interfaces__srv__CalculadoraSrv_Response;
    is_plain =
      (
      offsetof(DataType, resultado) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _CalculadoraSrv_Response__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_pkg_interfaces__srv__CalculadoraSrv_Response(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_CalculadoraSrv_Response = {
  "pkg_interfaces::srv",
  "CalculadoraSrv_Response",
  _CalculadoraSrv_Response__cdr_serialize,
  _CalculadoraSrv_Response__cdr_deserialize,
  _CalculadoraSrv_Response__get_serialized_size,
  _CalculadoraSrv_Response__max_serialized_size
};

static rosidl_message_type_support_t _CalculadoraSrv_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_CalculadoraSrv_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, pkg_interfaces, srv, CalculadoraSrv_Response)() {
  return &_CalculadoraSrv_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "pkg_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "pkg_interfaces/srv/calculadora_srv.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t CalculadoraSrv__callbacks = {
  "pkg_interfaces::srv",
  "CalculadoraSrv",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, pkg_interfaces, srv, CalculadoraSrv_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, pkg_interfaces, srv, CalculadoraSrv_Response)(),
};

static rosidl_service_type_support_t CalculadoraSrv__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &CalculadoraSrv__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, pkg_interfaces, srv, CalculadoraSrv)() {
  return &CalculadoraSrv__handle;
}

#if defined(__cplusplus)
}
#endif
