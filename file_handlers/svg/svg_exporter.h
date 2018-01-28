#pragma once

#include <file_handlers/iexporter.h>

//!  svg_exporter
/*!
  svg_exporter class for export file to svg format from document
*/
class svg_exporter : public iexporter
{
  public:
    void export_doc(document::ref doc) override;
};
