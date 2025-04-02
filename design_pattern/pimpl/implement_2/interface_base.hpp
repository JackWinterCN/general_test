#pragma once

#include <iostream>

class InterfaceBase {
public:
  InterfaceBase() = default;
  virtual ~InterfaceBase() = default;
  virtual void PrintValue() = 0;
  virtual void SetValue(const std::string &value) = 0;
};