cmake_minimum_required(VERSION 3.10)
project(Rasterizer)

set(CMAKE_CXX_STANDARD 17)

# Add the executable with the source files
file(GLOB SOURCES "*.cpp")

add_compile_definitions(PRINT_TRIG_DETAIL)
add_executable(Rasterizer ${SOURCES})