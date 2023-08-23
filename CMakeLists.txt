cmake_minimum_required(VERSION 3.2)
project(vulkan_p1 C CXX)
add_executable(${PROJECT_NAME} main.cpp)
include(
    ${VK_SDK_PATH}/Include
    ${GLFW}/include
    )
target_link_libraries()