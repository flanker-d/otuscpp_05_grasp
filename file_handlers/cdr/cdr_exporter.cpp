#include <file_handlers/cdr/cdr_exporter.h>

void cdr_exporter::export_doc(document::ref doc)
{
  std::cout << "cdr_exporter: exported " << doc->get_name() << std::endl;
}
