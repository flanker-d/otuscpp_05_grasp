#include <workspace.h>

workspace::workspace()
  : fh(std::make_unique<file_handlers>())
{
}

document::ref workspace::create_document()
{
  std::cout << "workspace: create new document" << std::endl;
  return std::make_shared<document>("new");
}

void workspace::export_document(file_type_e type, document::ref doc)
{
  std::cout << "workspace: exoprt document" << std::endl;
  fh->export_doc(type, doc);
}

document::ref workspace::import_document(file_type_e type, const std::string& name)
{
  std::cout << "workspace: import document" << std::endl;
  return fh->import_doc(type, name);
}
