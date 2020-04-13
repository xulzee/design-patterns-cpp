//
// Created by xulzee on 2020/4/12.
//

#ifndef DESIGN_PATTERNS_CPP_FACTORY_METHOD_PRODUCT_H_
#define DESIGN_PATTERNS_CPP_FACTORY_METHOD_PRODUCT_H_

#include <string>

/**
 * 定义所有产品类的基类，以便于使用基类指针指向子类对象
 */
class Product {
 public:
  virtual ~Product() = default;

  virtual std::string GetName() = 0;
};

#endif //DESIGN_PATTERNS_CPP_FACTORY_METHOD_PRODUCT_H_
