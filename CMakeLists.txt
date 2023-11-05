cmake_minimum_required(VERSION 3.26)
project(courseInfo)

set(CMAKE_CXX_STANDARD 17)

add_executable(courseInfo main.cpp
        Course.cpp
        OfferedCourse.cpp)
