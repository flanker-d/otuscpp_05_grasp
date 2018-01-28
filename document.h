#pragma once
#include <vector>

#include <primitives/iprimitive.h>

//!  document
/*!
  document class
*/
class document : public interface<document>
{
  public:
    document(const std::string& name_);
    void add_primitive(iprimitive::ref primitive_);
    void del_primitive(iprimitive::ref primitive_);
    std::string get_name();
    void set_name(const std::string& name_);

  private:
    std::string name;
    std::vector<iprimitive::ref> primitives;
};
