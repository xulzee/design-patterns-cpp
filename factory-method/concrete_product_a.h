//
// Created by xulzee on 2020/4/12.
//

#ifndef DESIGN_PATTERNS_CPP_FACTORY_METHOD_CONCRETE_PRODUCT_A_H_
#define DESIGN_PATTERNS_CPP_FACTORY_METHOD_CONCRETE_PRODUCT_A_H_

#include "product.h"

/**
 * Product的实现类
 */
class ConcreteProductA : public Product {
 public:
  std::string GetName() override {
    return "type A";
  }

  ~ConcreteProductA() override = default;

};

#endif //DESIGN_PATTERNS_CPP_FACTORY_METHOD_CONCRETE_PRODUCT_A_H_
