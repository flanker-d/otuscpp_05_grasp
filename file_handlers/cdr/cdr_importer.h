#pragma once

#include <file_handlers/iimporter.h>

//!  cdr_importer
/*!
  cdr_importer class for import file from cdr format to document
*/
class cdr_importer : public iimporter
{
  public:
    document::ref import_doc(std::string name) override;
};
