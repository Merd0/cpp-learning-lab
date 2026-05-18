cmake_minimum_required(VERSION 3.20)

project(cpp_learning_lab VERSION 0.1.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

option(CPP_LEARNING_LAB_WARNINGS_AS_ERRORS "Treat compiler warnings as errors" OFF)

function(cpp_lab_apply_warnings target_name)
    if(MSVC)
        target_compile_options(${target_name} PRIVATE /W4 /permissive-)
        if(CPP_LEARNING_LAB_WARNINGS_AS_ERRORS)
            target_compile_options(${target_name} PRIVATE /WX)
        endif()
    else()
        target_compile_options(
            ${target_name}
            PRIVATE -Wall -Wextra -Wpedantic -Wconversion -Wshadow
        )
        if(CPP_LEARNING_LAB_WARNINGS_AS_ERRORS)
            target_compile_options(${target_name} PRIVATE -Werror)
        endif()
    endif()
endfunction()

function(cpp_lab_add_executable target_name)
    add_executable(${target_name} ${ARGN})
    target_compile_features(${target_name} PRIVATE cxx_std_20)
    cpp_lab_apply_warnings(${target_name})
endfunction()

function(cpp_lab_add_library target_name)
    add_library(${target_name} ${ARGN})
    target_compile_features(${target_name} PUBLIC cxx_std_20)
    cpp_lab_apply_warnings(${target_name})
endfunction()

enable_testing()

cpp_lab_add_executable(en_00_hello en/00_toolchain/hello_modern_cpp.cpp)
cpp_lab_add_executable(en_01_types en/01_basics/types_and_initialization.cpp)
cpp_lab_add_executable(en_02_references en/02_functions_references/references_const_correctness.cpp)
cpp_lab_add_executable(en_03_class_invariants en/03_classes_oop/class_invariants.cpp)
cpp_lab_add_executable(en_03_polymorphism en/03_classes_oop/polymorphism_virtual_destructor.cpp)
cpp_lab_add_executable(en_04_raii en/04_raii_memory/raii_unique_ptr.cpp)
cpp_lab_add_executable(en_05_stl en/05_stl/vector_algorithm_basics.cpp)

cpp_lab_add_executable(tr_00_merhaba tr/00_toolchain/hello_modern_cpp.cpp)
cpp_lab_add_executable(tr_01_tipler tr/01_basics/types_and_initialization.cpp)
cpp_lab_add_executable(tr_02_referanslar tr/02_functions_references/references_const_correctness.cpp)
cpp_lab_add_executable(tr_03_sinif_kurallari tr/03_classes_oop/class_invariants.cpp)
cpp_lab_add_executable(tr_03_polimorfizm tr/03_classes_oop/polymorphism_virtual_destructor.cpp)
cpp_lab_add_executable(tr_04_raii tr/04_raii_memory/raii_unique_ptr.cpp)
cpp_lab_add_executable(tr_05_stl tr/05_stl/vector_algorithm_basics.cpp)

add_subdirectory(en/projects/bank_account_oop)
add_subdirectory(tr/projects/bank_account_oop)
