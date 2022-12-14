cmake_minimum_required(VERSION 3.23)
project(vansing_oop)

set(CMAKE_CXX_STANDARD 14)

add_executable(vansing_oop main.cpp vans.cpp vans.h shoes.cpp shoes.h clothes.cpp clothes.h menu.cpp menu.h outlet.cpp outlet.h IOStream.cpp IOStream.h exceptions.cpp exceptions.h)
