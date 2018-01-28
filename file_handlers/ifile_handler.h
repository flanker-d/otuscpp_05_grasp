#pragma once

#include <file_handlers/iexporter.h>
#include <file_handlers/iimporter.h>

//!  ifile_handler
/*!
  base class for file_handler classes
*/
class ifile_handler : public interface<ifile_handler>
{
  public:
    virtual document::ref import_doc(std::string name) = 0;
    virtual void export_doc(document::ref doc) = 0;
  private:
    iimporter::ptr importer;
    iexporter::ptr exporter;
};
