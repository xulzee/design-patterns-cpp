//
// Created by xulzee on 2020/4/7.
//

#include "refined_abstraction.h"
#include "concrete_implementor_a.h"
#include "concrete_implementor_b.h"

int main() {
  Implementor *implementor_a = new ConcreteImplementorA();
  Implementor *implementor_b = new ConcreteImplementorB();

  Abstraction *abstraction1 = new RefinedAbstraction(implementor_a);
  abstraction1->operation();

  Abstraction *abstraction2 = new RefinedAbstraction(implementor_b);
  abstraction2->operation();

  return 0;
}
