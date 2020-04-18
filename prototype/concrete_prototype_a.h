//
// Created by xulzee on 2020/4/18.
//

#ifndef DESIGN_PATTERNS_CPP_PROTOTYPE_CONCRETE_PROTOTYPE_A_H_
#define DESIGN_PATTERNS_CPP_PROTOTYPE_CONCRETE_PROTOTYPE_A_H_

#include <vector>
#include "prototype.h"

class ConcretePrototypeA : public Prototype {
 public:
  ConcretePrototypeA() {
    test_ = new std::vector<int>(3, 1);
  }

  // 深拷贝构造
  ConcretePrototypeA(const ConcretePrototypeA &concrete_prototype_a) {
    test_ = new std::vector<int>(3, 1);
    for (int kI = 0; kI < test_->size(); ++kI) {
      test_->at(kI) = concrete_prototype_a.GetTest()->at(kI);
    }
  }
  std::vector<int> *GetTest() const {
    return test_;
  }
  Prototype *clone() override {
    return new ConcretePrototypeA(*this);
  }
  std::string type() override {
    std::string res;
    for (int & kI : *test_) {
      res+=std::to_string(kI);
    }
    return res;
  }
  void run() override {
    for (int kI = 0; kI < test_->size(); ++kI) {
      test_->at(kI) = kI + 1;
    }
  }
 private:
  std::vector<int> *test_;
};

#endif //DESIGN_PATTERNS_CPP_PROTOTYPE_CONCRETE_PROTOTYPE_A_H_
