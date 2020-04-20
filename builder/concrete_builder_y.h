//
// Created by xulzee on 2020/4/20.
//

#ifndef DESIGN_PATTERNS_CPP_BUILDER_CONCRETE_BUILDER_Y_H_
#define DESIGN_PATTERNS_CPP_BUILDER_CONCRETE_BUILDER_Y_H_

#include "builder.h"

class ConcreteBuilderY : public Builder {
 public:
  void BuildPartFirst() override {
    product_.MakeFirst("A-Y");
  }
  void BuildPartSecond() override {
    product_.MakeSecond("B-Y");
  }
  void BuildPartThird() override {
    product_.MakeThird("C-Y");
  }
};

#endif //DESIGN_PATTERNS_CPP_BUILDER_CONCRETE_BUILDER_Y_H_
