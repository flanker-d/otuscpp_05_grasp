#pragma once

#include <primitives/iprimitive.h>

//!  rectangle
/*!
  rectangle class
*/
class rectangle : public iprimitive
{
  public:
    rectangle(); //! ctor
    std::string get_type() override; //! return type "rectangle"
};
