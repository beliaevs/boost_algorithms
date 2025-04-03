cmake_minimum_required(VERSION 3.15)

project(boost_algorithms)
find_package(Boost REQUIRED)
add_executable(boost_algorithms main.cpp)
target_include_directories(boost_algorithms PRIVATE ${Boost_INCLUDE_DIRS})
