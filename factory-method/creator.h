//
// Created by xulzee on 2020/4/12.
//

#ifndef DESIGN_PATTERNS_CPP_FACTORY_METHOD_CREATOR_H_
#define DESIGN_PATTERNS_CPP_FACTORY_METHOD_CREATOR_H_

#include "product.h"

/**
 * 定义了创建Product的工厂
 */
class Creator {
 public:
  virtual ~Creator() = default;

  virtual Product *CreateProduct() = 0;

  void RemoveProduct(Product *product) {
    delete product;
  }
};

#endif //DESIGN_PATTERNS_CPP_FACTORY_METHOD_CREATOR_H_
