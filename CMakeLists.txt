cmake_minimum_required(VERSION 3.16)
project(RoseNG LANGUAGES CXX)

set(CMAKE_CXX_STANDARD      17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS    OFF)

file(GLOB ROSENG_SOURCES
        ${CMAKE_CURRENT_SOURCE_DIR}/src/*.cpp
)

add_library(RoseNG STATIC
        ${ROSENG_SOURCES}
)

target_include_directories(RoseNG
        PUBLIC
        $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
        $<INSTALL_INTERFACE:include>
)

find_package(SDL3 REQUIRED CONFIG)
target_link_libraries(RoseNG PUBLIC SDL3::SDL3)
