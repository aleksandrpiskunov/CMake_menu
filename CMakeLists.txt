cmake_minimum_required(VERSION 3.10)
project(CMakeMenu)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Main menu executable
add_executable(menu 
    25-12-6.menu/menu.cpp
    25-12-6.menu/menu_func.cpp
    25-12-6.menu/menu_items.cpp
)

target_include_directories(menu PRIVATE 25-12-6.menu)
