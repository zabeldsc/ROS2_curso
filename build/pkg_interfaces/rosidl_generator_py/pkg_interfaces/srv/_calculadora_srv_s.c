// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from pkg_interfaces:srv/CalculadoraSrv.idl
// generated code does not contain a copyright notice
#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
#include <Python.h>
#include <stdbool.h>
#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-function"
#endif
#include "numpy/ndarrayobject.h"
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif
#include "rosidl_runtime_c/visibility_control.h"
#include "pkg_interfaces/srv/detail/calculadora_srv__struct.h"
#include "pkg_interfaces/srv/detail/calculadora_srv__functions.h"

#include "rosidl_runtime_c/string.h"
#include "rosidl_runtime_c/string_functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool pkg_interfaces__srv__calculadora_srv__request__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[59];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp("pkg_interfaces.srv._calculadora_srv.CalculadoraSrv_Request", full_classname_dest, 58) == 0);
  }
  pkg_interfaces__srv__CalculadoraSrv_Request * ros_message = _ros_message;
  {  // operando1
    PyObject * field = PyObject_GetAttrString(_pymsg, "operando1");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->operando1 = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // operando2
    PyObject * field = PyObject_GetAttrString(_pymsg, "operando2");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->operando2 = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // operador
    PyObject * field = PyObject_GetAttrString(_pymsg, "operador");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->operador, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * pkg_interfaces__srv__calculadora_srv__request__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of CalculadoraSrv_Request */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("pkg_interfaces.srv._calculadora_srv");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "CalculadoraSrv_Request");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  pkg_interfaces__srv__CalculadoraSrv_Request * ros_message = (pkg_interfaces__srv__CalculadoraSrv_Request *)raw_ros_message;
  {  // operando1
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->operando1);
    {
      int rc = PyObject_SetAttrString(_pymessage, "operando1", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // operando2
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->operando2);
    {
      int rc = PyObject_SetAttrString(_pymessage, "operando2", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // operador
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->operador.data,
      strlen(ros_message->operador.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "operador", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}

#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
// already included above
// #include <Python.h>
// already included above
// #include <stdbool.h>
// already included above
// #include "numpy/ndarrayobject.h"
// already included above
// #include "rosidl_runtime_c/visibility_control.h"
// already included above
// #include "pkg_interfaces/srv/detail/calculadora_srv__struct.h"
// already included above
// #include "pkg_interfaces/srv/detail/calculadora_srv__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool pkg_interfaces__srv__calculadora_srv__response__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[60];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp("pkg_interfaces.srv._calculadora_srv.CalculadoraSrv_Response", full_classname_dest, 59) == 0);
  }
  pkg_interfaces__srv__CalculadoraSrv_Response * ros_message = _ros_message;
  {  // resultado
    PyObject * field = PyObject_GetAttrString(_pymsg, "resultado");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->resultado = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * pkg_interfaces__srv__calculadora_srv__response__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of CalculadoraSrv_Response */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("pkg_interfaces.srv._calculadora_srv");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "CalculadoraSrv_Response");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  pkg_interfaces__srv__CalculadoraSrv_Response * ros_message = (pkg_interfaces__srv__CalculadoraSrv_Response *)raw_ros_message;
  {  // resultado
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->resultado);
    {
      int rc = PyObject_SetAttrString(_pymessage, "resultado", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
