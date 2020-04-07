//
// Created by xulzee on 2020/4/7.
//

#ifndef DESIGN_PATTERNS_CPP_BRIDGE_ABSTRACTION_H_
#define DESIGN_PATTERNS_CPP_BRIDGE_ABSTRACTION_H_
#include "implementor.h"

class Abstraction {
 protected:
  Implementor *implementor_;
 public:
  explicit Abstraction(Implementor *implementor) : implementor_(implementor) {}
 public:
  virtual ~Abstraction() = default;

  virtual void operation() = 0;
};

#endif //DESIGN_PATTERNS_CPP_BRIDGE_ABSTRACTION_H_
