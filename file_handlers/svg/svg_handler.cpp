#include <file_handlers/svg/svg_handler.h>
#include <file_handlers/svg/svg_importer.h>
#include <file_handlers/svg/svg_exporter.h>

svg_handler::svg_handler()
  : importer(std::make_unique<svg_importer>())
  , exporter(std::make_unique<svg_exporter>())
{
}

document::ref svg_handler::import_doc(std::string name)
{
  return importer->import_doc(name);
}

void svg_handler::export_doc(document::ref doc)
{
  exporter->export_doc(doc);
}
