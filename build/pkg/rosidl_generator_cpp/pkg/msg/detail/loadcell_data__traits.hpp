// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from pkg:msg/LoadcellData.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "pkg/msg/loadcell_data.hpp"


#ifndef PKG__MSG__DETAIL__LOADCELL_DATA__TRAITS_HPP_
#define PKG__MSG__DETAIL__LOADCELL_DATA__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "pkg/msg/detail/loadcell_data__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace pkg
{

namespace msg
{

inline void to_flow_style_yaml(
  const LoadcellData & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: left_outer
  {
    out << "left_outer: ";
    rosidl_generator_traits::value_to_yaml(msg.left_outer, out);
    out << ", ";
  }

  // member: left_inner
  {
    out << "left_inner: ";
    rosidl_generator_traits::value_to_yaml(msg.left_inner, out);
    out << ", ";
  }

  // member: right_inner
  {
    out << "right_inner: ";
    rosidl_generator_traits::value_to_yaml(msg.right_inner, out);
    out << ", ";
  }

  // member: right_outer
  {
    out << "right_outer: ";
    rosidl_generator_traits::value_to_yaml(msg.right_outer, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const LoadcellData & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: header
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "header:\n";
    to_block_style_yaml(msg.header, out, indentation + 2);
  }

  // member: left_outer
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "left_outer: ";
    rosidl_generator_traits::value_to_yaml(msg.left_outer, out);
    out << "\n";
  }

  // member: left_inner
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "left_inner: ";
    rosidl_generator_traits::value_to_yaml(msg.left_inner, out);
    out << "\n";
  }

  // member: right_inner
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "right_inner: ";
    rosidl_generator_traits::value_to_yaml(msg.right_inner, out);
    out << "\n";
  }

  // member: right_outer
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "right_outer: ";
    rosidl_generator_traits::value_to_yaml(msg.right_outer, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const LoadcellData & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace pkg

namespace rosidl_generator_traits
{

[[deprecated("use pkg::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const pkg::msg::LoadcellData & msg,
  std::ostream & out, size_t indentation = 0)
{
  pkg::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use pkg::msg::to_yaml() instead")]]
inline std::string to_yaml(const pkg::msg::LoadcellData & msg)
{
  return pkg::msg::to_yaml(msg);
}

template<>
inline const char * data_type<pkg::msg::LoadcellData>()
{
  return "pkg::msg::LoadcellData";
}

template<>
inline const char * name<pkg::msg::LoadcellData>()
{
  return "pkg/msg/LoadcellData";
}

template<>
struct has_fixed_size<pkg::msg::LoadcellData>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<pkg::msg::LoadcellData>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<pkg::msg::LoadcellData>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PKG__MSG__DETAIL__LOADCELL_DATA__TRAITS_HPP_
