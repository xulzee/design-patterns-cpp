//
// Created by xulzee on 2020/3/28.
//

#ifndef DESIGN_PATTERNS_CPP_STRATEGY_CONCRETESTRATEGYA_H_
#define DESIGN_PATTERNS_CPP_STRATEGY_CONCRETESTRATEGYA_H_

#include "strategy.h"
#include <iostream>

/*
 * Concrete Strategies
 * implement the algorithm using the Strategy interface
 */
class ConcreteStrategyA : public Strategy {
 public:
  ~ConcreteStrategyA() override = default;
  void AlgorithmInterface() override {
    std::cout << "Concrete Strategy A" << std::endl;
  }
};

#endif //DESIGN_PATTERNS_CPP_STRATEGY_CONCRETESTRATEGYA_H_
