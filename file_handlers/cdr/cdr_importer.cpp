#include <file_handlers/cdr/cdr_importer.h>

document::ref cdr_importer::import_doc(std::string name)
{
  std::cout << "cdr_importer: imported " << name << std::endl;
  return std::make_shared<document>(name);
}
