//
// Created by xulzee on 2020/4/17.
//

#ifndef DESIGN_PATTERNS_CPP_ABSTRACT_FACTORY_CONCRETE_PRODUCT_A_Y_H_
#define DESIGN_PATTERNS_CPP_ABSTRACT_FACTORY_CONCRETE_PRODUCT_A_Y_H_

#include "product_a.h"

class ConcreteProductAY : public ProductA{
 public:
  std::string GetName() override {
    return "A-Y";
  }

};

#endif //DESIGN_PATTERNS_CPP_ABSTRACT_FACTORY_CONCRETE_PRODUCT_A_Y_H_
