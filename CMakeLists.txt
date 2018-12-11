cmake_minimum_required(VERSION 3.13)

project(adventofcode LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_EXTENSIONS OFF)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY bin)

include(CheckCXXCompilerFlag)
set(unix_compile_options -Wall -Wextra -Wno-sign-compare)
check_cxx_compiler_flag("${unix_compile_options}" HAVE_UNIX_FLAGS)

include(CTest)

file(GLOB_RECURSE challenges RELATIVE "${CMAKE_CURRENT_SOURCE_DIR}" "[0-9][0-9].cpp" )
foreach(challenge IN LISTS challenges)
  string(REGEX MATCH "(.+)/(.+).cpp" matchResult ${challenge})
  set(year ${CMAKE_MATCH_1})
  set(day ${CMAKE_MATCH_2})

  add_executable(aoc-${year}-${day} ${year}/${day}.cpp)
  target_compile_options(aoc-${year}-${day} PRIVATE ${unix_compile_options})

  add_test(NAME aoc-${year}-${day} COMMAND aoc-${year}-${day})
endforeach()
