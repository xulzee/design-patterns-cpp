//
// Created by xulzee on 2020/4/20.
//

#ifndef DESIGN_PATTERNS_CPP_BUILDER_BUILDER_H_
#define DESIGN_PATTERNS_CPP_BUILDER_BUILDER_H_

#include "product.h"

/*
 * Builder
 * abstract interface for creating products
 */
class Builder {
 public:
  virtual ~Builder() = default;
  Product get() {
    return product_;
  }
  virtual void BuildPartFirst() = 0;
  virtual void BuildPartSecond() = 0;
  virtual void BuildPartThird() = 0;
 protected:
  Product product_;
};

#endif //DESIGN_PATTERNS_CPP_BUILDER_BUILDER_H_
