#pragma once

#include <file_handlers/iexporter.h>

//!  cdr_exporter
/*!
  cdr_exporter class for export file to cdr format from document
*/
class cdr_exporter : public iexporter
{
  public:
    void export_doc(document::ref doc) override;
};
