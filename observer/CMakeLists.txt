cmake_minimum_required(VERSION 3.10)

add_executable(observer
        subject.h
        observer.h
        subject.cpp
        main.cpp
        concrete_subject.cpp
        concrete_subject.h
        concrete_observer.cpp
        concrete_observer.h)