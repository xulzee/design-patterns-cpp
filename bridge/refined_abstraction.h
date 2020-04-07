//
// Created by xulzee on 2020/4/7.
//

#ifndef DESIGN_PATTERNS_CPP_BRIDGE_REFINEDABSTRACTION_H_
#define DESIGN_PATTERNS_CPP_BRIDGE_REFINEDABSTRACTION_H_

#include "abstraction.h"

class RefinedAbstraction : public Abstraction {
 public:
  explicit RefinedAbstraction(Implementor *implementor);
  void operation() override;
};

#endif //DESIGN_PATTERNS_CPP_BRIDGE_REFINEDABSTRACTION_H_
