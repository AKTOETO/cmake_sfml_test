#project name
project("pos")

# setting CMAKE_RUNTIME_OUTPUT_DIRECTORY
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/${PROJECT_NAME})

# adding source and headers files
set(SOURCES position.cpp)
set(HEADERS position.hpp)

# declaration a library
add_library(${PROJECT_NAME} STATIC
    ${SOURCES}
    ${HEADERS} 
)

# including library filepaths for compiler
target_include_directories(${PROJECT_NAME} PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}")
