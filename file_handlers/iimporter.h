#pragma once

//#include <file_handlers/ifile.h>
#include <document.h>

//!  iimporter
/*!
  base class for file importers
*/
class iimporter : public interface<iimporter>
{
  public:
    virtual document::ref import_doc(std::string name) = 0;
};
