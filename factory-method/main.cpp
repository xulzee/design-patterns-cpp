//
// Created by xulzee on 2020/3/28.
//
#include <iostream>

#include "creator.h"
#include "concrete_creator_a.h"
#include "concrete_creator_b.h"
#include "product.h"

int main() {
  Creator *creator = new ConcreteCreatorA();
  Product *product = creator->CreateProduct();
  std::cout << "Product: " << product->GetName() << std::endl;
  creator->RemoveProduct(product);

  creator = new ConcreteCreatorB();
  product = creator->CreateProduct();
  std::cout << "Product: " << product->GetName() << std::endl;
  creator->RemoveProduct(product);
  return 0;
}
