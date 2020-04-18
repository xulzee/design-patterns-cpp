//
// Created by xulzee on 2020/4/7.
//

#include "concrete_factory_x.h"
#include "concrete_factory_y.h"

#include <iostream>

int main() {
  auto *factory_x = new ConcreteFactoryX();
  auto *factory_y = new ConcreteFactoryY();

  ProductA *product_a = factory_x->CreateProductA();
  std::cout << "Product: " << product_a->GetName() << std::endl;

  ProductB *product_b = factory_y->CreateProductB();
  std::cout << "Product: " << product_b->GetName() << std::endl;

  delete product_a;
  delete product_b;

  delete factory_x;
  delete factory_y;

  return 0;
}
