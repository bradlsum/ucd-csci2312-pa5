cmake_minimum_required(VERSION 3.3)
project(ucd_csci2312_pa5_master)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES
    custom_iterator.h
    ErrorContext.cpp
    ErrorContext.h
    less_functor.h
    main.cpp
    TemplateTests.cpp
    TemplateTests.h)

add_executable(ucd_csci2312_pa5_master ${SOURCE_FILES})