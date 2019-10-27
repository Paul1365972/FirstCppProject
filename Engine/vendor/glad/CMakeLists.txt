cmake_minimum_required(VERSION 3.15)
project(glad LANGUAGES C)

#add_library(${PROJECT_NAME} STATIC include/glad/glad.h src/glad.c)
add_library(${PROJECT_NAME} STATIC src/glad.c)
target_include_directories(${PROJECT_NAME} PUBLIC include)
