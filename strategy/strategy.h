//
// Created by xulzee on 2020/3/28.
//

#ifndef DESIGN_PATTERNS_CPP_STRATEGY_STRATEGY_H_
#define DESIGN_PATTERNS_CPP_STRATEGY_STRATEGY_H_

/*
 * Strategy
 * declares an interface common to all supported algorithms
 */
class Strategy {
 public:
  virtual ~Strategy() = default;;
  virtual void AlgorithmInterface() = 0;
};

#endif //DESIGN_PATTERNS_CPP_STRATEGY_STRATEGY_H_
