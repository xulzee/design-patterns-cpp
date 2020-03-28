//
// Created by xulzee on 2020/3/28.
//

#ifndef DESIGN_PATTERNS_CPP_STRATEGY_CONCRETE_STRATEGY_C_H_
#define DESIGN_PATTERNS_CPP_STRATEGY_CONCRETE_STRATEGY_C_H_

#include <iostream>
#include "strategy.h"
/*
 * Concrete Strategies
 * implement the algorithm using the Strategy interface
 */
class ConcreteStrategyC : public Strategy {
 public:
  ~ConcreteStrategyC() override = default;
  void AlgorithmInterface() override {
    std::cout << "Concrete Strategy C" << std::endl;
  }
};

#endif //DESIGN_PATTERNS_CPP_STRATEGY_CONCRETE_STRATEGY_C_H_
