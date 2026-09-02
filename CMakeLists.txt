cmake_minimum_required(VERSION 3.23)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

project(
  raylib_platformer
  VERSION 1.0.0
  DESCRIPTION "A tutorial project demonstrating CMake best practices"
  LANGUAGES CXX
)

option(BUILD_SHARED_LIBS "Build shared libraries" OFF)

add_executable(${PROJECT_NAME})

find_package(raylib REQUIRED)
add_subdirectory(include)

target_link_libraries(${PROJECT_NAME}
  PRIVATE
    raylib
    includes
)

target_sources(${PROJECT_NAME}
  PRIVATE
    src/main.cpp
)
