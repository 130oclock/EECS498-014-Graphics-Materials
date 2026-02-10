cmake_minimum_required(VERSION 3.10)
project(RayTracer)

set(CMAKE_CXX_STANDARD 17)

# Add the executable with the source files
file(GLOB SOURCES "*.cpp")

add_executable(RayTracer ${SOURCES})