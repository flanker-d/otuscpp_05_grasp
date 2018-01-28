#include <file_handlers/cdr/cdr_handler.h>
#include <file_handlers/cdr/cdr_importer.h>
#include <file_handlers/cdr/cdr_exporter.h>

cdr_handler::cdr_handler()
  : importer(std::make_unique<cdr_importer>())
  , exporter(std::make_unique<cdr_exporter>())
{
}

document::ref cdr_handler::import_doc(std::string name)
{
  return importer->import_doc(name);
}

void cdr_handler::export_doc(document::ref doc)
{
  exporter->export_doc(doc);
}
