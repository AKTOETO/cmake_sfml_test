#name
project(SFML-lib)

# setting 
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/${PROJECT_NAME})

# downloading sfml
include(FetchContent)

set(FETCHCONTENT_QUIET FALSE)

FetchContent_Declare(
    SFML
    GIT_REPOSITORY https://github.com/SFML/SFML.git
    GIT_TAG 2.6.x
)
FetchContent_MakeAvailable(SFML)

#add_library(${PROJECT_NAME})

# including library filepaths for compiler
#target_include_directories(${PROJECT_NAME} PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}")

# linking libs to SFML-lib
target_link_libraries(${PROJECT_NAME} PRIVATE sfml-graphics)

# compile feature
target_compile_features(${PROJECT_NAME} PRIVATE cxx_std_17)

