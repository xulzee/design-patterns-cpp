//
// Created by xulzee on 2020/4/12.
//

#ifndef DESIGN_PATTERNS_CPP_FACTORY_METHOD_CONCRETE_CREATOR_A_H_
#define DESIGN_PATTERNS_CPP_FACTORY_METHOD_CONCRETE_CREATOR_A_H_

#include "creator.h"
#include "concrete_product_a.h"

class ConcreteCreatorA : public Creator {
 public:
  Product *CreateProduct() override {
    return new ConcreteProductA();
  }
};

#endif //DESIGN_PATTERNS_CPP_FACTORY_METHOD_CONCRETE_CREATOR_A_H_
