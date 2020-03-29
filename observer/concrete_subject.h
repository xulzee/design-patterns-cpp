//
// Created by xulzee on 2020/3/29.
//

#ifndef DESIGN_PATTERNS_CPP_OBSERVER_CONCRETE_SUBJECT_H_
#define DESIGN_PATTERNS_CPP_OBSERVER_CONCRETE_SUBJECT_H_
#include "subject.h"

class ConcreteSubject : public Subject {
 public:
  int GetState() override;
  void SetState(int state) override;
 private:
  int subject_state_;
};

#endif //DESIGN_PATTERNS_CPP_OBSERVER_CONCRETE_SUBJECT_H_
