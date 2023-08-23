cmake_minimum_required(VERSION 3.2)
project(vulkan_p1 C CXX)
add_executable(${PROJECT_NAME} main.cpp)
target_include_directories(
    ${PROJECT_NAME} PUBLIC
    "${VULKAN_SDK}/Include"
    "${GLFW}/include"
    )
target_link_directories(
    ${PROJECT_NAME} PUBLIC
    "${VULKAN_SDK}/Lib"
    "${GLFW}/lib"
    )
target_link_libraries(
    ${PROJECT_NAME} PUBLIC
    "vulkan-1.lib"
    "glfw3.lib"
)