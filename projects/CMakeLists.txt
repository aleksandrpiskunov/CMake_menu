cmake_minimum_required(VERSION 3.10)

project(projects)

add_subdirectory(obuchaika)
add_subdirectory(sort)

if(BUILD_TESTS)
    enable_testing()
    add_subdirectory(test)
endif()
