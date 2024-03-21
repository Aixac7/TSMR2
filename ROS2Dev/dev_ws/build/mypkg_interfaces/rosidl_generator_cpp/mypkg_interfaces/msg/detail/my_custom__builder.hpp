// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mypkg_interfaces:msg/MyCustom.idl
// generated code does not contain a copyright notice

#ifndef MYPKG_INTERFACES__MSG__DETAIL__MY_CUSTOM__BUILDER_HPP_
#define MYPKG_INTERFACES__MSG__DETAIL__MY_CUSTOM__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "mypkg_interfaces/msg/detail/my_custom__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace mypkg_interfaces
{

namespace msg
{

namespace builder
{

class Init_MyCustom_valor_i
{
public:
  explicit Init_MyCustom_valor_i(::mypkg_interfaces::msg::MyCustom & msg)
  : msg_(msg)
  {}
  ::mypkg_interfaces::msg::MyCustom valor_i(::mypkg_interfaces::msg::MyCustom::_valor_i_type arg)
  {
    msg_.valor_i = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mypkg_interfaces::msg::MyCustom msg_;
};

class Init_MyCustom_valor_f
{
public:
  explicit Init_MyCustom_valor_f(::mypkg_interfaces::msg::MyCustom & msg)
  : msg_(msg)
  {}
  Init_MyCustom_valor_i valor_f(::mypkg_interfaces::msg::MyCustom::_valor_f_type arg)
  {
    msg_.valor_f = std::move(arg);
    return Init_MyCustom_valor_i(msg_);
  }

private:
  ::mypkg_interfaces::msg::MyCustom msg_;
};

class Init_MyCustom_data
{
public:
  Init_MyCustom_data()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MyCustom_valor_f data(::mypkg_interfaces::msg::MyCustom::_data_type arg)
  {
    msg_.data = std::move(arg);
    return Init_MyCustom_valor_f(msg_);
  }

private:
  ::mypkg_interfaces::msg::MyCustom msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::mypkg_interfaces::msg::MyCustom>()
{
  return mypkg_interfaces::msg::builder::Init_MyCustom_data();
}

}  // namespace mypkg_interfaces

#endif  // MYPKG_INTERFACES__MSG__DETAIL__MY_CUSTOM__BUILDER_HPP_
