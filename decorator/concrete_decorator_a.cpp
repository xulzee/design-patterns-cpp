//
// Created by xulzee on 2020/4/2.
//

#include <iostream>
#include "concrete_decorator_a.h"

void ConcreteDecoratorA::Operation() {
  Decorator::Operation();
  std::cout << "Decorator A" << std::endl;
}

ConcreteDecoratorA::ConcreteDecoratorA(Component *component) : Decorator(component) {}
