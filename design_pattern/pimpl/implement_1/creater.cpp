#include "creater.hpp"
#include "interface_derived.hpp"

InterfaceBase* CreateInterfaceBase() {
  return static_cast<InterfaceBase*>(new InterfaceDerived());
}