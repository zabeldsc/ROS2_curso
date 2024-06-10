// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from pkg_interfaces:srv/ComputeRectangleArea.idl
// generated code does not contain a copyright notice

#ifndef PKG_INTERFACES__SRV__DETAIL__COMPUTE_RECTANGLE_AREA__STRUCT_HPP_
#define PKG_INTERFACES__SRV__DETAIL__COMPUTE_RECTANGLE_AREA__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__pkg_interfaces__srv__ComputeRectangleArea_Request __attribute__((deprecated))
#else
# define DEPRECATED__pkg_interfaces__srv__ComputeRectangleArea_Request __declspec(deprecated)
#endif

namespace pkg_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct ComputeRectangleArea_Request_
{
  using Type = ComputeRectangleArea_Request_<ContainerAllocator>;

  explicit ComputeRectangleArea_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->width = 0.0;
      this->height = 0.0;
    }
  }

  explicit ComputeRectangleArea_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->width = 0.0;
      this->height = 0.0;
    }
  }

  // field types and members
  using _width_type =
    double;
  _width_type width;
  using _height_type =
    double;
  _height_type height;

  // setters for named parameter idiom
  Type & set__width(
    const double & _arg)
  {
    this->width = _arg;
    return *this;
  }
  Type & set__height(
    const double & _arg)
  {
    this->height = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    pkg_interfaces::srv::ComputeRectangleArea_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const pkg_interfaces::srv::ComputeRectangleArea_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<pkg_interfaces::srv::ComputeRectangleArea_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<pkg_interfaces::srv::ComputeRectangleArea_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      pkg_interfaces::srv::ComputeRectangleArea_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<pkg_interfaces::srv::ComputeRectangleArea_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      pkg_interfaces::srv::ComputeRectangleArea_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<pkg_interfaces::srv::ComputeRectangleArea_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<pkg_interfaces::srv::ComputeRectangleArea_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<pkg_interfaces::srv::ComputeRectangleArea_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__pkg_interfaces__srv__ComputeRectangleArea_Request
    std::shared_ptr<pkg_interfaces::srv::ComputeRectangleArea_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__pkg_interfaces__srv__ComputeRectangleArea_Request
    std::shared_ptr<pkg_interfaces::srv::ComputeRectangleArea_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ComputeRectangleArea_Request_ & other) const
  {
    if (this->width != other.width) {
      return false;
    }
    if (this->height != other.height) {
      return false;
    }
    return true;
  }
  bool operator!=(const ComputeRectangleArea_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ComputeRectangleArea_Request_

// alias to use template instance with default allocator
using ComputeRectangleArea_Request =
  pkg_interfaces::srv::ComputeRectangleArea_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace pkg_interfaces


#ifndef _WIN32
# define DEPRECATED__pkg_interfaces__srv__ComputeRectangleArea_Response __attribute__((deprecated))
#else
# define DEPRECATED__pkg_interfaces__srv__ComputeRectangleArea_Response __declspec(deprecated)
#endif

namespace pkg_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct ComputeRectangleArea_Response_
{
  using Type = ComputeRectangleArea_Response_<ContainerAllocator>;

  explicit ComputeRectangleArea_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->area = 0.0;
    }
  }

  explicit ComputeRectangleArea_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->area = 0.0;
    }
  }

  // field types and members
  using _area_type =
    double;
  _area_type area;

  // setters for named parameter idiom
  Type & set__area(
    const double & _arg)
  {
    this->area = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    pkg_interfaces::srv::ComputeRectangleArea_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const pkg_interfaces::srv::ComputeRectangleArea_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<pkg_interfaces::srv::ComputeRectangleArea_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<pkg_interfaces::srv::ComputeRectangleArea_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      pkg_interfaces::srv::ComputeRectangleArea_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<pkg_interfaces::srv::ComputeRectangleArea_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      pkg_interfaces::srv::ComputeRectangleArea_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<pkg_interfaces::srv::ComputeRectangleArea_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<pkg_interfaces::srv::ComputeRectangleArea_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<pkg_interfaces::srv::ComputeRectangleArea_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__pkg_interfaces__srv__ComputeRectangleArea_Response
    std::shared_ptr<pkg_interfaces::srv::ComputeRectangleArea_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__pkg_interfaces__srv__ComputeRectangleArea_Response
    std::shared_ptr<pkg_interfaces::srv::ComputeRectangleArea_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ComputeRectangleArea_Response_ & other) const
  {
    if (this->area != other.area) {
      return false;
    }
    return true;
  }
  bool operator!=(const ComputeRectangleArea_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ComputeRectangleArea_Response_

// alias to use template instance with default allocator
using ComputeRectangleArea_Response =
  pkg_interfaces::srv::ComputeRectangleArea_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace pkg_interfaces

namespace pkg_interfaces
{

namespace srv
{

struct ComputeRectangleArea
{
  using Request = pkg_interfaces::srv::ComputeRectangleArea_Request;
  using Response = pkg_interfaces::srv::ComputeRectangleArea_Response;
};

}  // namespace srv

}  // namespace pkg_interfaces

#endif  // PKG_INTERFACES__SRV__DETAIL__COMPUTE_RECTANGLE_AREA__STRUCT_HPP_
