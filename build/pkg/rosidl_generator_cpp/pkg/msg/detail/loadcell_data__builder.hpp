// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from pkg:msg/LoadcellData.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "pkg/msg/loadcell_data.hpp"


#ifndef PKG__MSG__DETAIL__LOADCELL_DATA__BUILDER_HPP_
#define PKG__MSG__DETAIL__LOADCELL_DATA__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "pkg/msg/detail/loadcell_data__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace pkg
{

namespace msg
{

namespace builder
{

class Init_LoadcellData_right_outer
{
public:
  explicit Init_LoadcellData_right_outer(::pkg::msg::LoadcellData & msg)
  : msg_(msg)
  {}
  ::pkg::msg::LoadcellData right_outer(::pkg::msg::LoadcellData::_right_outer_type arg)
  {
    msg_.right_outer = std::move(arg);
    return std::move(msg_);
  }

private:
  ::pkg::msg::LoadcellData msg_;
};

class Init_LoadcellData_right_inner
{
public:
  explicit Init_LoadcellData_right_inner(::pkg::msg::LoadcellData & msg)
  : msg_(msg)
  {}
  Init_LoadcellData_right_outer right_inner(::pkg::msg::LoadcellData::_right_inner_type arg)
  {
    msg_.right_inner = std::move(arg);
    return Init_LoadcellData_right_outer(msg_);
  }

private:
  ::pkg::msg::LoadcellData msg_;
};

class Init_LoadcellData_left_inner
{
public:
  explicit Init_LoadcellData_left_inner(::pkg::msg::LoadcellData & msg)
  : msg_(msg)
  {}
  Init_LoadcellData_right_inner left_inner(::pkg::msg::LoadcellData::_left_inner_type arg)
  {
    msg_.left_inner = std::move(arg);
    return Init_LoadcellData_right_inner(msg_);
  }

private:
  ::pkg::msg::LoadcellData msg_;
};

class Init_LoadcellData_left_outer
{
public:
  explicit Init_LoadcellData_left_outer(::pkg::msg::LoadcellData & msg)
  : msg_(msg)
  {}
  Init_LoadcellData_left_inner left_outer(::pkg::msg::LoadcellData::_left_outer_type arg)
  {
    msg_.left_outer = std::move(arg);
    return Init_LoadcellData_left_inner(msg_);
  }

private:
  ::pkg::msg::LoadcellData msg_;
};

class Init_LoadcellData_header
{
public:
  Init_LoadcellData_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_LoadcellData_left_outer header(::pkg::msg::LoadcellData::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_LoadcellData_left_outer(msg_);
  }

private:
  ::pkg::msg::LoadcellData msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::pkg::msg::LoadcellData>()
{
  return pkg::msg::builder::Init_LoadcellData_header();
}

}  // namespace pkg

#endif  // PKG__MSG__DETAIL__LOADCELL_DATA__BUILDER_HPP_
