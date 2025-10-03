cmake_minimum_required(VERSION 3.10)
project(super-sandisk VERSION 1.0.0 LANGUAGES CXX)

# Set C++ standard
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Add executable
add_executable(super-sandisk src/main.cpp)

# Installation rules
install(TARGETS super-sandisk DESTINATION bin)
