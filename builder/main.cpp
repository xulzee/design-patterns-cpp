//
// Created by xulzee on 2020/3/28.
//

#include <iostream>

#include "director.h"
#include "concrete_builder_x.h"
#include "concrete_builder_y.h"

int main() {
  Director director;
  director.set_builder(new ConcreteBuilderX());
  director.construct();

  Product product = director.get();
  std::cout << "first product parts: " << product.get() << std::endl;

  director.set_builder(new ConcreteBuilderY());
  director.construct();

  product = director.get();
  std::cout << "second product parts: " << product.get() << std::endl;

  return 0;
}
