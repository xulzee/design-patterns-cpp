//
// Created by xulzee on 2020/3/29.
//

#include "subject.h"
Subject::~Subject() = default;

void Subject::Attach(Observer *observer) {
  observer_.push_back(observer);
}
void Subject::Detach(Observer *observer) {
  observer_.remove(observer);
}
void Subject::Notify() {
  for (const auto &observer : observer_) {
    observer->Update(this);
  }
}
