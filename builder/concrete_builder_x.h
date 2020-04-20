//
// Created by xulzee on 2020/4/20.
//

#ifndef DESIGN_PATTERNS_CPP_BUILDER_CONCRETE_BUILDER_X_H_
#define DESIGN_PATTERNS_CPP_BUILDER_CONCRETE_BUILDER_X_H_

#include "builder.h"

class ConcreteBuilderX : public Builder {
 public:
  void BuildPartFirst() override {
    product_.MakeFirst("A-X");
  }
  void BuildPartSecond() override {
    product_.MakeSecond("B-X");
  }
  void BuildPartThird() override {
    product_.MakeThird("C-X");
  }
};

#endif //DESIGN_PATTERNS_CPP_BUILDER_CONCRETE_BUILDER_X_H_
