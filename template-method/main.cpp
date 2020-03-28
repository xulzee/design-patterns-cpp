//
// Created by xulzee on 2020/3/27.
//
#include "concrete_class.h"
#include <vector>
int main() {
    AbstractClass *abstract_class = new ConcreteClass;
    abstract_class->TemplateMethod();

    delete abstract_class;
    return 0;
}