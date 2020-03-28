//
// Created by xulzee on 2020/3/28.
//

#include "context.h"
Context::Context(Strategy *const strategy) : strategy_(strategy) {}

Context::~Context() {
  delete strategy_;
}

void Context::ContextInterface() {
  strategy_->AlgorithmInterface();
}

