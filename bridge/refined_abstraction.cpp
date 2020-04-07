//
// Created by xulzee on 2020/4/7.
//

#include "refined_abstraction.h"
RefinedAbstraction::RefinedAbstraction(Implementor *implementor) : Abstraction(implementor) {}
void RefinedAbstraction::operation() {
  implementor_->action();
}
