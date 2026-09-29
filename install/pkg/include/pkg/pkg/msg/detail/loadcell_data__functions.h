// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from pkg:msg/LoadcellData.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "pkg/msg/loadcell_data.h"


#ifndef PKG__MSG__DETAIL__LOADCELL_DATA__FUNCTIONS_H_
#define PKG__MSG__DETAIL__LOADCELL_DATA__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/action_type_support_struct.h"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_runtime_c/service_type_support_struct.h"
#include "rosidl_runtime_c/type_description/type_description__struct.h"
#include "rosidl_runtime_c/type_description/type_source__struct.h"
#include "rosidl_runtime_c/type_hash.h"
#include "rosidl_runtime_c/visibility_control.h"
#include "pkg/msg/rosidl_generator_c__visibility_control.h"

#include "pkg/msg/detail/loadcell_data__struct.h"

/// Initialize msg/LoadcellData message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * pkg__msg__LoadcellData
 * )) before or use
 * pkg__msg__LoadcellData__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_pkg
bool
pkg__msg__LoadcellData__init(pkg__msg__LoadcellData * msg);

/// Finalize msg/LoadcellData message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_pkg
void
pkg__msg__LoadcellData__fini(pkg__msg__LoadcellData * msg);

/// Create msg/LoadcellData message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * pkg__msg__LoadcellData__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_pkg
pkg__msg__LoadcellData *
pkg__msg__LoadcellData__create(void);

/// Destroy msg/LoadcellData message.
/**
 * It calls
 * pkg__msg__LoadcellData__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_pkg
void
pkg__msg__LoadcellData__destroy(pkg__msg__LoadcellData * msg);

/// Check for msg/LoadcellData message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_pkg
bool
pkg__msg__LoadcellData__are_equal(const pkg__msg__LoadcellData * lhs, const pkg__msg__LoadcellData * rhs);

/// Copy a msg/LoadcellData message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_pkg
bool
pkg__msg__LoadcellData__copy(
  const pkg__msg__LoadcellData * input,
  pkg__msg__LoadcellData * output);

/// Retrieve pointer to the hash of the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_pkg
const rosidl_type_hash_t *
pkg__msg__LoadcellData__get_type_hash(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_pkg
const rosidl_runtime_c__type_description__TypeDescription *
pkg__msg__LoadcellData__get_type_description(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the single raw source text that defined this type.
ROSIDL_GENERATOR_C_PUBLIC_pkg
const rosidl_runtime_c__type_description__TypeSource *
pkg__msg__LoadcellData__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the recursive raw sources that defined the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_pkg
const rosidl_runtime_c__type_description__TypeSource__Sequence *
pkg__msg__LoadcellData__get_type_description_sources(
  const rosidl_message_type_support_t * type_support);

/// Initialize array of msg/LoadcellData messages.
/**
 * It allocates the memory for the number of elements and calls
 * pkg__msg__LoadcellData__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_pkg
bool
pkg__msg__LoadcellData__Sequence__init(pkg__msg__LoadcellData__Sequence * array, size_t size);

/// Finalize array of msg/LoadcellData messages.
/**
 * It calls
 * pkg__msg__LoadcellData__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_pkg
void
pkg__msg__LoadcellData__Sequence__fini(pkg__msg__LoadcellData__Sequence * array);

/// Create array of msg/LoadcellData messages.
/**
 * It allocates the memory for the array and calls
 * pkg__msg__LoadcellData__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_pkg
pkg__msg__LoadcellData__Sequence *
pkg__msg__LoadcellData__Sequence__create(size_t size);

/// Destroy array of msg/LoadcellData messages.
/**
 * It calls
 * pkg__msg__LoadcellData__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_pkg
void
pkg__msg__LoadcellData__Sequence__destroy(pkg__msg__LoadcellData__Sequence * array);

/// Check for msg/LoadcellData message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_pkg
bool
pkg__msg__LoadcellData__Sequence__are_equal(const pkg__msg__LoadcellData__Sequence * lhs, const pkg__msg__LoadcellData__Sequence * rhs);

/// Copy an array of msg/LoadcellData messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_pkg
bool
pkg__msg__LoadcellData__Sequence__copy(
  const pkg__msg__LoadcellData__Sequence * input,
  pkg__msg__LoadcellData__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // PKG__MSG__DETAIL__LOADCELL_DATA__FUNCTIONS_H_
