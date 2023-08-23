#include "mainClass.h"

vWindow::vWindow() : vWidth(800), vHeight(600), vTitle("Hello world")
{
    this->vInit(vWidth, vHeight, vTitle); 
    this->vLoop();
    this->vClean();
}

vWindow::vWindow(int _width, int _height, const char* _windowName) : vWidth(_width), vHeight(_height), vTitle(_windowName)
{
    this->vInit(vWidth, vHeight, vTitle); 
    this->vLoop();
    this->vClean();
}

bool vWindow::vInit(int _width, int _height, const char* _windowName)
{
    glfwWindowHint(GLFW_CLIENT_API, GLFW_NO_API); // Detaches glfw from OpenGL
    glfwWindowHint(GLFW_RESIZABLE, GLFW_FALSE); // Prevents glfw from handeling resizing
    mWindow = glfwCreateWindow(_width, _height, _windowName, nullptr, nullptr); // Handles cross-platform window creation
}

bool vWindow::vLoop()
{
    while (glfwWindowShouldClose(mWindow)) // Check for closing event
    {
        glfwPollEvents();
    }
}

bool vWindow::vClean()
{
    glfwDestroyWindow(mWindow); // Handles window distruction
    glfwTerminate(); // Halts glfw operation
}