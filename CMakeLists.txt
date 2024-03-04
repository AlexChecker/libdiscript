cmake_minimum_required(VERSION 3.10)

project(libdiscript VERSION 1.0.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)


include_directories(${CMAKE_CURRENT_SOURCE_DIR}/include)

set(STATIC_LIBRARY_NAME libdiscript)
set(CMAKE_EXPORT_COMPILE_COMMANDS 1)
add_library(${STATIC_LIBRARY_NAME} STATIC src/tokenizer.cpp)

target_include_directories(${STATIC_LIBRARY_NAME} PUBLIC
                           $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
                           $<INSTALL_INTERFACE:include>)

install(TARGETS ${STATIC_LIBRARY_NAME}
        ARCHIVE DESTINATION lib
        LIBRARY DESTINATION lib
        RUNTIME DESTINATION bin
        INCLUDES DESTINATION include)
