cmake_minimum_required(VERSION 3.23)

# Set modern C++ standards and disable compiler extensions
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

# Enable compile commands export for tools like clangd
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

# Project configuration
project(
  cmake_tutorial
  VERSION 1.0.0
  DESCRIPTION "A tutorial project demonstrating CMake best practices"
  LANGUAGES CXX
)

# Configuration options
option(BUILD_SHARED_LIBS "Build shared libraries" OFF)

# Add subdirectories
add_subdirectory(library)

# Main executable
add_executable(${PROJECT_NAME})

# Find dependencies
find_package(raylib REQUIRED)

# Link libraries
target_link_libraries(${PROJECT_NAME}
  PRIVATE
    cmake_library
    raylib
)

# Source files
target_sources(${PROJECT_NAME}
  PRIVATE
    src/main.cpp
)

