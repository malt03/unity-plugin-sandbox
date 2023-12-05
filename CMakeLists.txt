cmake_minimum_required(VERSION 3.17 FATAL_ERROR)
project(unity-plugin)

file(GLOB SOURCES "src/*.cpp")
add_library(Malt03Plugin SHARED ${SOURCES})
set_property(TARGET Malt03Plugin PROPERTY CXX_STANDARD 20)
