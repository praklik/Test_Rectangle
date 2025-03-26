cmake_minimum_required(VERSION 3.30)
project(Multifile_project_rectangle)

set(CMAKE_CXX_STANDARD 20)

add_executable(Multifile_project_rectangle main.cpp
        Header.h
        Header.cpp)
