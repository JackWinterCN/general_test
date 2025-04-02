
#include "impl_derived.hpp"

#include <iostream>

ImplDerived::ImplDerived() {
  std::cout << "ImplDerived constructor called" << std::endl;
}
ImplDerived::~ImplDerived() {
  std::cout << "ImplDerived destructor called" << std::endl;
}
void ImplDerived::PrintValue() { std::cout << "Value: " << data_ << std::endl; }

void ImplDerived::SetValue(const std::string &value) { data_ = value; }