#pragma once

#include <file_handlers/ifile_handler.h>

//!  cdr_handler
/*!
  import and export of cdr files
*/
class cdr_handler : public ifile_handler
{
  public:
    cdr_handler();
    document::ref import_doc(std::string name) override;
    void export_doc(document::ref doc) override;
  private:
    iimporter::ptr importer;
    iexporter::ptr exporter;
};
