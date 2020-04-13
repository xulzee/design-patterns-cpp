//
// Created by xulzee on 2020/4/12.
//

#ifndef DESIGN_PATTERNS_CPP_FACTORY_METHOD_CONCRETE_CREATOR_B_H_
#define DESIGN_PATTERNS_CPP_FACTORY_METHOD_CONCRETE_CREATOR_B_H_

#include "creator.h"
#include "concrete_product_b.h"

class ConcreteCreatorB : public Creator {
 public:
  Product *CreateProduct() override {
    return new ConcreteProductB();
  }
};

#endif //DESIGN_PATTERNS_CPP_FACTORY_METHOD_CONCRETE_CREATOR_B_H_
