// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from mypkg_interfaces:msg/MyCustom.idl
// generated code does not contain a copyright notice

#ifndef MYPKG_INTERFACES__MSG__DETAIL__MY_CUSTOM__STRUCT_HPP_
#define MYPKG_INTERFACES__MSG__DETAIL__MY_CUSTOM__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__mypkg_interfaces__msg__MyCustom __attribute__((deprecated))
#else
# define DEPRECATED__mypkg_interfaces__msg__MyCustom __declspec(deprecated)
#endif

namespace mypkg_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct MyCustom_
{
  using Type = MyCustom_<ContainerAllocator>;

  explicit MyCustom_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->data = "";
      this->valor_f = 0.0f;
      this->valor_i = 0l;
    }
  }

  explicit MyCustom_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : data(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->data = "";
      this->valor_f = 0.0f;
      this->valor_i = 0l;
    }
  }

  // field types and members
  using _data_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _data_type data;
  using _valor_f_type =
    float;
  _valor_f_type valor_f;
  using _valor_i_type =
    int32_t;
  _valor_i_type valor_i;

  // setters for named parameter idiom
  Type & set__data(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->data = _arg;
    return *this;
  }
  Type & set__valor_f(
    const float & _arg)
  {
    this->valor_f = _arg;
    return *this;
  }
  Type & set__valor_i(
    const int32_t & _arg)
  {
    this->valor_i = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    mypkg_interfaces::msg::MyCustom_<ContainerAllocator> *;
  using ConstRawPtr =
    const mypkg_interfaces::msg::MyCustom_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<mypkg_interfaces::msg::MyCustom_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<mypkg_interfaces::msg::MyCustom_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      mypkg_interfaces::msg::MyCustom_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<mypkg_interfaces::msg::MyCustom_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      mypkg_interfaces::msg::MyCustom_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<mypkg_interfaces::msg::MyCustom_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<mypkg_interfaces::msg::MyCustom_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<mypkg_interfaces::msg::MyCustom_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__mypkg_interfaces__msg__MyCustom
    std::shared_ptr<mypkg_interfaces::msg::MyCustom_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__mypkg_interfaces__msg__MyCustom
    std::shared_ptr<mypkg_interfaces::msg::MyCustom_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MyCustom_ & other) const
  {
    if (this->data != other.data) {
      return false;
    }
    if (this->valor_f != other.valor_f) {
      return false;
    }
    if (this->valor_i != other.valor_i) {
      return false;
    }
    return true;
  }
  bool operator!=(const MyCustom_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MyCustom_

// alias to use template instance with default allocator
using MyCustom =
  mypkg_interfaces::msg::MyCustom_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace mypkg_interfaces

#endif  // MYPKG_INTERFACES__MSG__DETAIL__MY_CUSTOM__STRUCT_HPP_
