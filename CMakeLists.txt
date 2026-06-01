cmake_minimum_required(VERSION 3.28)

project(
        LastHaven
        VERSION 0.0.0
        DESCRIPTION "Game from scratch, built in C++"
        LANGUAGES CXX
)

add_library(liblasthaven STATIC)

set_target_properties(
        liblasthaven
        PROPERTIES
        CXX_STANDARD 23
        CXX_STANDARD_REQUIRED ON
        CXX_EXTENSIONS OFF
        C_STANDARD 23
        C_STANDARD_REQUIRED ON
        C_EXTENSIONS OFF
        OUTPUT_NAME lasthaven
        ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
)

target_compile_features(
        liblasthaven
        PRIVATE
        cxx_std_23
        c_std_23
)

target_compile_options(
        liblasthaven
        PRIVATE
        $<$<AND:$<COMPILE_LANGUAGE:CXX>,$<OR:$<CXX_COMPILER_ID:Clang>,$<CXX_COMPILER_ID:GNU>>>:-Wall -Wextra -Wpedantic >
        $<$<AND:$<COMPILE_LANGUAGE:CXX>,$<CXX_COMPILER_ID:MSVC>>:/W4>

        $<$<AND:$<COMPILE_LANGUAGE:C>,$<OR:$<C_COMPILER_ID:Clang>,$<C_COMPILER_ID:GNU>>>:-Wall -Wextra -Wpedantic>
        $<$<AND:$<COMPILE_LANGUAGE:C>,$<C_COMPILER_ID:MSVC>>:/W4>
)

target_compile_definitions(
        liblasthaven
        PRIVATE
        "LASTHAVEN_DEBUG=$<CONFIG:Debug>"
        "LASTHAVEN_RELEASE=$<OR:$<CONFIG:Release>,$<CONFIG:MinSizeRel>>"
        "LASTHAVEN_RELWITHDEBINFO=$<CONFIG:RelWithDebInfo>"
        "LASTHAVEN_MINSIZEREL=$<CONFIG:MinSizeRel>"
        "LASTHAVEN_ENABLE_EXTRA_DEBUG_INFO=$<OR:$<CONFIG:Debug>,$<CONFIG:RelWithDebInfo>>"
)

target_include_directories(
        liblasthaven
        PUBLIC
        $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
)

add_executable(lasthaven)

set_target_properties(
        lasthaven
        PROPERTIES
        CXX_STANDARD 23
        CXX_STANDARD_REQUIRED ON
        CXX_EXTENSIONS OFF
        C_STANDARD 23
        C_STANDARD_REQUIRED ON
        C_EXTENSIONS OFF
        OUTPUT_NAME lasthaven
        RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
)

target_compile_features(
        lasthaven
        PRIVATE
        cxx_std_23
        c_std_23
)

target_compile_options(
        lasthaven
        PRIVATE
        $<$<AND:$<COMPILE_LANGUAGE:CXX>,$<OR:$<CXX_COMPILER_ID:Clang>,$<CXX_COMPILER_ID:GNU>>>:-Wall -Wextra -Wpedantic >
        $<$<AND:$<COMPILE_LANGUAGE:CXX>,$<CXX_COMPILER_ID:MSVC>>:/W4>

        $<$<AND:$<COMPILE_LANGUAGE:C>,$<OR:$<C_COMPILER_ID:Clang>,$<C_COMPILER_ID:GNU>>>:-Wall -Wextra -Wpedantic>
        $<$<AND:$<COMPILE_LANGUAGE:C>,$<C_COMPILER_ID:MSVC>>:/W4>
)

target_compile_definitions(
        lasthaven
        PRIVATE
        "LASTHAVEN_DEBUG=$<CONFIG:Debug>"
        "LASTHAVEN_RELEASE=$<OR:$<CONFIG:Release>,$<CONFIG:MinSizeRel>>"
        "LASTHAVEN_RELWITHDEBINFO=$<CONFIG:RelWithDebInfo>"
        "LASTHAVEN_MINSIZEREL=$<CONFIG:MinSizeRel>"
        "LASTHAVEN_ENABLE_EXTRA_DEBUG_INFO=$<OR:$<CONFIG:Debug>,$<CONFIG:RelWithDebInfo>>"
)

target_link_libraries(
        lasthaven
        PRIVATE
        liblasthaven
)

add_subdirectory(src)
