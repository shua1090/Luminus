project(luminus)
cmake_minimum_required(VERSION 3.17)
# A convenience variable:
set(CMAKE_CXX_STANDARD 14)
set(CMAKE_BUILD_TYPE Debug)
set(CMAKE_MSVC_RUNTIME_LIBRARY MDd)

FILE(GLOB ANTLR_GENERATED "${CMAKE_SOURCE_DIR}/src/Luminus_Generated/*.cpp" "${CMAKE_SOURCE_DIR}/src/Luminus_Generated/*.hpp")

set(IR_GENERATOR Luminus_Compiler/IR_Generator/LuminusCompiler.h
        Luminus_Compiler/IR_Generator/IR_Test.h Luminus_Compiler/IR_Generator/Visitors_Impl/VisitAdd_Sub.cpp
        Luminus_Compiler/IR_Generator/Visitors_Impl/VisitIdentifier.cpp
        Luminus_Compiler/IR_Generator/Visitors_Impl/VisitReturn.cpp
        Luminus_Compiler/IR_Generator/Visitors_Impl/VisitCast.cpp
        Luminus_Compiler/IR_Generator/Visitors_Impl/VisitMul_Div.cpp
        Luminus_Compiler/IR_Generator/Visitors_Impl/VisitDeclaration.cpp
        Luminus_Compiler/IR_Generator/Visitors_Impl/VisitReinitialization.cpp
        Luminus_Compiler/IR_Generator/Visitors_Impl/VisitInitialization.cpp
        Luminus_Compiler/IR_Generator/Definitions.h
        Luminus_Compiler/IR_Generator/Visitors_Impl/VisitFunction.cpp
        Luminus_Compiler/IR_Generator/Visitors_Impl/VisitFunctionCall.cpp
        Luminus_Compiler/IR_Generator/Visitors_Impl/VisitConditionals.cpp
        Luminus_Compiler/IR_Generator/Compiler_Errors/CompileException.hpp)
set(ENTRY_POINT Luminus_Compiler/main.cpp)

include_directories("${CMAKE_SOURCE_DIR}/src/Luminus_Generated")

add_executable(luminus ${ANTLR_GENERATED} ${ENTRY_POINT} ${BASIC_CHECKER} ${IR_GENERATOR})


list(APPEND CMAKE_MODULE_PATH ${CMAKE_CURRENT_SOURCE_DIR}/cmake)
message(${CMAKE_MODULE_PATH})

#################### ANTLR ####################
if (UNIX)
set(ANTLR_EXECUTABLE /usr/local/lib/antlr-4.9-complete.jar)
endif()

# required if linking to static library
add_definitions(-DANTLR4CPP_STATIC)

# using /MD flag for antlr4_runtime (for Visual C++ compilers only)
set(ANTLR4_WITH_STATIC_CRT OFF)

message("Antlr with Static: ${ANTLR4_WITH_STATIC_CRT}")
# add external build for antlrcpp
include(ExternalAntlr4Cpp)
# add antrl4cpp artifacts to project environment
message(${ANTLR4_INCLUDE_DIRS})
include_directories(${ANTLR4_INCLUDE_DIRS})
find_package(ANTLR REQUIRED)
target_link_libraries(luminus antlr4_static)
#################### LLVM ####################

find_package(LLVM REQUIRED CONFIG)
message(STATUS "Found LLVM ${LLVM_PACKAGE_VERSION}")
message(STATUS "Using LLVMConfig.cmake in: ${LLVM_DIR}")


include_directories(${LLVM_INCLUDE_DIRS})

execute_process(COMMAND llvm-config --libs all
        RESULT_VARIABLE llvm_libraries)

separate_arguments(LLVM_DEFINITIONS_LIST NATIVE_COMMAND ${LLVM_DEFINITIONS})
add_definitions(${LLVM_DEFINITIONS_LIST})
llvm_map_components_to_libnames(llvm_libs core target support x86codegen x86asmparser bitwriter)
target_link_libraries(luminus ${llvm_libs})

##############################################


