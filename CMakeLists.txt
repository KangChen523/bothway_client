cmake_minimum_required(VERSION 3.0)

SET(target bothway_client)
project(${target})

# ==============  USE CXX11 ================
include(CheckCXXCompilerFlag)

CHECK_CXX_COMPILER_FLAG("-std=c++11" COMPILER_SUPPORTS_CXX11)
CHECK_CXX_COMPILER_FLAG("-std=c++0x" COMPILER_SUPPORTS_CXX0X)

if (COMPILER_SUPPORTS_CXX11)
    set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -g -fsigned-char -std=c++11 -Wall")
elseif (COMPILER_SUPPORTS_CXX0X)
    set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -g -fsigned-char -std=c++0x -Wall")
else ()
    message(STATUS "The compiler ${CMAKE_CXX_COMPILER} has no C++11 support. Please use a different c++ compiler.")
endif ()

set(CMAKE_CXX_FLAGS "${CMAKE_C_FLAGS} -Wno-unused-variable -Wno-unused-parameter")

add_compile_options(-std=c++11)

INCLUDE_DIRECTORIES(${CMAKE_BINARY_DIR})
INCLUDE_DIRECTORIES($ENV{THETA_INCPATH}/public)
INCLUDE_DIRECTORIES($ENV{THETA_INCPATH}/public/thrift)

set(SOURCE_FILE
        bothway.cpp
        bothway.h
        bothway_types.h bothway_client.cpp bothway_client.h)


add_executable(${target} ${SOURCE_FILE})

LINK_DIRECTORIES($ENV{THETA_DEPLOY_DIR}/bin/plat)

TARGET_LINK_LIBRARIES(${target} thrift-0.15.0 pthread)