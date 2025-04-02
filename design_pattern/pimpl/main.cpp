#include <iostream>
#include <string>
#include "creater.hpp"
#include "interface_base.hpp"

int main() {
  InterfaceBase *pBase = CreateInterfaceBase();
  pBase->SetValue("hello world");
  pBase->PrintValue();
  delete pBase;
  return 0;
}