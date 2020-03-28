//
// Created by xulzee on 2020/3/28.
//

#ifndef DESIGN_PATTERNS_CPP_STRATEGY_CONCRETE_STRATEGY_B_H_
#define DESIGN_PATTERNS_CPP_STRATEGY_CONCRETE_STRATEGY_B_H_

#include <iostream>
#include "strategy.h"
/*
 * Concrete Strategies
 * implement the algorithm using the Strategy interface
 */
class ConcreteStrategyB : public Strategy {
 public:
  ~ConcreteStrategyB() override = default;
  void AlgorithmInterface() override {
    std::cout << "Concrete Strategy B" << std::endl;
  }
};

#endif //DESIGN_PATTERNS_CPP_STRATEGY_CONCRETE_STRATEGY_B_H_
