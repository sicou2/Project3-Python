// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from project3_interfaces:msg/PersonCandidates.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "project3_interfaces/msg/detail/person_candidates__functions.h"
#include "project3_interfaces/msg/detail/person_candidates__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace project3_interfaces
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void PersonCandidates_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) project3_interfaces::msg::PersonCandidates(_init);
}

void PersonCandidates_fini_function(void * message_memory)
{
  auto typed_message = static_cast<project3_interfaces::msg::PersonCandidates *>(message_memory);
  typed_message->~PersonCandidates();
}

size_t size_function__PersonCandidates__positions(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<geometry_msgs::msg::Point> *>(untyped_member);
  return member->size();
}

const void * get_const_function__PersonCandidates__positions(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<geometry_msgs::msg::Point> *>(untyped_member);
  return &member[index];
}

void * get_function__PersonCandidates__positions(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<geometry_msgs::msg::Point> *>(untyped_member);
  return &member[index];
}

void fetch_function__PersonCandidates__positions(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const geometry_msgs::msg::Point *>(
    get_const_function__PersonCandidates__positions(untyped_member, index));
  auto & value = *reinterpret_cast<geometry_msgs::msg::Point *>(untyped_value);
  value = item;
}

void assign_function__PersonCandidates__positions(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<geometry_msgs::msg::Point *>(
    get_function__PersonCandidates__positions(untyped_member, index));
  const auto & value = *reinterpret_cast<const geometry_msgs::msg::Point *>(untyped_value);
  item = value;
}

void resize_function__PersonCandidates__positions(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<geometry_msgs::msg::Point> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember PersonCandidates_message_member_array[1] = {
  {
    "positions",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<geometry_msgs::msg::Point>(),  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(project3_interfaces::msg::PersonCandidates, positions),  // bytes offset in struct
    nullptr,  // default value
    size_function__PersonCandidates__positions,  // size() function pointer
    get_const_function__PersonCandidates__positions,  // get_const(index) function pointer
    get_function__PersonCandidates__positions,  // get(index) function pointer
    fetch_function__PersonCandidates__positions,  // fetch(index, &value) function pointer
    assign_function__PersonCandidates__positions,  // assign(index, value) function pointer
    resize_function__PersonCandidates__positions  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers PersonCandidates_message_members = {
  "project3_interfaces::msg",  // message namespace
  "PersonCandidates",  // message name
  1,  // number of fields
  sizeof(project3_interfaces::msg::PersonCandidates),
  false,  // has_any_key_member_
  PersonCandidates_message_member_array,  // message members
  PersonCandidates_init_function,  // function to initialize message memory (memory has to be allocated)
  PersonCandidates_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t PersonCandidates_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &PersonCandidates_message_members,
  get_message_typesupport_handle_function,
  &project3_interfaces__msg__PersonCandidates__get_type_hash,
  &project3_interfaces__msg__PersonCandidates__get_type_description,
  &project3_interfaces__msg__PersonCandidates__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace project3_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<project3_interfaces::msg::PersonCandidates>()
{
  return &::project3_interfaces::msg::rosidl_typesupport_introspection_cpp::PersonCandidates_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, project3_interfaces, msg, PersonCandidates)() {
  return &::project3_interfaces::msg::rosidl_typesupport_introspection_cpp::PersonCandidates_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
