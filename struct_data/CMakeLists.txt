cmake_minimum_required(VERSION 3.22)
project(struct_data LANGUAGES CXX)

set(SOURCE_LIB data.cpp)
add_library(struct_data STATIC ${SOURCE_LIB})