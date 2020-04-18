//
// Created by xulzee on 2020/4/18.
//

#ifndef DESIGN_PATTERNS_CPP_PROTOTYPE_CONCRETE_PROTOTYPE_B_H_
#define DESIGN_PATTERNS_CPP_PROTOTYPE_CONCRETE_PROTOTYPE_B_H_

#include <vector>
#include "prototype.h"

class ConcretePrototypeB : public Prototype {
 public:
  ConcretePrototypeB() {
    test_ = new std::vector<int>(3, 1);
  }

  // 深拷贝构造
  ConcretePrototypeB(const ConcretePrototypeB &concrete_prototype_a) {
    test_ = new std::vector<int>(3, 1);
    for (int kI = 0; kI < test_->size(); ++kI) {
      test_->at(kI) = concrete_prototype_a.GetTest()->at(kI);
    }
  }
  std::vector<int> *GetTest() const {
    return test_;
  }
  Prototype *clone() override {
    return new ConcretePrototypeB(*this);
  }
  std::string type() override {
    std::string res;
    for (int & kI : *test_) {
      res+=std::to_string(kI);
    }
    return res;
  }
  void run() override {
  }
 private:
  std::vector<int> *test_;
};

#endif //DESIGN_PATTERNS_CPP_PROTOTYPE_CONCRETE_PROTOTYPE_B_H_
