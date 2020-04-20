cmake_minimum_required(VERSION 3.10)

add_executable(builder
        main.cpp
        builder.h
        concrete_builder_x.h
        concrete_builder_y.h
        director.h)