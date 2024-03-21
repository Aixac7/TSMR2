// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__rosidl_typesupport_fastrtps_cpp.hpp.em
// with input from mypkg_interfaces:msg/MyCustom.idl
// generated code does not contain a copyright notice

#ifndef MYPKG_INTERFACES__MSG__DETAIL__MY_CUSTOM__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
#define MYPKG_INTERFACES__MSG__DETAIL__MY_CUSTOM__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_

#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "mypkg_interfaces/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
#include "mypkg_interfaces/msg/detail/my_custom__struct.hpp"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

#include "fastcdr/Cdr.h"

namespace mypkg_interfaces
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_mypkg_interfaces
cdr_serialize(
  const mypkg_interfaces::msg::MyCustom & ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_mypkg_interfaces
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  mypkg_interfaces::msg::MyCustom & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_mypkg_interfaces
get_serialized_size(
  const mypkg_interfaces::msg::MyCustom & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_mypkg_interfaces
max_serialized_size_MyCustom(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace mypkg_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_mypkg_interfaces
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, mypkg_interfaces, msg, MyCustom)();

#ifdef __cplusplus
}
#endif

#endif  // MYPKG_INTERFACES__MSG__DETAIL__MY_CUSTOM__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
