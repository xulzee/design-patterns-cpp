//
// Created by xulzee on 2020/4/7.
//

#ifndef DESIGN_PATTERNS_CPP_BRIDGE_CONCRETE_IMPLEMENTOR_B_H_
#define DESIGN_PATTERNS_CPP_BRIDGE_CONCRETE_IMPLEMENTOR_B_H_

#include "implementor.h"
/*
 * Concrete Implementors
 * implement the Implementor interface and define concrete implementations
 */
class ConcreteImplementorB : public Implementor {
 public:
  void action() override;
  ~ConcreteImplementorB() override;
};

#endif //DESIGN_PATTERNS_CPP_BRIDGE_CONCRETE_IMPLEMENTOR_B_H_
