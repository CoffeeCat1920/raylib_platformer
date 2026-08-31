add_library(includes)

file(GLOB children
  LIST_DIRECTORIES true
  CONFIGURE_DEPENDS
  RELATIVE ${CMAKE_CURRENT_SOURCE_DIR}
  ${CMAKE_CURRENT_SOURCE_DIR}/*
)

set(directories "")
foreach(child ${children})
  if(IS_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/${child})
    if(EXISTS ${CMAKE_CURRENT_SOURCE_DIR}/${child}/Public/${child}.hpp)
      list(APPEND directories ${child})
    endif()
  endif()
endforeach()

message(STATUS "Discovered include modules: ${directories}")

foreach(directory IN LISTS directories)
  target_sources(includes
    PUBLIC
      FILE_SET HEADERS
      BASE_DIRS
        ${CMAKE_CURRENT_SOURCE_DIR}/${directory}/Public
      FILES
        ${CMAKE_CURRENT_SOURCE_DIR}/${directory}/Public/${directory}.hpp
    PRIVATE
      ${CMAKE_CURRENT_SOURCE_DIR}/${directory}/Private/${directory}.cpp
  )
endforeach()
