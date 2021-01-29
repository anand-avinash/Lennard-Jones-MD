cmake_minimum_required(VERSION 3.10)

project(ljmd-serial-refactoring LANGUAGES C)

add_library(ljmdlib src/output.c src/integrations.c src/input.c src/forces.c src/energy.c src/common.c)

add_executable(ljmd-serial-refactored.x src/ljmd.c)
target_include_directories(ljmd-serial-refactored.x PRIVATE include)
target_link_libraries(ljmd-serial-refactored.x PRIVATE ljmdlib -lm)

target_compile_options(ljmd-serial-refactored.x PRIVATE -Wall -g -O3 -ffast-math -fomit-frame-pointer -DLJMD_VERSION=1.0)
