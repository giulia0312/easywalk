// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from pkg:msg/LoadcellData.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "pkg/msg/loadcell_data.hpp"


#ifndef PKG__MSG__DETAIL__LOADCELL_DATA__STRUCT_HPP_
#define PKG__MSG__DETAIL__LOADCELL_DATA__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__pkg__msg__LoadcellData __attribute__((deprecated))
#else
# define DEPRECATED__pkg__msg__LoadcellData __declspec(deprecated)
#endif

namespace pkg
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct LoadcellData_
{
  using Type = LoadcellData_<ContainerAllocator>;

  explicit LoadcellData_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->left_outer = 0.0;
      this->left_inner = 0.0;
      this->right_inner = 0.0;
      this->right_outer = 0.0;
    }
  }

  explicit LoadcellData_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->left_outer = 0.0;
      this->left_inner = 0.0;
      this->right_inner = 0.0;
      this->right_outer = 0.0;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _left_outer_type =
    double;
  _left_outer_type left_outer;
  using _left_inner_type =
    double;
  _left_inner_type left_inner;
  using _right_inner_type =
    double;
  _right_inner_type right_inner;
  using _right_outer_type =
    double;
  _right_outer_type right_outer;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__left_outer(
    const double & _arg)
  {
    this->left_outer = _arg;
    return *this;
  }
  Type & set__left_inner(
    const double & _arg)
  {
    this->left_inner = _arg;
    return *this;
  }
  Type & set__right_inner(
    const double & _arg)
  {
    this->right_inner = _arg;
    return *this;
  }
  Type & set__right_outer(
    const double & _arg)
  {
    this->right_outer = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    pkg::msg::LoadcellData_<ContainerAllocator> *;
  using ConstRawPtr =
    const pkg::msg::LoadcellData_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<pkg::msg::LoadcellData_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<pkg::msg::LoadcellData_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      pkg::msg::LoadcellData_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<pkg::msg::LoadcellData_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      pkg::msg::LoadcellData_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<pkg::msg::LoadcellData_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<pkg::msg::LoadcellData_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<pkg::msg::LoadcellData_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__pkg__msg__LoadcellData
    std::shared_ptr<pkg::msg::LoadcellData_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__pkg__msg__LoadcellData
    std::shared_ptr<pkg::msg::LoadcellData_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const LoadcellData_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->left_outer != other.left_outer) {
      return false;
    }
    if (this->left_inner != other.left_inner) {
      return false;
    }
    if (this->right_inner != other.right_inner) {
      return false;
    }
    if (this->right_outer != other.right_outer) {
      return false;
    }
    return true;
  }
  bool operator!=(const LoadcellData_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct LoadcellData_

// alias to use template instance with default allocator
using LoadcellData =
  pkg::msg::LoadcellData_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace pkg

#endif  // PKG__MSG__DETAIL__LOADCELL_DATA__STRUCT_HPP_
