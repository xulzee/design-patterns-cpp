//
// Created by xulzee on 2020/4/2.
//

#ifndef DESIGN_PATTERNS_CPP_DECORATOR_CONCRETE_COMPONENT_H_
#define DESIGN_PATTERNS_CPP_DECORATOR_CONCRETE_COMPONENT_H_

#include "component.h"

/*
 * Concrete Component
 * defines an object to which additional responsibilities
 * can be attached
 */
class ConcreteComponent : public Component {
 public:
  ~ConcreteComponent() override = default;
  void Operation() override;
};

#endif //DESIGN_PATTERNS_CPP_DECORATOR_CONCRETE_COMPONENT_H_
