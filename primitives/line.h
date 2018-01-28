#pragma once

#include <primitives/iprimitive.h>

//!  line
/*!
  line class
*/
class line : public iprimitive
{
  public:
    line(); //! ctor
    std::string get_type() override; //! return type "line"
};
