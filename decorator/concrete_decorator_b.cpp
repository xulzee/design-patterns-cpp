//
// Created by xulzee on 2020/4/2.
//
#include <iostream>
#include "concrete_decorator_b.h"
void ConcreteDecoratorB::Operation() {
  Decorator::Operation();
  std::cout << "Decorator B" << std::endl;
}
ConcreteDecoratorB::ConcreteDecoratorB(Component *component) : Decorator(component) {}
