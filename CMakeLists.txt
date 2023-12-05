cmake_minimum_required(VERSION 3.17 FATAL_ERROR)
project(unity-plugin)

file(GLOB SOURCES "src/*.cpp")
add_library(hello SHARED ${SOURCES})
set_property(TARGET hello PROPERTY CXX_STANDARD 20)
