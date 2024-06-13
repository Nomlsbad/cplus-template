cmake_minimum_required(VERSION 3.26)

project(cpp_template LANGUAGES CXX)

include(cmake/CompileOptions.cmake)
include(cmake/Sanitize.cmake)
include(cmake/Targets.cmake)
include(cmake/Testing.cmake)

add_subdirectory(libs)

include(cmake/MoreWarnings.cmake)
include(cmake/Werror.cmake)
add_subdirectory(cpp-template)