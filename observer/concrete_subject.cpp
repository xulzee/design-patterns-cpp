//
// Created by xulzee on 2020/3/29.
//

#include "concrete_subject.h"
int ConcreteSubject::GetState() {
  return subject_state_;
}

void ConcreteSubject::SetState(const int state) {
  subject_state_ = state;
}
