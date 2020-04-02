//
// Created by xulzee on 2020/3/28.
//

#include "component.h"
#include "concrete_component.h"
#include "concrete_decorator_a.h"
#include "concrete_decorator_b.h"

int main() {
  ConcreteComponent *concrete_component = new ConcreteComponent();
  ConcreteDecoratorA *concrete_decorator_a = new ConcreteDecoratorA(concrete_component);
  ConcreteDecoratorB *concrete_decorator_b = new ConcreteDecoratorB(concrete_component);

  Component *component = concrete_decorator_a;
  component->Operation();
  delete concrete_component;
  delete concrete_decorator_a;
  delete concrete_decorator_b;

  return 0;
}
