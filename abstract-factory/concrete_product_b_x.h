//
// Created by xulzee on 2020/4/17.
//

#ifndef DESIGN_PATTERNS_CPP_ABSTRACT_FACTORY_CONCRETE_PRODUCT_B_X_H_
#define DESIGN_PATTERNS_CPP_ABSTRACT_FACTORY_CONCRETE_PRODUCT_B_X_H_

#include "product_b.h"

class ConcreteProductBX : public ProductB{
 public:
  std::string GetName() override {
    return "B-X";
  }

};

#endif //DESIGN_PATTERNS_CPP_ABSTRACT_FACTORY_CONCRETE_PRODUCT_B_X_H_
