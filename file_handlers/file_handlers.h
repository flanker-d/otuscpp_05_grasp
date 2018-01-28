#pragma once

#include <file_handlers/ifile_handler.h>
#include <map>

//! file_type_e
/*!
  file type enumeration
*/
enum class file_type_e
{
  svg,
  cdr
};

//!  file_handler
/*!
  file_handler class
*/
class file_handlers : public interface<file_handlers>
{
  public:
    file_handlers();
    document::ref import_doc(file_type_e type, std::string name);
    void export_doc(file_type_e type, document::ref doc);
  private:
    std::map<file_type_e, ifile_handler::ptr> fh;
};
