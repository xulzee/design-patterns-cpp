cmake_minimum_required(VERSION 3.10)

add_executable(strategy
        strategy.h
        concrete_strategy_a.h
        concrete_strategy_b.h
        main.cpp concrete_strategy_c.h context.cpp context.h)