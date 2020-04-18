//
// Created by xulzee on 2020/4/17.
//

#ifndef DESIGN_PATTERNS_CPP_ABSTRACT_FACTORY_CONCRETE_FACTORY_Y_H_
#define DESIGN_PATTERNS_CPP_ABSTRACT_FACTORY_CONCRETE_FACTORY_Y_H_

#include "abstract_factory.h"
#include "concrete_product_a_y.h"
#include "concrete_product_b_y.h"
class ConcreteFactoryY : public AbstractFactory {
 public:
  ~ConcreteFactoryY() override = default;

  ProductA *CreateProductA() override {
    return new ConcreteProductAY();
  }
  ProductB *CreateProductB() override {
    return new ConcreteProductBY();
  }
};

#endif //DESIGN_PATTERNS_CPP_ABSTRACT_FACTORY_CONCRETE_FACTORY_Y_H_
