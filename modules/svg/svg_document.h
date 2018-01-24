#pragma once

#include <common/idocument.h>
#include <iostream>
#include <vector>

namespace svg
{
  class svg_document
   : public common::idocument
  {
    public:
      svg_document()
      {
      }
      svg_document(const std::string& a_name)
       : m_name(a_name)
      {
      }
      common::file_type_e get_file_type() override
      {
        return m_type;
      }
      std::size_t get_size() override
      {
        std::cout << "size" << std::endl;
        return 1200;
      }
      std::string get_name() override
      {
        return m_name;
      }
      void set_name(const std::string& a_file_name) override
      {
        m_name = a_file_name;
      }
      void add_primitive(common::iprimitive::ref a_primitive) override
      {
        m_primitives.emplace_back(a_primitive);
      }
      void del_primitive(common::iprimitive::ref a_primitive) override
      {
        auto it = std::find(std::begin(m_primitives), std::end(m_primitives), a_primitive);
        if(it != std::end(m_primitives))
          m_primitives.erase(it);
      }
    private:
      std::string m_name;
      common::file_type_e m_type = common::file_type_e::svg;
      std::vector<common::iprimitive::ref> m_primitives;
  };
} //namespace common

