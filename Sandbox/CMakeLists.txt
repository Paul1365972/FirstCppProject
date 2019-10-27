cmake_minimum_required(VERSION 3.15)
project(Sandbox LANGUAGES CXX)

#set(CMAKE_CXX_STANDARD 17)

add_executable(${PROJECT_NAME} src/main.cpp)
set_target_properties(${PROJECT_NAME} PROPERTIES
        CXX_STANDARD 17
#        CXX_STANDARD_REQUIRED YES
#        CXX_EXTENSIONS NO
        )

#target_link_libraries(${PROJECT_NAME} Engine)
#target_link_libraries(${PROJECT_NAME} Engine -static-libstdc++)
target_link_libraries(${PROJECT_NAME} Engine -static)
