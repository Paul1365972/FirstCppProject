cmake_minimum_required(VERSION 3.15)
project(stb LANGUAGES C)

set(STB_PATH ../stb)

file(GLOB HEADERS ${STB_PATH}/*.h)

add_library(${PROJECT_NAME} INTERFACE)
target_include_directories(${PROJECT_NAME} INTERFACE ${STB_PATH})
