//
// Created by xulzee on 2020/4/2.
//

#include "decorator.h"
Decorator::Decorator(Component *component) : component_(component) {}
void Decorator::Operation() {
  component_->Operation();
}
