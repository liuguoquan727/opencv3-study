cmake_minimum_required(VERSION 3.8)
project(opencv_study)

include_directories(${OpenCV_INCLUDE_DIRS})
set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES src/tutorial/06/BilateralFilter.cpp)
find_package(OpenCV REQUIRED)
add_executable(opencv_study ${SOURCE_FILES})
target_link_libraries(opencv_study ${OpenCV_LIBS})