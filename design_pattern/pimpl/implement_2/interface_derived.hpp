#pragma once

#include <iostream>

#include "interface_base.hpp"

class InterfaceDerived : public InterfaceBase {
public:
  InterfaceDerived();
  ~InterfaceDerived();

  void PrintValue() override;
  void SetValue(const std::string &value) override;

private:
  int num_{0};
  std::string data_;
};