//
// Created by xulzee on 2020/4/2.
//

#ifndef DESIGN_PATTERNS_CPP_DECORATOR_DECORATOR_H_
#define DESIGN_PATTERNS_CPP_DECORATOR_DECORATOR_H_

#include "component.h"

/*
 * Decorator
 * maintains a reference to a Component object and defines an interface
 * that conforms to Component's interface
 */
class Decorator : public Component {
 public:
  ~Decorator() override = default;
  explicit Decorator(Component *component);
  void Operation() override;
 private:
  Component *component_;
};

#endif //DESIGN_PATTERNS_CPP_DECORATOR_DECORATOR_H_
