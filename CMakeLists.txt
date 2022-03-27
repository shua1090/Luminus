project(luminus)
cmake_minimum_required(VERSION 3.22)
# A convenience variable:
set (CMAKE_CXX_STANDARD 11)
set(CMAKE_BUILD_TYPE Debug)


add_executable(luminus main.cpp)


#################### ANTLR ####################
# required if linking to static library
add_definitions(-DANTLR4CPP_STATIC)

# using /MD flag for antlr4_runtime (for Visual C++ compilers only)
set(ANTLR4_WITH_STATIC_CRT OFF)
# add external build for antlrcpp
include(${CMAKE_SOURCE_DIR}/cmake/ExternalAntlr4Cpp.cmake)
# add antrl4cpp artifacts to project environment
include_directories(${ANTLR4_INCLUDE_DIRS})
target_link_libraries(luminus antlr4_static)

#################### LLVM ####################

find_package(LLVM REQUIRED CONFIG)
message(STATUS "Found LLVM ${LLVM_PACKAGE_VERSION}")
message(STATUS "Using LLVMConfig.cmake in: ${LLVM_DIR}")

include_directories(${LLVM_INCLUDE_DIRS})
separate_arguments(LLVM_DEFINITIONS_LIST NATIVE_COMMAND ${LLVM_DEFINITIONS})
add_definitions(${LLVM_DEFINITIONS_LIST})
llvm_map_components_to_libnames(llvm_libs support core irreader)
target_link_libraries(luminus ${llvm_libs})