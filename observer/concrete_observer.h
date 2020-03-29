//
// Created by xulzee on 2020/3/29.
//

#ifndef DESIGN_PATTERNS_CPP_OBSERVER_CONCRETE_OBSERVER_H_
#define DESIGN_PATTERNS_CPP_OBSERVER_CONCRETE_OBSERVER_H_
#include "observer.h"

class ConcreteObserver : public Observer {
 public:
  explicit ConcreteObserver(int observer_state);
  int GetState() override;
  void Update(Subject *subject) override;
 private:
  int observer_state_;
};

#endif //DESIGN_PATTERNS_CPP_OBSERVER_CONCRETE_OBSERVER_H_
