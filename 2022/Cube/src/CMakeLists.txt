cmake_minimum_required(VERSION 3.2)
project(Astor)
add_executable(Astor main.cpp)

target_include_directories(${PROJECT_NAME} PUBLIC Cues)
target_include_directories(${PROJECT_NAME} PUBLIC Puzzle)

target_link_directories(${PROJECT_NAME} PRIVATE Cues)
target_link_directories(${PROJECT_NAME} PRIVATE Puzzle)

target_link_libraries(${PROJECT_NAME} Cues)
target_link_libraries(${PROJECT_NAME} Puzzle)
