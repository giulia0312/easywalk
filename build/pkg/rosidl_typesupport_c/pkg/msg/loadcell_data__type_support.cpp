// generated from rosidl_typesupport_c/resource/idl__type_support.cpp.em
// with input from pkg:msg/LoadcellData.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "pkg/msg/detail/loadcell_data__struct.h"
#include "pkg/msg/detail/loadcell_data__type_support.h"
#include "pkg/msg/detail/loadcell_data__functions.h"
#include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/message_type_support_dispatch.h"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_c/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace pkg
{

namespace msg
{

namespace rosidl_typesupport_c
{

typedef struct _LoadcellData_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _LoadcellData_type_support_ids_t;

static const _LoadcellData_type_support_ids_t _LoadcellData_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _LoadcellData_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _LoadcellData_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _LoadcellData_type_support_symbol_names_t _LoadcellData_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, pkg, msg, LoadcellData)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, pkg, msg, LoadcellData)),
  }
};

typedef struct _LoadcellData_type_support_data_t
{
  void * data[2];
} _LoadcellData_type_support_data_t;

static _LoadcellData_type_support_data_t _LoadcellData_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _LoadcellData_message_typesupport_map = {
  2,
  "pkg",
  &_LoadcellData_message_typesupport_ids.typesupport_identifier[0],
  &_LoadcellData_message_typesupport_symbol_names.symbol_name[0],
  &_LoadcellData_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t LoadcellData_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_LoadcellData_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &pkg__msg__LoadcellData__get_type_hash,
  &pkg__msg__LoadcellData__get_type_description,
  &pkg__msg__LoadcellData__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace msg

}  // namespace pkg

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, pkg, msg, LoadcellData)() {
  return &::pkg::msg::rosidl_typesupport_c::LoadcellData_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
