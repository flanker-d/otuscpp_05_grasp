#pragma once

#include <common/interface.h>

namespace common
{
  enum class primitive_e
  {
    line,
    triangle,
    rectangle,
    circle,
    polygon,
    text
  };

  class iprimitive
   : public common::interface<iprimitive>
  {
    public:
      virtual primitive_e get_primitive_type() = 0;
      virtual void set_primitive_type(primitive_e a_primitive_type) = 0;
      virtual std::string get_name() = 0;
      virtual void set_name(const std::string& a_file_name) = 0;
      virtual void add_child(iprimitive::ref a_child) = 0;
  };
} //namespace common

