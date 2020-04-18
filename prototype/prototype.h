//
// Created by xulzee on 2020/4/18.
//

#ifndef DESIGN_PATTERNS_CPP_PROTOTYPE_PROTOTYPE_H_
#define DESIGN_PATTERNS_CPP_PROTOTYPE_PROTOTYPE_H_

#include <string>

/*
 * Prototype
 * declares an interface for cloning itself
 */
class Prototype {
 public:
  virtual ~Prototype() = default;
  virtual Prototype *clone() = 0;
  virtual std::string type() = 0;
  virtual void run() = 0;
};

#endif //DESIGN_PATTERNS_CPP_PROTOTYPE_PROTOTYPE_H_
