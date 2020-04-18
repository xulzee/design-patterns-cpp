//
// Created by xulzee on 2020/4/17.
//

#ifndef DESIGN_PATTERNS_CPP_ABSTRACT_FACTORY_CONCRETE_PRODUCT_B_Y_H_
#define DESIGN_PATTERNS_CPP_ABSTRACT_FACTORY_CONCRETE_PRODUCT_B_Y_H_

#include "product_b.h"

class ConcreteProductBY : public ProductB{
 public:
  std::string GetName() override {
    return "B-Y";
  }

};

#endif //DESIGN_PATTERNS_CPP_ABSTRACT_FACTORY_CONCRETE_PRODUCT_B_Y_H_
