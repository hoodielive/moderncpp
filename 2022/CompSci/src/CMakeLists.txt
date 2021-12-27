cmake_minimum_required(VERSION 3.22)

project(CompSci)

add_executable(${PROJECT_NAME} main.cpp)

add_subdirectory(Foo)

target_include_directories(${PROJECT_NAME} PUBLIC Foo)
target_link_directories(${PROJECT_NAME} PRIVATE Foo)
target_link_libraries(${PROJECT_NAME} Foo)

