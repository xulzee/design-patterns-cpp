//
// Created by xulzee on 2020/4/2.
//

#ifndef DESIGN_PATTERNS_CPP_DECORATOR_CONCRETE_DECORATOR_B_H_
#define DESIGN_PATTERNS_CPP_DECORATOR_CONCRETE_DECORATOR_B_H_

#include "decorator.h"
class ConcreteDecoratorB : public Decorator{
 public:
  explicit ConcreteDecoratorB(Component *component);
  void Operation() override;
};

#endif //DESIGN_PATTERNS_CPP_DECORATOR_CONCRETE_DECORATOR_B_H_
