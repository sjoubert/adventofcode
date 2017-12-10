cmake_minimum_required(VERSION 3.9)

project(adventofcode LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_EXTENSIONS OFF)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY bin)

include(CheckCXXCompilerFlag)
set(unix_compile_options -Wall -Wextra -Wno-sign-compare)
check_cxx_compiler_flag("${unix_compile_options}" HAVE_UNIX_FLAGS)

include(CTest)

foreach(day RANGE 1 10)
  if(day MATCHES "^.$")
    set(day "0${day}")
  endif()

  add_executable(aoc-${day} ${day}.cpp)
  target_compile_options(aoc-${day} PRIVATE ${unix_compile_options})

  add_test(NAME aoc-${day} COMMAND aoc-${day})
endforeach()
