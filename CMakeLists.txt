cmake_minimum_required(VERSION 3.21)
project(algorithms)

set(CMAKE_CXX_STANDARD 14)

add_executable(algorithms main.cpp sorting/bubble.h sorting/shaker.h sorting/insert.h sorting/select.h sorting/shella.h)
