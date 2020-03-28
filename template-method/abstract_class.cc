//
// Created by xulzee on 2020/3/27.
//

#include "abstract_class.h"
void AbstractClass::PrimitiveOperation1() {
  std::cout << "First Primitive Operation in Abstract Class " << std::endl;
}
void AbstractClass::PrimitiveOperation2() {
  std::cout << "Second Primitive Operation in Abstract Class " << std::endl;
}
void AbstractClass::TemplateMethod() {
  // ...
  PrimitiveOperation1();
  // ...
  PrimitiveOperation2();
  // ...
  PrimitiveOperation3();
  // ...
  PrimitiveOperation4();
}
