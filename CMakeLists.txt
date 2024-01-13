cmake_minimum_required(VERSION 3.10)
set(CMAKE_CXX_STANDARD 20) 

project(server)

add_subdirectory(proto)

add_subdirectory(src)

enable_testing()

add_subdirectory(test)

