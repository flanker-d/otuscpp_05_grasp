#include <file_handlers/svg/svg_importer.h>

document::ref svg_importer::import_doc(std::string name)
{
  std::cout << "svg_importer: imported " << name << std::endl;
  return std::make_shared<document>(name);
}
