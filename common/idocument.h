#pragma once

#include <common/interface.h>
#include <common/iprimitive.h>

namespace common
{
  enum class file_type_e
  {
    cdr, //corel_draw
    svg
  };

  class idocument
   : public common::interface<idocument>
  {
    public:
      virtual file_type_e get_file_type() = 0;
      virtual std::size_t get_size() = 0;
      virtual std::string get_name() = 0;
      virtual void set_name(const std::string& a_file_name) = 0;
      virtual void add_primitive(iprimitive::ref a_primitive) = 0;
      virtual void del_primitive(iprimitive::ref a_primitive) = 0;
  };
} //namespace common

