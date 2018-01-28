#include <workspace.h>

int main(int argc, char** argv)
{
  workspace::ptr ws = std::make_unique<workspace>();

  std::cout << "---------------" << std::endl;
  std::cout << "first document" << std::endl;
  std::cout << "---------------" << std::endl;

  document::ref doc_1 = ws->create_document();

  doc_1->add_primitive(create_primitive(primitive_type_e::line));
  doc_1->add_primitive(create_primitive(primitive_type_e::circle));
  doc_1->add_primitive(create_primitive(primitive_type_e::rectangle));

  doc_1->set_name("doc_1.cdr");
  ws->export_document(file_type_e::cdr, doc_1);

  std::cout << "---------------" << std::endl;
  std::cout << "second document" << std::endl;
  std::cout << "---------------" << std::endl;

  document::ref doc_2 = ws->import_document(file_type_e::cdr, "doc2.cdr");

  doc_2->add_primitive(create_primitive(primitive_type_e::line));
  doc_2->add_primitive(create_primitive(primitive_type_e::circle));
  iprimitive::ref rect = create_primitive(primitive_type_e::rectangle);
  doc_2->add_primitive(rect);
  doc_2->del_primitive(rect);

  doc_2->set_name("doc_2.svg");
  ws->export_document(file_type_e::svg, doc_2);

  return 0;
}
