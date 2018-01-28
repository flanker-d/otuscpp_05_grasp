#include <primitives/line.h>
#include <primitives/circle.h>
#include <primitives/rectangle.h>

iprimitive::ref create_primitive(primitive_type_e type)
{
  switch(type)
  {
  case primitive_type_e::line:
    std::cout << "create_primitive: line created" << std::endl;
    return std::make_shared<line>();
  case primitive_type_e::circle:
    std::cout << "create_primitive: circle created" << std::endl;
    return std::make_shared<circle>();
  case primitive_type_e::rectangle:
    std::cout << "create_primitive: rectangle created" << std::endl;
    return std::make_shared<rectangle>();
  default:
    return nullptr;
  }
}
