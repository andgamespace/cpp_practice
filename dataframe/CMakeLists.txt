cmake_minimum_required(VERSION 3.30)
project(dataframe)
set(CMAKE_CXX_STANDARD 20)

add_library(dataframe STATIC src/library.cpp
        src/dataframe.cpp
        include/dataframe.hpp)
