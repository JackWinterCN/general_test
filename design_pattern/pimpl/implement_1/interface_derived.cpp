#include "interface_derived.hpp"

InterfaceDerived::InterfaceDerived() {
  std::cout << "InterfaceDerived constructor" << std::endl;
  pImpl = new ImplDerived();
}
InterfaceDerived::~InterfaceDerived() {
  std::cout << "InterfaceDerived destructor" << std::endl;
  delete pImpl;
}
