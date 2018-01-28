#pragma once

#include <primitives/iprimitive.h>

//!  circle
/*!
  Circle class
*/
class circle : public iprimitive
{
  public:
    circle(); //! constructor
    std::string get_type() override; //! return type "circle"
};
