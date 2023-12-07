cmake_minimum_required(VERSION 3.26)
project(CH13TEMPLATE1015)

set(CMAKE_CXX_STANDARD 17)

add_executable(CH13TEMPLATE1015 main.cpp
        Course.cpp
        Course.h
        OfferCourse.cpp
        OfferCourse.h
        ClassTime.cpp
        ClassTime.h
        Student.cpp
        Student.h)
