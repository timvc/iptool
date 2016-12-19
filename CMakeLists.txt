cmake_minimum_required(VERSION 3.5)
project(iptool)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp SockApi.h SockApi.cpp)
add_executable(iptool ${SOURCE_FILES})