//
// Created by xulzee on 2020/3/28.
//

#ifndef DESIGN_PATTERNS_CPP_STRATEGY_CONTEXT_H_
#define DESIGN_PATTERNS_CPP_STRATEGY_CONTEXT_H_

#include "strategy.h"
class Context {
 public:
  explicit Context(Strategy *strategy);
  ~Context();
  void ContextInterface();
 private:
  Strategy *strategy_;
};

#endif //DESIGN_PATTERNS_CPP_STRATEGY_CONTEXT_H_
