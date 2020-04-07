//
// Created by xulzee on 2020/4/7.
//

#include <iostream>
#include "concrete_implementor_b.h"
void ConcreteImplementorB::action() {
  std::cout << "Concrete Implementor B" << std::endl;
}
ConcreteImplementorB::~ConcreteImplementorB() = default;
