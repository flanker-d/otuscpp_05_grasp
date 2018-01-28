#pragma once
#include <document.h>
#include <file_handlers/file_handlers.h>

//! workspace
/*!
  workspace class
*/
class workspace : public interface<workspace>
{
  public:
    workspace();
    document::ref create_document();
    void export_document(file_type_e type, document::ref doc);
    document::ref import_document(file_type_e type, const std::string& name);

  private:
    file_handlers::ptr fh;
};
