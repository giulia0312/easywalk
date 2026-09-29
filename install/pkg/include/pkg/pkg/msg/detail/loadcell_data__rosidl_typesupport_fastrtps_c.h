// generated from rosidl_typesupport_fastrtps_c/resource/idl__rosidl_typesupport_fastrtps_c.h.em
// with input from pkg:msg/LoadcellData.idl
// generated code does not contain a copyright notice
#ifndef PKG__MSG__DETAIL__LOADCELL_DATA__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_
#define PKG__MSG__DETAIL__LOADCELL_DATA__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_


#include <stddef.h>
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "pkg/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "pkg/msg/detail/loadcell_data__struct.h"
#include "fastcdr/Cdr.h"

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_pkg
bool cdr_serialize_pkg__msg__LoadcellData(
  const pkg__msg__LoadcellData * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_pkg
bool cdr_deserialize_pkg__msg__LoadcellData(
  eprosima::fastcdr::Cdr &,
  pkg__msg__LoadcellData * ros_message);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_pkg
size_t get_serialized_size_pkg__msg__LoadcellData(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_pkg
size_t max_serialized_size_pkg__msg__LoadcellData(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_pkg
bool cdr_serialize_key_pkg__msg__LoadcellData(
  const pkg__msg__LoadcellData * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_pkg
size_t get_serialized_size_key_pkg__msg__LoadcellData(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_pkg
size_t max_serialized_size_key_pkg__msg__LoadcellData(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_pkg
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, pkg, msg, LoadcellData)();

#ifdef __cplusplus
}
#endif

#endif  // PKG__MSG__DETAIL__LOADCELL_DATA__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_
