add_library(cmake_library)

target_sources(cmake_library
  PRIVATE
    Private/library.cpp

  PUBLIC
    FILE_SET HEADERS 
    BASE_DIRS
      Public
    FILES
      Public/library.hpp
)
