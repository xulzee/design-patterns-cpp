//
// Created by xulzee on 2020/4/17.
//

#ifndef DESIGN_PATTERNS_CPP_ABSTRACT_FACTORY_CONCRETE_FACTORY_X_H_
#define DESIGN_PATTERNS_CPP_ABSTRACT_FACTORY_CONCRETE_FACTORY_X_H_
#include "abstract_factory.h"
#include "product_a.h"
#include "product_b.h"
#include "concrete_product_a_x.h"
#include "concrete_product_b_x.h"

/*
 * Concrete Factory X and Y
 * each concrete factory create a family of products and client uses
 * one of these factories so it never has to instantiate a product object
 */
class ConcreteFactoryX : public AbstractFactory {
 public:
  ~ConcreteFactoryX() override = default;

  ProductA *CreateProductA() override {
    return new ConcreteProductAX();
  }
  ProductB *CreateProductB() override {
    return new ConcreteProductBX();
  }
};

#endif //DESIGN_PATTERNS_CPP_ABSTRACT_FACTORY_CONCRETE_FACTORY_X_H_
