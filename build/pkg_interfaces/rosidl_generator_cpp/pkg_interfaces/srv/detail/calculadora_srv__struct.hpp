// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from pkg_interfaces:srv/CalculadoraSrv.idl
// generated code does not contain a copyright notice

#ifndef PKG_INTERFACES__SRV__DETAIL__CALCULADORA_SRV__STRUCT_HPP_
#define PKG_INTERFACES__SRV__DETAIL__CALCULADORA_SRV__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__pkg_interfaces__srv__CalculadoraSrv_Request __attribute__((deprecated))
#else
# define DEPRECATED__pkg_interfaces__srv__CalculadoraSrv_Request __declspec(deprecated)
#endif

namespace pkg_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct CalculadoraSrv_Request_
{
  using Type = CalculadoraSrv_Request_<ContainerAllocator>;

  explicit CalculadoraSrv_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->operando1 = 0.0;
      this->operando2 = 0.0;
      this->operador = "";
    }
  }

  explicit CalculadoraSrv_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : operador(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->operando1 = 0.0;
      this->operando2 = 0.0;
      this->operador = "";
    }
  }

  // field types and members
  using _operando1_type =
    double;
  _operando1_type operando1;
  using _operando2_type =
    double;
  _operando2_type operando2;
  using _operador_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _operador_type operador;

  // setters for named parameter idiom
  Type & set__operando1(
    const double & _arg)
  {
    this->operando1 = _arg;
    return *this;
  }
  Type & set__operando2(
    const double & _arg)
  {
    this->operando2 = _arg;
    return *this;
  }
  Type & set__operador(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->operador = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    pkg_interfaces::srv::CalculadoraSrv_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const pkg_interfaces::srv::CalculadoraSrv_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<pkg_interfaces::srv::CalculadoraSrv_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<pkg_interfaces::srv::CalculadoraSrv_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      pkg_interfaces::srv::CalculadoraSrv_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<pkg_interfaces::srv::CalculadoraSrv_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      pkg_interfaces::srv::CalculadoraSrv_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<pkg_interfaces::srv::CalculadoraSrv_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<pkg_interfaces::srv::CalculadoraSrv_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<pkg_interfaces::srv::CalculadoraSrv_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__pkg_interfaces__srv__CalculadoraSrv_Request
    std::shared_ptr<pkg_interfaces::srv::CalculadoraSrv_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__pkg_interfaces__srv__CalculadoraSrv_Request
    std::shared_ptr<pkg_interfaces::srv::CalculadoraSrv_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CalculadoraSrv_Request_ & other) const
  {
    if (this->operando1 != other.operando1) {
      return false;
    }
    if (this->operando2 != other.operando2) {
      return false;
    }
    if (this->operador != other.operador) {
      return false;
    }
    return true;
  }
  bool operator!=(const CalculadoraSrv_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CalculadoraSrv_Request_

// alias to use template instance with default allocator
using CalculadoraSrv_Request =
  pkg_interfaces::srv::CalculadoraSrv_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace pkg_interfaces


#ifndef _WIN32
# define DEPRECATED__pkg_interfaces__srv__CalculadoraSrv_Response __attribute__((deprecated))
#else
# define DEPRECATED__pkg_interfaces__srv__CalculadoraSrv_Response __declspec(deprecated)
#endif

namespace pkg_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct CalculadoraSrv_Response_
{
  using Type = CalculadoraSrv_Response_<ContainerAllocator>;

  explicit CalculadoraSrv_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->resultado = 0.0;
      this->status = "";
    }
  }

  explicit CalculadoraSrv_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : status(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->resultado = 0.0;
      this->status = "";
    }
  }

  // field types and members
  using _resultado_type =
    double;
  _resultado_type resultado;
  using _status_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _status_type status;

  // setters for named parameter idiom
  Type & set__resultado(
    const double & _arg)
  {
    this->resultado = _arg;
    return *this;
  }
  Type & set__status(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->status = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    pkg_interfaces::srv::CalculadoraSrv_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const pkg_interfaces::srv::CalculadoraSrv_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<pkg_interfaces::srv::CalculadoraSrv_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<pkg_interfaces::srv::CalculadoraSrv_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      pkg_interfaces::srv::CalculadoraSrv_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<pkg_interfaces::srv::CalculadoraSrv_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      pkg_interfaces::srv::CalculadoraSrv_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<pkg_interfaces::srv::CalculadoraSrv_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<pkg_interfaces::srv::CalculadoraSrv_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<pkg_interfaces::srv::CalculadoraSrv_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__pkg_interfaces__srv__CalculadoraSrv_Response
    std::shared_ptr<pkg_interfaces::srv::CalculadoraSrv_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__pkg_interfaces__srv__CalculadoraSrv_Response
    std::shared_ptr<pkg_interfaces::srv::CalculadoraSrv_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CalculadoraSrv_Response_ & other) const
  {
    if (this->resultado != other.resultado) {
      return false;
    }
    if (this->status != other.status) {
      return false;
    }
    return true;
  }
  bool operator!=(const CalculadoraSrv_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CalculadoraSrv_Response_

// alias to use template instance with default allocator
using CalculadoraSrv_Response =
  pkg_interfaces::srv::CalculadoraSrv_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace pkg_interfaces

namespace pkg_interfaces
{

namespace srv
{

struct CalculadoraSrv
{
  using Request = pkg_interfaces::srv::CalculadoraSrv_Request;
  using Response = pkg_interfaces::srv::CalculadoraSrv_Response;
};

}  // namespace srv

}  // namespace pkg_interfaces

#endif  // PKG_INTERFACES__SRV__DETAIL__CALCULADORA_SRV__STRUCT_HPP_
