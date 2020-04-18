//
// Created by xulzee on 2020/4/17.
//

#ifndef DESIGN_PATTERNS_CPP_ABSTRACT_FACTORY_PRODUCT_B_H_
#define DESIGN_PATTERNS_CPP_ABSTRACT_FACTORY_PRODUCT_B_H_
#include <string>

/*
 * Product B
 * same as Product A, Product B declares interface for concrete products
 * where each can produce an entire set of products
 */
class ProductB {
 public:
  virtual ~ProductB() = default;

  virtual std::string GetName() = 0;
};

#endif //DESIGN_PATTERNS_CPP_ABSTRACT_FACTORY_PRODUCT_B_H_
