//
// Created by xulzee on 2020/3/29.
//

#ifndef DESIGN_PATTERNS_CPP_OBSERVER_SUBJECT_H_
#define DESIGN_PATTERNS_CPP_OBSERVER_SUBJECT_H_

#include <vector>
#include <list>
#include "observer.h"

/*
 * Subject
 * knows its observers and provides an interface for attaching
 * and detaching observers
 */
class Subject {
 public:
  virtual ~Subject();
  void Attach(Observer *observer);
  void Detach(Observer *observer);
  void Notify();

  virtual int GetState() = 0;
  virtual void SetState(int state) = 0;
 private:
  std::list<Observer *> observer_;
};

#endif //DESIGN_PATTERNS_CPP_OBSERVER_SUBJECT_H_
