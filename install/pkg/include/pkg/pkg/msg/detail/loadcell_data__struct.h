// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from pkg:msg/LoadcellData.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "pkg/msg/loadcell_data.h"


#ifndef PKG__MSG__DETAIL__LOADCELL_DATA__STRUCT_H_
#define PKG__MSG__DETAIL__LOADCELL_DATA__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"

/// Struct defined in msg/LoadcellData in the package pkg.
typedef struct pkg__msg__LoadcellData
{
  /// contains timestamp and frame_id
  std_msgs__msg__Header header;
  double left_outer;
  double left_inner;
  double right_inner;
  double right_outer;
} pkg__msg__LoadcellData;

// Struct for a sequence of pkg__msg__LoadcellData.
typedef struct pkg__msg__LoadcellData__Sequence
{
  pkg__msg__LoadcellData * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} pkg__msg__LoadcellData__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PKG__MSG__DETAIL__LOADCELL_DATA__STRUCT_H_
