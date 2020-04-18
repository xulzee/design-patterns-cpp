//
// Created by xulzee on 2020/4/17.
//

#ifndef DESIGN_PATTERNS_CPP_ABSTRACT_FACTORY_CONCRETE_PRODUCT_A_X_H_
#define DESIGN_PATTERNS_CPP_ABSTRACT_FACTORY_CONCRETE_PRODUCT_A_X_H_

#include "product_a.h"

class ConcreteProductAX : public ProductA{
 public:
  std::string GetName() override {
    return "A-X";
  }

};

#endif //DESIGN_PATTERNS_CPP_ABSTRACT_FACTORY_CONCRETE_PRODUCT_A_X_H_
