//
// Created by xulzee on 2020/4/7.
//

#ifndef DESIGN_PATTERNS_CPP_BRIDGE_IMPLEMENTOR_H_
#define DESIGN_PATTERNS_CPP_BRIDGE_IMPLEMENTOR_H_

/*
 * Implementor
 * defines the interface for implementation classes
 */
class Implementor {
 public:
  virtual ~Implementor() = default;

  virtual void action() = 0;
};

#endif //DESIGN_PATTERNS_CPP_BRIDGE_IMPLEMENTOR_H_
