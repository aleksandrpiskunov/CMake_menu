cmake_minimum_required(VERSION 3.10)

project(sorting)

add_library(sorting STATIC
    src/bubble_sort.cpp
)

target_include_directories(sorting PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/src)

install(TARGETS sorting ARCHIVE DESTINATION lib)
