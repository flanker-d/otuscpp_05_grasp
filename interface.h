#pragma once

#include <memory>
#include <iostream>

//! line
/*!
  line class
*/
class interface_base
{
};

//! interface
/*!
  base interface class
*/
template<typename T, typename base = interface_base>
struct interface : virtual public base
{
  using ptr = std::unique_ptr<T>;
  using ref = std::shared_ptr<T>;

  virtual ~interface() = default;
};
