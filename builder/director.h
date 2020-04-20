//
// Created by xulzee on 2020/4/20.
//

#ifndef DESIGN_PATTERNS_CPP_BUILDER_DIRECTOR_H_
#define DESIGN_PATTERNS_CPP_BUILDER_DIRECTOR_H_

#include "builder.h"

/*
 * Director
 * responsible for managing the correct sequence of object creation
 */
class Director {
 public:
  Director() : builder_() {}
  virtual ~Director() {
    delete builder_;
  }
  void set_builder(Builder *builder) {
    builder_ = builder;
  }
  Builder *get_builder() const {
    return builder_;
  }
  Product get() {
    return builder_->get();
  }
  //构建过程应当稳定
  void construct(){
    builder_->BuildPartFirst();
    builder_->BuildPartSecond();
    builder_->BuildPartThird();
  }
 private:
  Builder *builder_;
};

#endif //DESIGN_PATTERNS_CPP_BUILDER_DIRECTOR_H_
