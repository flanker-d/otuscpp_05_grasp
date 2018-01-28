#pragma once

#include <interface.h>

//! primitive_type_e
/*!
  primitive type enumeration
*/
enum class primitive_type_e
{
  line,
  circle,
  rectangle,
};

//! iprimitive
/*!
  base interface for all primitives
*/
class iprimitive : public interface<iprimitive>
{
  public:
    virtual std::string get_type() = 0;
};

//! create_primitive
/*!
  factory method for creates primitives
*/
iprimitive::ref create_primitive(primitive_type_e type);
