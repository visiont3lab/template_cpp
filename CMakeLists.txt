cmake_minimum_required(VERSION 2.8.3)
project(sample_ws)

### Use version 2011 of C++ (c++11). By default ROS uses c++98
#see: http://stackoverflow.com/questions/10851247/how-to-activate-c-11-in-cmake
#see: http://stackoverflow.com/questions/10984442/how-to-detect-c11-support-of-a-compiler-with-cmake
add_definitions(-std=c++11)
#add_definitions(-std=c++0x)
#add_definitions(-std=c++03)

set(PROJECT_SOURCE_DIR src/sources) 
set(PROJECT_INCLUDE_DIR src/include)

set(PROJECT_HEADER_FILES
	src/include/sample.h
	)
set(PROJECT_SOURCE_FILES
	src/sources/sample.cpp
	)

find_package(OpenCV REQUIRED)

include_directories(${PROJECT_INCLUDE_DIR})
include_directories(${OpenCV_INCLUDE_DIRS})
include_directories(/usr/include/eigen3)

add_library(${PROJECT_NAME} ${PROJECT_SOURCE_FILES} ${PROJECT_HEADER_FILES}) 
target_link_libraries(${PROJECT_NAME} ${OpenCV_LIBS})
target_link_libraries(${PROJECT_NAME} ${Eigen_LIBS})

## Declare a C++ executable
add_executable(main_script src/test/main_script.cpp)
target_link_libraries(main_script ${PROJECT_NAME})

