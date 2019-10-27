cmake_minimum_required(VERSION 3.15)
project(imgui LANGUAGES CXX)

set(IMGUI_PATH ../imgui)

file(GLOB SOURCES ${IMGUI_PATH}/*.cpp)
file(GLOB HEADERS ${IMGUI_PATH}/*.h)

add_library(${PROJECT_NAME} STATIC ${SOURCES} ${HEADERS})
set_target_properties(${PROJECT_NAME} PROPERTIES
        CXX_STANDARD 17
        #        CXX_STANDARD_REQUIRED YES
        #        CXX_EXTENSIONS NO
        )
target_include_directories(${PROJECT_NAME} PUBLIC ${IMGUI_PATH})
