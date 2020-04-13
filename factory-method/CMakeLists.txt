cmake_minimum_required(VERSION 3.10)

add_executable(factory-method
        main.cpp
        product.h concrete_product_a.h concrete_product_b.h creator.h concrete_creator_a.h concrete_creator_b.h)