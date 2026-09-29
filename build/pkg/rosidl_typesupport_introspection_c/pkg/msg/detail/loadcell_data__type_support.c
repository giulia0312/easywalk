// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from pkg:msg/LoadcellData.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "pkg/msg/detail/loadcell_data__rosidl_typesupport_introspection_c.h"
#include "pkg/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "pkg/msg/detail/loadcell_data__functions.h"
#include "pkg/msg/detail/loadcell_data__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void pkg__msg__LoadcellData__rosidl_typesupport_introspection_c__LoadcellData_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  pkg__msg__LoadcellData__init(message_memory);
}

void pkg__msg__LoadcellData__rosidl_typesupport_introspection_c__LoadcellData_fini_function(void * message_memory)
{
  pkg__msg__LoadcellData__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember pkg__msg__LoadcellData__rosidl_typesupport_introspection_c__LoadcellData_message_member_array[5] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(pkg__msg__LoadcellData, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "left_outer",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(pkg__msg__LoadcellData, left_outer),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "left_inner",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(pkg__msg__LoadcellData, left_inner),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "right_inner",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(pkg__msg__LoadcellData, right_inner),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "right_outer",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(pkg__msg__LoadcellData, right_outer),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers pkg__msg__LoadcellData__rosidl_typesupport_introspection_c__LoadcellData_message_members = {
  "pkg__msg",  // message namespace
  "LoadcellData",  // message name
  5,  // number of fields
  sizeof(pkg__msg__LoadcellData),
  false,  // has_any_key_member_
  pkg__msg__LoadcellData__rosidl_typesupport_introspection_c__LoadcellData_message_member_array,  // message members
  pkg__msg__LoadcellData__rosidl_typesupport_introspection_c__LoadcellData_init_function,  // function to initialize message memory (memory has to be allocated)
  pkg__msg__LoadcellData__rosidl_typesupport_introspection_c__LoadcellData_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t pkg__msg__LoadcellData__rosidl_typesupport_introspection_c__LoadcellData_message_type_support_handle = {
  0,
  &pkg__msg__LoadcellData__rosidl_typesupport_introspection_c__LoadcellData_message_members,
  get_message_typesupport_handle_function,
  &pkg__msg__LoadcellData__get_type_hash,
  &pkg__msg__LoadcellData__get_type_description,
  &pkg__msg__LoadcellData__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_pkg
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, pkg, msg, LoadcellData)() {
  pkg__msg__LoadcellData__rosidl_typesupport_introspection_c__LoadcellData_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  if (!pkg__msg__LoadcellData__rosidl_typesupport_introspection_c__LoadcellData_message_type_support_handle.typesupport_identifier) {
    pkg__msg__LoadcellData__rosidl_typesupport_introspection_c__LoadcellData_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &pkg__msg__LoadcellData__rosidl_typesupport_introspection_c__LoadcellData_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
