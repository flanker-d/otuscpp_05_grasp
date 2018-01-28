#pragma once

#include <file_handlers/iimporter.h>

//!  svg_importer
/*!
  svg_importer class for import file from svg format to document
*/
class svg_importer : public iimporter
{
  public:
    document::ref import_doc(std::string name) override;
};
