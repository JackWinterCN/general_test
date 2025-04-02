#pragma once

#include "impl_base.hpp"

#include <string>

class ImplDerived : public ImplBase {
public:
  ImplDerived();
  ~ImplDerived();
  void PrintValue() override;
  void SetValue(const std::string &value) override;
  
private:
  std::string data_;
};
