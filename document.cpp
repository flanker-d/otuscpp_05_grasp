#include <document.h>
#include <algorithm>

document::document(const std::string& name_)
  : name(name_)
{
}

void document::add_primitive(iprimitive::ref primitive_)
{
  std::cout << "document: added " << primitive_->get_type() << std::endl;
  primitives.push_back(primitive_);
}

void document::del_primitive(iprimitive::ref primitive_)
{
  auto to_del = std::find_if(primitives.begin(), primitives.end(), [primitive_](const auto& it) {
    if(it.get() == primitive_.get())
      return true;
    return false;
  });
  if(to_del != primitives.end())
  {
    primitives.erase(to_del);
    std::cout << "document: deleted " << primitive_->get_type() << std::endl;
  }
}

std::string document::get_name()
{
  return name;
}

void document::set_name(const std::string& name_)
{
  name = name_;
}
