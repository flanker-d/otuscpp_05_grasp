#pragma once

#include <common/idocument.h>
#include <common/interface.h>
#include <string>

namespace common
{
  class ifile_creator 
   : public common::interface<ifile_creator>
  {
    public:
      virtual idocument::ref create_file(const std::string& a_path_to_file) = 0;
  };
} //namespace common
