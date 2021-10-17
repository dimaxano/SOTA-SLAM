cmake_minimum_required(VERSION 3.16)

project(sotaslam)

set(CMAKE_CXX_STANDARD 17)

# find_package(Threads REQUIRED)

find_package(OpenCV 4)
if(NOT OpenCV_FOUND)
    message(FATAL_ERROR "OpenCV >= 4 not found")
endif()



add_subdirectory(src)
