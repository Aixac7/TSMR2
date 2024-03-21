// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from mypkg_interfaces:msg/MyCustom.idl
// generated code does not contain a copyright notice

#ifndef MYPKG_INTERFACES__MSG__DETAIL__MY_CUSTOM__TRAITS_HPP_
#define MYPKG_INTERFACES__MSG__DETAIL__MY_CUSTOM__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "mypkg_interfaces/msg/detail/my_custom__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace mypkg_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const MyCustom & msg,
  std::ostream & out)
{
  out << "{";
  // member: data
  {
    out << "data: ";
    rosidl_generator_traits::value_to_yaml(msg.data, out);
    out << ", ";
  }

  // member: valor_f
  {
    out << "valor_f: ";
    rosidl_generator_traits::value_to_yaml(msg.valor_f, out);
    out << ", ";
  }

  // member: valor_i
  {
    out << "valor_i: ";
    rosidl_generator_traits::value_to_yaml(msg.valor_i, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MyCustom & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: data
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "data: ";
    rosidl_generator_traits::value_to_yaml(msg.data, out);
    out << "\n";
  }

  // member: valor_f
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "valor_f: ";
    rosidl_generator_traits::value_to_yaml(msg.valor_f, out);
    out << "\n";
  }

  // member: valor_i
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "valor_i: ";
    rosidl_generator_traits::value_to_yaml(msg.valor_i, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MyCustom & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace mypkg_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use mypkg_interfaces::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const mypkg_interfaces::msg::MyCustom & msg,
  std::ostream & out, size_t indentation = 0)
{
  mypkg_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use mypkg_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const mypkg_interfaces::msg::MyCustom & msg)
{
  return mypkg_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<mypkg_interfaces::msg::MyCustom>()
{
  return "mypkg_interfaces::msg::MyCustom";
}

template<>
inline const char * name<mypkg_interfaces::msg::MyCustom>()
{
  return "mypkg_interfaces/msg/MyCustom";
}

template<>
struct has_fixed_size<mypkg_interfaces::msg::MyCustom>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<mypkg_interfaces::msg::MyCustom>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<mypkg_interfaces::msg::MyCustom>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MYPKG_INTERFACES__MSG__DETAIL__MY_CUSTOM__TRAITS_HPP_
