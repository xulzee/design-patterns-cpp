//
// Created by xulzee on 2020/3/28.
//

#include <iostream>

#include "concrete_prototype_a.h"
#include "concrete_prototype_b.h"

int main() {
  Prototype *prototype_a = new ConcretePrototypeA();
  prototype_a->run();
  Prototype *prototype_b = new ConcretePrototypeB();
  prototype_b->run();

  Prototype *x = prototype_a->clone();
  std::cout << x->type() << std::endl;
  Prototype *y = prototype_b->clone();
  std::cout << y->type() << std::endl;

  return 0;
}
