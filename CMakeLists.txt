cmake_minimum_required(VERSION 3.9)

project(adventofcode LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_EXTENSIONS OFF)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
add_compile_options(-Wall -Wextra)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY bin)

foreach(day RANGE 1 3)
  if(day MATCHES "^.$")
    set(day "0${day}")
  endif()
  add_executable(aoc-${day} ${day}.cpp)
endforeach()

