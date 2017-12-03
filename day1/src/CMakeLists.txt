project(aoc2017-day1 VERSION 0.1 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED on)

# Main target
add_executable(
    aoc2017-day1 
    main.cc
)

# Root folder must be included
target_include_directories(aoc2017-day1 PUBLIC "${CMAKE_CURRENT_LIST_DIR}")