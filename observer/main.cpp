//
// Created by xulzee on 2020/3/28.
//

#include <iostream>
#include "concrete_observer.h"
#include "concrete_subject.h"

int main() {
  ConcreteObserver observer1(1);
  ConcreteObserver observer2(2);

  std::cout << "Observer 1 state: " << observer1.GetState() << std::endl;
  std::cout << "Observer 2 state: " << observer2.GetState() << std::endl;

  auto *concrete_subject = new ConcreteSubject();
  concrete_subject->Attach(&observer1);
  concrete_subject->Attach(&observer2);

  concrete_subject->SetState(10);
  concrete_subject->Notify();

  std::cout << "Observer 1 state: " << observer1.GetState() << std::endl;
  std::cout << "Observer 2 state: " << observer2.GetState() << std::endl;

  concrete_subject->Detach(&observer1);
  concrete_subject->Detach(&observer2);

  return 0;
}
