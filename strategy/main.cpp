//
// Created by xulzee on 2020/3/28.
//

#include "strategy.h"
#include "context.h"
#include "concrete_strategy_a.h"
#include "concrete_strategy_b.h"
#include "concrete_strategy_c.h"

int main() {
  Context context(new ConcreteStrategyB());
  context.ContextInterface();

  return 0;
}
