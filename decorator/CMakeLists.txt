cmake_minimum_required(VERSION 3.10)

add_executable(decorator
        main.cpp
        component.h
        concrete_component.cpp
        concrete_component.h
        decorator.cpp
        decorator.h concrete_decorator_a.cpp concrete_decorator_a.h concrete_decorator_b.cpp concrete_decorator_b.h)