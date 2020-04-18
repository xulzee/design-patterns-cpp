//
// Created by xulzee on 2020/4/17.
//

#ifndef DESIGN_PATTERNS_CPP_ABSTRACT_FACTORY_ABSTRACT_FACTORY_H_
#define DESIGN_PATTERNS_CPP_ABSTRACT_FACTORY_ABSTRACT_FACTORY_H_
#include "product_a.h"
#include "product_b.h"
class AbstractFactory {
 public:
  virtual ~AbstractFactory() = default;

  virtual ProductA *CreateProductA() = 0;
  virtual ProductB *CreateProductB() = 0;
};

#endif //DESIGN_PATTERNS_CPP_ABSTRACT_FACTORY_ABSTRACT_FACTORY_H_
