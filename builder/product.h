//
// Created by xulzee on 2020/4/20.
//

#ifndef DESIGN_PATTERNS_CPP_BUILDER_PRODUCT_H_
#define DESIGN_PATTERNS_CPP_BUILDER_PRODUCT_H_

#include <string>

/*
 * Product
 * the final object that will be created using Builder
 */
class Product {
 public:
  void MakeFirst(const std::string &part) {
    part_first_ = part;
  }
  void MakeSecond(const std::string &part) {
    part_second_ = part;
  }
  void MakeThird(const std::string &part) {
    part_third_ = part;
  }
  std::string get() {
    return part_first_ + " " + part_second_ + " " + part_third_;
  }
 private:
  std::string part_first_;
  std::string part_second_;
  std::string part_third_;

};

#endif //DESIGN_PATTERNS_CPP_BUILDER_PRODUCT_H_
