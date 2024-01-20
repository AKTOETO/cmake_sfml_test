#project name
project("test-exe")

# setting CMAKE_RUNTIME_OUTPUT_DIRECTORY
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/${PROJECT_NAME})

# adding main executable file
add_executable(${PROJECT_NAME} main.cpp)

message(STATUS "added executable main.cpp")

# linking pos to current project
target_link_libraries(${PROJECT_NAME} PRIVATE pos)

# linking SFML to current project
#target_link_libraries(${PROJECT_NAME} PRIVATE "SFML-lib")

# downloading sfml
include(FetchContent)

set(FETCHCONTENT_QUIET FALSE)

FetchContent_Declare(
    SFML
    GIT_REPOSITORY https://github.com/SFML/SFML.git
    GIT_TAG 2.6.x
)
FetchContent_MakeAvailable(SFML)

target_link_libraries(${PROJECT_NAME} PRIVATE sfml-graphics sfml-network sfml-audio)

message(STATUS "linked \"pos\" to ${PROJECT_NAME}")