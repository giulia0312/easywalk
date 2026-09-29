// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from pkg:msg/LoadcellData.idl
// generated code does not contain a copyright notice
#include "pkg/msg/detail/loadcell_data__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"

bool
pkg__msg__LoadcellData__init(pkg__msg__LoadcellData * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    pkg__msg__LoadcellData__fini(msg);
    return false;
  }
  // left_outer
  // left_inner
  // right_inner
  // right_outer
  return true;
}

void
pkg__msg__LoadcellData__fini(pkg__msg__LoadcellData * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // left_outer
  // left_inner
  // right_inner
  // right_outer
}

bool
pkg__msg__LoadcellData__are_equal(const pkg__msg__LoadcellData * lhs, const pkg__msg__LoadcellData * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__are_equal(
      &(lhs->header), &(rhs->header)))
  {
    return false;
  }
  // left_outer
  if (lhs->left_outer != rhs->left_outer) {
    return false;
  }
  // left_inner
  if (lhs->left_inner != rhs->left_inner) {
    return false;
  }
  // right_inner
  if (lhs->right_inner != rhs->right_inner) {
    return false;
  }
  // right_outer
  if (lhs->right_outer != rhs->right_outer) {
    return false;
  }
  return true;
}

bool
pkg__msg__LoadcellData__copy(
  const pkg__msg__LoadcellData * input,
  pkg__msg__LoadcellData * output)
{
  if (!input || !output) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__copy(
      &(input->header), &(output->header)))
  {
    return false;
  }
  // left_outer
  output->left_outer = input->left_outer;
  // left_inner
  output->left_inner = input->left_inner;
  // right_inner
  output->right_inner = input->right_inner;
  // right_outer
  output->right_outer = input->right_outer;
  return true;
}

pkg__msg__LoadcellData *
pkg__msg__LoadcellData__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pkg__msg__LoadcellData * msg = (pkg__msg__LoadcellData *)allocator.allocate(sizeof(pkg__msg__LoadcellData), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(pkg__msg__LoadcellData));
  bool success = pkg__msg__LoadcellData__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
pkg__msg__LoadcellData__destroy(pkg__msg__LoadcellData * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    pkg__msg__LoadcellData__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
pkg__msg__LoadcellData__Sequence__init(pkg__msg__LoadcellData__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pkg__msg__LoadcellData * data = NULL;

  if (size) {
    data = (pkg__msg__LoadcellData *)allocator.zero_allocate(size, sizeof(pkg__msg__LoadcellData), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = pkg__msg__LoadcellData__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        pkg__msg__LoadcellData__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
pkg__msg__LoadcellData__Sequence__fini(pkg__msg__LoadcellData__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      pkg__msg__LoadcellData__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

pkg__msg__LoadcellData__Sequence *
pkg__msg__LoadcellData__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pkg__msg__LoadcellData__Sequence * array = (pkg__msg__LoadcellData__Sequence *)allocator.allocate(sizeof(pkg__msg__LoadcellData__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = pkg__msg__LoadcellData__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
pkg__msg__LoadcellData__Sequence__destroy(pkg__msg__LoadcellData__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    pkg__msg__LoadcellData__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
pkg__msg__LoadcellData__Sequence__are_equal(const pkg__msg__LoadcellData__Sequence * lhs, const pkg__msg__LoadcellData__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!pkg__msg__LoadcellData__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
pkg__msg__LoadcellData__Sequence__copy(
  const pkg__msg__LoadcellData__Sequence * input,
  pkg__msg__LoadcellData__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(pkg__msg__LoadcellData);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    pkg__msg__LoadcellData * data =
      (pkg__msg__LoadcellData *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!pkg__msg__LoadcellData__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          pkg__msg__LoadcellData__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!pkg__msg__LoadcellData__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
