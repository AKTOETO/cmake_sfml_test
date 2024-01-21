cmake_minimum_required(VERSION 3.11)

project(main_cmakefile LANGUAGES CXX)

# specify the c++ standard
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# all libs should be staticly linked
set(BUILD_SHARED_LIBS OFF)

#including all internal folders
add_subdirectory(src/internal)

message(STATUS "added src/internal")
