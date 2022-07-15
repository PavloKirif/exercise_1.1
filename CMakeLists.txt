cmake_minimum_required(VERSION 3.22)
project(exercise_1.1)
set(CMAKE_CXX_STANDARD 17)

set(SOURCE_EXE main.cpp)
add_executable(main ${SOURCE_EXE})

include_directories(struct_data)
add_subdirectory(struct_data)

target_link_libraries(main PRIVATE struct_data)