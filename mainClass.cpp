#include "mainClass.h"

vWindow::vWindow(int _width = 800, int _height = 600, const char* _windowName = "Hello world") : vWidth(_width), vHeight(_height), vTitle(_windowName)
{
    this->vInit(vWidth, vHeight, vTitle); 
    this->vLoop();
    this->vClean();
}

bool vWindow::vInit(int _width, int _height, const char* _windowName)
{
    glfwWindowHint(GLFW_CLIENT_API, GLFW_NO_API);
    glfwWindowHint(GLFW_RESIZABLE, GLFW_FALSE);
    mWindow = glfwCreateWindow(_width, _height, _windowName, nullptr, nullptr);
}