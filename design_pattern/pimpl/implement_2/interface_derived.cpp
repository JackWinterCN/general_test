#include "interface_derived.hpp"

InterfaceDerived::InterfaceDerived() {
  std::cout << "InterfaceDerived constructor" << std::endl;
}
InterfaceDerived::~InterfaceDerived() {
  std::cout << "InterfaceDerived destructor" << std::endl;
}

void InterfaceDerived::PrintValue() { std::cout << "Value: " << data_ << std::endl; }

void InterfaceDerived::SetValue(const std::string &value) { data_ = value; }