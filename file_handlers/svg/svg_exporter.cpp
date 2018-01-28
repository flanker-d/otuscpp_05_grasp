#include <file_handlers/svg/svg_exporter.h>

void svg_exporter::export_doc(document::ref doc)
{
  std::cout << "svg_exporter: exported " << doc->get_name() << std::endl;
}
