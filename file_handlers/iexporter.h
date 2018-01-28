#pragma once

//#include <file_handlers/ifile.h>
#include <document.h>

//!  iexporter
/*!
  base class for file exporters
*/
class iexporter : public interface<iexporter>
{
  public:
    virtual void export_doc(document::ref doc) = 0;
};
