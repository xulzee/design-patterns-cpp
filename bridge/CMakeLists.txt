cmake_minimum_required(VERSION 3.10)

add_executable(bridge
        main.cpp
        implementor.h
        concrete_implementor_a.cpp
        concrete_implementor_a.h
        abstraction.h refined_abstraction.cpp refined_abstraction.h concrete_implementor_b.cpp concrete_implementor_b.h)