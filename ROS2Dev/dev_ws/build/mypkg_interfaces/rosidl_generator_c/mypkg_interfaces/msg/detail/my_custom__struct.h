// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from mypkg_interfaces:msg/MyCustom.idl
// generated code does not contain a copyright notice

#ifndef MYPKG_INTERFACES__MSG__DETAIL__MY_CUSTOM__STRUCT_H_
#define MYPKG_INTERFACES__MSG__DETAIL__MY_CUSTOM__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'data'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/MyCustom in the package mypkg_interfaces.
/**
  * Estructura del mensaje personalizado
  * geometry_msgs/msg/Pose2D pose2d
 */
typedef struct mypkg_interfaces__msg__MyCustom
{
  rosidl_runtime_c__String data;
  float valor_f;
  int32_t valor_i;
} mypkg_interfaces__msg__MyCustom;

// Struct for a sequence of mypkg_interfaces__msg__MyCustom.
typedef struct mypkg_interfaces__msg__MyCustom__Sequence
{
  mypkg_interfaces__msg__MyCustom * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mypkg_interfaces__msg__MyCustom__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MYPKG_INTERFACES__MSG__DETAIL__MY_CUSTOM__STRUCT_H_
