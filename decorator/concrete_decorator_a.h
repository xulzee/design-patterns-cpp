//
// Created by xulzee on 2020/4/2.
//

#ifndef DESIGN_PATTERNS_CPP_DECORATOR_CONCRETE_DECORATOR_A_H_
#define DESIGN_PATTERNS_CPP_DECORATOR_CONCRETE_DECORATOR_A_H_

#include "decorator.h"

/*
 * Concrete Decorators
 * add responsibilities to the component (can extend the state
 * of the component)
 */
class ConcreteDecoratorA : public Decorator {
 public:
  explicit ConcreteDecoratorA(Component *component);
  void Operation() override;
};

#endif //DESIGN_PATTERNS_CPP_DECORATOR_CONCRETE_DECORATOR_A_H_
