cmake_minimum_required(VERSION 3.10)
project(CMakeMenu)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

option(BUILD_TESTS "Build tests" ON)

if(BUILD_TESTS)
	enable_testing()
endif()

# Include the menu app and the projects subtree
add_subdirectory(projects)
 
