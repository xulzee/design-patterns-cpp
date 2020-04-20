cmake_minimum_required(VERSION 3.10)

add_executable(abstract-factory
        main.cpp
        product_a.h
        product_b.h
        concrete_product_a_x.h concrete_product_a_y.h concrete_product_b_x.h concrete_product_b_y.h abstract_factory.h concrete_factory_x.h concrete_factory_y.h ../builder/product.h)