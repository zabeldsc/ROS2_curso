// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from pkg_interfaces:msg/HardwareStatus.idl
// generated code does not contain a copyright notice
#include "pkg_interfaces/msg/detail/hardware_status__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `debug_info`
#include "rosidl_runtime_c/string_functions.h"

bool
pkg_interfaces__msg__HardwareStatus__init(pkg_interfaces__msg__HardwareStatus * msg)
{
  if (!msg) {
    return false;
  }
  // temperature
  // are_motors_ready
  // debug_info
  if (!rosidl_runtime_c__String__init(&msg->debug_info)) {
    pkg_interfaces__msg__HardwareStatus__fini(msg);
    return false;
  }
  return true;
}

void
pkg_interfaces__msg__HardwareStatus__fini(pkg_interfaces__msg__HardwareStatus * msg)
{
  if (!msg) {
    return;
  }
  // temperature
  // are_motors_ready
  // debug_info
  rosidl_runtime_c__String__fini(&msg->debug_info);
}

bool
pkg_interfaces__msg__HardwareStatus__are_equal(const pkg_interfaces__msg__HardwareStatus * lhs, const pkg_interfaces__msg__HardwareStatus * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // temperature
  if (lhs->temperature != rhs->temperature) {
    return false;
  }
  // are_motors_ready
  if (lhs->are_motors_ready != rhs->are_motors_ready) {
    return false;
  }
  // debug_info
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->debug_info), &(rhs->debug_info)))
  {
    return false;
  }
  return true;
}

bool
pkg_interfaces__msg__HardwareStatus__copy(
  const pkg_interfaces__msg__HardwareStatus * input,
  pkg_interfaces__msg__HardwareStatus * output)
{
  if (!input || !output) {
    return false;
  }
  // temperature
  output->temperature = input->temperature;
  // are_motors_ready
  output->are_motors_ready = input->are_motors_ready;
  // debug_info
  if (!rosidl_runtime_c__String__copy(
      &(input->debug_info), &(output->debug_info)))
  {
    return false;
  }
  return true;
}

pkg_interfaces__msg__HardwareStatus *
pkg_interfaces__msg__HardwareStatus__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pkg_interfaces__msg__HardwareStatus * msg = (pkg_interfaces__msg__HardwareStatus *)allocator.allocate(sizeof(pkg_interfaces__msg__HardwareStatus), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(pkg_interfaces__msg__HardwareStatus));
  bool success = pkg_interfaces__msg__HardwareStatus__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
pkg_interfaces__msg__HardwareStatus__destroy(pkg_interfaces__msg__HardwareStatus * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    pkg_interfaces__msg__HardwareStatus__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
pkg_interfaces__msg__HardwareStatus__Sequence__init(pkg_interfaces__msg__HardwareStatus__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pkg_interfaces__msg__HardwareStatus * data = NULL;

  if (size) {
    data = (pkg_interfaces__msg__HardwareStatus *)allocator.zero_allocate(size, sizeof(pkg_interfaces__msg__HardwareStatus), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = pkg_interfaces__msg__HardwareStatus__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        pkg_interfaces__msg__HardwareStatus__fini(&data[i - 1]);
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
pkg_interfaces__msg__HardwareStatus__Sequence__fini(pkg_interfaces__msg__HardwareStatus__Sequence * array)
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
      pkg_interfaces__msg__HardwareStatus__fini(&array->data[i]);
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

pkg_interfaces__msg__HardwareStatus__Sequence *
pkg_interfaces__msg__HardwareStatus__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pkg_interfaces__msg__HardwareStatus__Sequence * array = (pkg_interfaces__msg__HardwareStatus__Sequence *)allocator.allocate(sizeof(pkg_interfaces__msg__HardwareStatus__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = pkg_interfaces__msg__HardwareStatus__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
pkg_interfaces__msg__HardwareStatus__Sequence__destroy(pkg_interfaces__msg__HardwareStatus__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    pkg_interfaces__msg__HardwareStatus__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
pkg_interfaces__msg__HardwareStatus__Sequence__are_equal(const pkg_interfaces__msg__HardwareStatus__Sequence * lhs, const pkg_interfaces__msg__HardwareStatus__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!pkg_interfaces__msg__HardwareStatus__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
pkg_interfaces__msg__HardwareStatus__Sequence__copy(
  const pkg_interfaces__msg__HardwareStatus__Sequence * input,
  pkg_interfaces__msg__HardwareStatus__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(pkg_interfaces__msg__HardwareStatus);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    pkg_interfaces__msg__HardwareStatus * data =
      (pkg_interfaces__msg__HardwareStatus *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!pkg_interfaces__msg__HardwareStatus__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          pkg_interfaces__msg__HardwareStatus__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!pkg_interfaces__msg__HardwareStatus__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
