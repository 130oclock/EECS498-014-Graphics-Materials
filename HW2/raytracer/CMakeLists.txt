cmake_minimum_required(VERSION 3.10)
project(RayTracer)

set(CMAKE_CXX_STANDARD 17)

add_executable(RayTracer main.cpp ray.cpp math.cpp scene.cpp accel.cpp raytracer_impl.cpp)