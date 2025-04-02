#pragma once

#include <iostream>

#include "impl_base.hpp"

class InterfaceBase {
public:
  InterfaceBase() {
    std::cout << "InterfaceBase constructor" << std::endl;
  };
  virtual ~InterfaceBase() {
    std::cout << "InterfaceBase destructor" << std::endl;
  };
  void PrintValue() {
    std::cout << "InterfaceBase::PrintValue" << std::endl;
    pImpl->PrintValue();
  }
  void SetValue(const std::string &value) {
    std::cout << "InterfaceBase::SetValue" << std::endl;
    pImpl->SetValue(value);
  }

protected:
  ImplBase *pImpl;
};