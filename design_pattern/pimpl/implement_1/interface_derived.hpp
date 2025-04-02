#pragma once

#include <iostream>

#include "interface_base.hpp"
#include "impl_derived.hpp"

class InterfaceDerived : public InterfaceBase {
public:
  InterfaceDerived();
  ~InterfaceDerived();

private:
  int num_{0};
};