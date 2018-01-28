#include <file_handlers/file_handlers.h>
#include <file_handlers/cdr/cdr_handler.h>
#include <file_handlers/svg/svg_handler.h>

file_handlers::file_handlers()
{
  fh.emplace(std::make_pair(file_type_e::cdr, std::make_unique<cdr_handler>()));
  fh.emplace(std::make_pair(file_type_e::svg, std::make_unique<svg_handler>()));
}

document::ref file_handlers::import_doc(file_type_e type, std::string name)
{
  auto fh_it = fh.find(type);
  if(fh_it != fh.end())
    return fh_it->second->import_doc(name);
  else
    return nullptr;
}

void file_handlers::export_doc(file_type_e type, document::ref doc)
{
  auto fh_it = fh.find(type);
  if(fh_it != fh.end())
    return fh_it->second->export_doc(doc);
}
