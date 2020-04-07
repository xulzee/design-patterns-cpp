//
// Created by xulzee on 2020/4/7.
//

#ifndef DESIGN_PATTERNS_CPP_BRIDGE_CONCRETE_IMPLEMENTOR_A_H_
#define DESIGN_PATTERNS_CPP_BRIDGE_CONCRETE_IMPLEMENTOR_A_H_
#include "implementor.h"

/*
 * Concrete Implementors
 * implement the Implementor interface and define concrete implementations
 */
class ConcreteImplementorA : public Implementor {
 public:
  void action() override;
  ~ConcreteImplementorA() override;
};

#endif //DESIGN_PATTERNS_CPP_BRIDGE_CONCRETE_IMPLEMENTOR_A_H_
