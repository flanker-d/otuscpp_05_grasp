#pragma once

#include <file_handlers/ifile_handler.h>

//!  svg_handler
/*!
  import and export of cdr files
*/
class svg_handler : public ifile_handler
{
  public:
    svg_handler();
    document::ref import_doc(std::string name) override;
    void export_doc(document::ref doc) override;
  private:
    iimporter::ptr importer;
    iexporter::ptr exporter;
};
