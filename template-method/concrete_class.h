//
// Created by xulzee on 2020/3/27.
//

#ifndef DESIGN_PATTERNS_CPP_TEMPLATE_METHOD_CONCRETECLASS_H_
#define DESIGN_PATTERNS_CPP_TEMPLATE_METHOD_CONCRETECLASS_H_
#include "abstract_class.h"

class ConcreteClass : public AbstractClass {
 public:
  void PrimitiveOperation3() override;
  void PrimitiveOperation4() override;
};

#endif //DESIGN_PATTERNS_CPP_TEMPLATE_METHOD_CONCRETECLASS_H_
