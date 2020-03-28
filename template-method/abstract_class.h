//
// Created by xulzee on 2020/3/27.
//

#ifndef DESIGN_PATTERNS_CPP_TEMPLATE_METHOD_ABSTRACTCLASS_H_
#define DESIGN_PATTERNS_CPP_TEMPLATE_METHOD_ABSTRACTCLASS_H_

#include <iostream>

/*
   abstract-class
   implements a template method defining the skeleton of an algorithm
*/
class AbstractClass {
 public:
  virtual ~AbstractClass() = default;;
  void TemplateMethod();
 protected:
  void PrimitiveOperation1();
  void PrimitiveOperation2();
  virtual void PrimitiveOperation3() = 0;
  virtual void PrimitiveOperation4() = 0;
};

#endif //DESIGN_PATTERNS_CPP_TEMPLATE_METHOD_ABSTRACTCLASS_H_
