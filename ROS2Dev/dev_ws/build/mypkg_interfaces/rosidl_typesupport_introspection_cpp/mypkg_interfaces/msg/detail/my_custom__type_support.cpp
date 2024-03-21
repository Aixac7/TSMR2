// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from mypkg_interfaces:msg/MyCustom.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "mypkg_interfaces/msg/detail/my_custom__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace mypkg_interfaces
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void MyCustom_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) mypkg_interfaces::msg::MyCustom(_init);
}

void MyCustom_fini_function(void * message_memory)
{
  auto typed_message = static_cast<mypkg_interfaces::msg::MyCustom *>(message_memory);
  typed_message->~MyCustom();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember MyCustom_message_member_array[3] = {
  {
    "data",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mypkg_interfaces::msg::MyCustom, data),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "valor_f",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mypkg_interfaces::msg::MyCustom, valor_f),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "valor_i",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mypkg_interfaces::msg::MyCustom, valor_i),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers MyCustom_message_members = {
  "mypkg_interfaces::msg",  // message namespace
  "MyCustom",  // message name
  3,  // number of fields
  sizeof(mypkg_interfaces::msg::MyCustom),
  MyCustom_message_member_array,  // message members
  MyCustom_init_function,  // function to initialize message memory (memory has to be allocated)
  MyCustom_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t MyCustom_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &MyCustom_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace mypkg_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<mypkg_interfaces::msg::MyCustom>()
{
  return &::mypkg_interfaces::msg::rosidl_typesupport_introspection_cpp::MyCustom_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, mypkg_interfaces, msg, MyCustom)() {
  return &::mypkg_interfaces::msg::rosidl_typesupport_introspection_cpp::MyCustom_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
