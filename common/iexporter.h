#pragma once

#include <common/idocument.h>
#include <common/interface.h>
#include <string>

namespace common
{
  class iexporter
   : public common::interface<iexporter>
  {
    public:
      virtual void export_file(const std::string& a_path_to_file, idocument::ref a_doc) = 0;
  };
} //namespace common
