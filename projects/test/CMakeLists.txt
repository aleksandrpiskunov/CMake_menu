cmake_minimum_required(VERSION 3.10)

project(tests)

if(NOT TARGET gtest)
    add_subdirectory(${CMAKE_SOURCE_DIR}/projects/lib/googletest ${CMAKE_BINARY_DIR}/googletest_build)
endif()

add_executable(test_bubble test_bubble.cpp)
target_include_directories(test_bubble PRIVATE ${CMAKE_SOURCE_DIR}/projects/sort/src)
target_link_libraries(test_bubble PRIVATE sorting gtest_main)

add_test(NAME bubble_test COMMAND test_bubble)
