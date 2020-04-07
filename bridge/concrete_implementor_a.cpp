//
// Created by xulzee on 2020/4/7.
//

#include "concrete_implementor_a.h"
#include <iostream>
void ConcreteImplementorA::action() {
  std::cout << "Concrete Implementor A" << std::endl;
}
ConcreteImplementorA::~ConcreteImplementorA() = default;
