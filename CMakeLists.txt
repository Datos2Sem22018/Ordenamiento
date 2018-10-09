cmake_minimum_required(VERSION 3.10)
project(Ordenamiento)

set(CMAKE_CXX_STANDARD 14)

list(APPEND CMAKE_MODULE_PATH "${CMAKE_CURRENT_LIST_DIR}/cmake")

add_executable(Ordenamiento main.cpp LinkedListDouble/LinkedListDouble.h LinkedListDouble/Node/NodeDouble.h)

include(FindPkgConfig)
find_package(MPointer REQUIRED)
include_directories(${MPOINTER_INCLUDE_DIR})
target_link_libraries(${PROJECT_NAME} ${MPOINTER_LIBRARY})
SET(CMAKE_CXX_FLAGS -pthread)