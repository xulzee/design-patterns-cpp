//
// Created by xulzee on 2020/3/29.
//

#ifndef DESIGN_PATTERNS_CPP_OBSERVER_OBSERVER_H_
#define DESIGN_PATTERNS_CPP_OBSERVER_OBSERVER_H_

class Subject;

/*
 * Observer
 * defines an updating interface for objects that should be notified
 * of changes in a subject
 */
class Observer {
 public:
  virtual ~Observer() = default;
  virtual int GetState() = 0;
  virtual void Update(Subject* subject) = 0;
};

#endif //DESIGN_PATTERNS_CPP_OBSERVER_OBSERVER_H_
