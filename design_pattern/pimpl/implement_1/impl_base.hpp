#pragma once

#include <string>

// only expose functions
class ImplBase {
public:
  virtual void PrintValue() = 0;
  virtual void SetValue(const std::string &value) = 0;
};

