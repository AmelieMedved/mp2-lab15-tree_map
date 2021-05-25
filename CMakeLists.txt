cmake_minimum_required(VERSION 2.8)

set(CMAKE_CXX_STANDARD 11)
set(PROJECT_NAME mp2-lab15-tree_map)
project(${PROJECT_NAME})

set(TreeMapLib TreeMapLib)
set(main main)


set(CMAKE_CONFIGURATION_TYPES "Debug;Release" CACHE STRING "Configs" FORCE)
if(NOT CMAKE_BUILD_TYPE)
  set(CMAKE_BUILD_TYPE Release)
endif()

include_directories(${CMAKE_CURRENT_SOURCE_DIR}/TreeMapLib)

add_subdirectory(TreeMapLib)
add_subdirectory(main)
add_subdirectory(gtest)
add_subdirectory(test)
