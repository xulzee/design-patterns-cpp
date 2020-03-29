//
// Created by xulzee on 2020/3/29.
//

#include <iostream>
#include "concrete_observer.h"
#include "subject.h"
ConcreteObserver::ConcreteObserver(int observer_state) : observer_state_(observer_state) {}

int ConcreteObserver::GetState() {
  return observer_state_;
}

void ConcreteObserver::Update(Subject *subject) {
  observer_state_ = subject->GetState();
  std::cout << "Observer state update."<< std::endl;
}
