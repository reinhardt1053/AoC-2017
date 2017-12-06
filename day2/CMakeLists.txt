cmake_minimum_required(VERSION 3.2 FATAL_ERROR)

set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

if (MSVC)
  add_compile_options(/W4)
else()
  add_compile_options(-Wall -Wextra -Wpedantic -O3)
endif()

add_subdirectory (src)
configure_file(${CMAKE_CURRENT_SOURCE_DIR}/input.txt ${CMAKE_RUNTIME_OUTPUT_DIRECTORY}/input.txt COPYONLY)
