//
// Created by xulzee on 2020/4/17.
//

#ifndef DESIGN_PATTERNS_CPP_ABSTRACT_FACTORY_PRODUCT_A_H_
#define DESIGN_PATTERNS_CPP_ABSTRACT_FACTORY_PRODUCT_A_H_
#include <string>

/*
 * Product A
 * products implement the same interface so that the classes can refer
 * to the interface not the concrete product
 */
class ProductA {
 public:
  virtual ~ProductA() = default;

  virtual std::string GetName() = 0;
};

#endif //DESIGN_PATTERNS_CPP_ABSTRACT_FACTORY_PRODUCT_A_H_
