cmake_minimum_required(VERSION 3.15)
project(Engine LANGUAGES CXX)

file(GLOB_RECURSE SOURCES src/*.cpp)
file(GLOB_RECURSE HEADERS src/*.h)

add_library(${PROJECT_NAME} STATIC ${SOURCES} ${HEADERS})
set_target_properties(${PROJECT_NAME} PROPERTIES
        CXX_STANDARD 17
        #        CXX_STANDARD_REQUIRED YES
        #        CXX_EXTENSIONS NO
        )
target_include_directories(${PROJECT_NAME} PUBLIC src)

add_subdirectory(vendor/GLFW)
add_subdirectory(vendor/glad)
add_subdirectory(vendor/glm)
add_subdirectory(vendor/imgui_cmake)
add_subdirectory(vendor/stb_cmake)
target_link_libraries(${PROJECT_NAME} PRIVATE glfw PRIVATE glad PRIVATE stb PUBLIC glm PUBLIC imgui)
