// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from mypkg_interfaces:msg/MyCustom.idl
// generated code does not contain a copyright notice
#include "mypkg_interfaces/msg/detail/my_custom__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `data`
#include "rosidl_runtime_c/string_functions.h"

bool
mypkg_interfaces__msg__MyCustom__init(mypkg_interfaces__msg__MyCustom * msg)
{
  if (!msg) {
    return false;
  }
  // data
  if (!rosidl_runtime_c__String__init(&msg->data)) {
    mypkg_interfaces__msg__MyCustom__fini(msg);
    return false;
  }
  // valor_f
  // valor_i
  return true;
}

void
mypkg_interfaces__msg__MyCustom__fini(mypkg_interfaces__msg__MyCustom * msg)
{
  if (!msg) {
    return;
  }
  // data
  rosidl_runtime_c__String__fini(&msg->data);
  // valor_f
  // valor_i
}

bool
mypkg_interfaces__msg__MyCustom__are_equal(const mypkg_interfaces__msg__MyCustom * lhs, const mypkg_interfaces__msg__MyCustom * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // data
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->data), &(rhs->data)))
  {
    return false;
  }
  // valor_f
  if (lhs->valor_f != rhs->valor_f) {
    return false;
  }
  // valor_i
  if (lhs->valor_i != rhs->valor_i) {
    return false;
  }
  return true;
}

bool
mypkg_interfaces__msg__MyCustom__copy(
  const mypkg_interfaces__msg__MyCustom * input,
  mypkg_interfaces__msg__MyCustom * output)
{
  if (!input || !output) {
    return false;
  }
  // data
  if (!rosidl_runtime_c__String__copy(
      &(input->data), &(output->data)))
  {
    return false;
  }
  // valor_f
  output->valor_f = input->valor_f;
  // valor_i
  output->valor_i = input->valor_i;
  return true;
}

mypkg_interfaces__msg__MyCustom *
mypkg_interfaces__msg__MyCustom__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mypkg_interfaces__msg__MyCustom * msg = (mypkg_interfaces__msg__MyCustom *)allocator.allocate(sizeof(mypkg_interfaces__msg__MyCustom), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(mypkg_interfaces__msg__MyCustom));
  bool success = mypkg_interfaces__msg__MyCustom__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
mypkg_interfaces__msg__MyCustom__destroy(mypkg_interfaces__msg__MyCustom * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    mypkg_interfaces__msg__MyCustom__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
mypkg_interfaces__msg__MyCustom__Sequence__init(mypkg_interfaces__msg__MyCustom__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mypkg_interfaces__msg__MyCustom * data = NULL;

  if (size) {
    data = (mypkg_interfaces__msg__MyCustom *)allocator.zero_allocate(size, sizeof(mypkg_interfaces__msg__MyCustom), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = mypkg_interfaces__msg__MyCustom__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        mypkg_interfaces__msg__MyCustom__fini(&data[i - 1]);
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
mypkg_interfaces__msg__MyCustom__Sequence__fini(mypkg_interfaces__msg__MyCustom__Sequence * array)
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
      mypkg_interfaces__msg__MyCustom__fini(&array->data[i]);
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

mypkg_interfaces__msg__MyCustom__Sequence *
mypkg_interfaces__msg__MyCustom__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mypkg_interfaces__msg__MyCustom__Sequence * array = (mypkg_interfaces__msg__MyCustom__Sequence *)allocator.allocate(sizeof(mypkg_interfaces__msg__MyCustom__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = mypkg_interfaces__msg__MyCustom__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
mypkg_interfaces__msg__MyCustom__Sequence__destroy(mypkg_interfaces__msg__MyCustom__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    mypkg_interfaces__msg__MyCustom__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
mypkg_interfaces__msg__MyCustom__Sequence__are_equal(const mypkg_interfaces__msg__MyCustom__Sequence * lhs, const mypkg_interfaces__msg__MyCustom__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!mypkg_interfaces__msg__MyCustom__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
mypkg_interfaces__msg__MyCustom__Sequence__copy(
  const mypkg_interfaces__msg__MyCustom__Sequence * input,
  mypkg_interfaces__msg__MyCustom__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(mypkg_interfaces__msg__MyCustom);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    mypkg_interfaces__msg__MyCustom * data =
      (mypkg_interfaces__msg__MyCustom *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!mypkg_interfaces__msg__MyCustom__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          mypkg_interfaces__msg__MyCustom__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!mypkg_interfaces__msg__MyCustom__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
