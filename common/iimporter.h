#pragma once

#include <common/idocument.h>
#include <common/interface.h>
#include <string>

namespace common
{
  class iimporter 
   : public common::interface<iimporter>
  {
    public:
      virtual idocument::ref import_file(const std::string& a_path_to_file) = 0;
  };
} //namespace common
