cmake_minimum_required(VERSION 3.17 FATAL_ERROR)
project(example)

add_executable(main main.c)

target_link_libraries(main ${CMAKE_CURRENT_SOURCE_DIR}/../build/libhello.dylib)
target_include_directories(main PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/../src)

