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

set(days_2017 12)
set(days_2018 2)

foreach(year RANGE 2017 2018)
  foreach(day RANGE 1 ${days_${year}})
    if(day MATCHES "^.$")
      set(day "0${day}")
    endif()

    add_executable(aoc-${year}-${day} ${year}/${day}.cpp)
    target_compile_options(aoc-${year}-${day} PRIVATE ${unix_compile_options})

    add_test(NAME aoc-${year}-${day} COMMAND aoc-${year}-${day})
  endforeach()
endforeach()
