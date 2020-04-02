//
// Created by xulzee on 2020/4/2.
//

#ifndef DESIGN_PATTERNS_CPP_DECORATOR_COMPONENT_H_
#define DESIGN_PATTERNS_CPP_DECORATOR_COMPONENT_H_

/*
 * Component
 * defines an interface for objects that can have responsibilities
 * added to them dynamically
 */
class Component {
 public:
  virtual ~Component() = default;
  virtual void Operation() = 0;
};

#endif //DESIGN_PATTERNS_CPP_DECORATOR_COMPONENT_H_
