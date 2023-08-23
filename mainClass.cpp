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
    glfwWindowHint(GLFW_CLIENT_API, GLFW_NO_API);
    glfwWindowHint(GLFW_RESIZABLE, GLFW_FALSE);
    mWindow = glfwCreateWindow(_width, _height, _windowName, nullptr, nullptr);
}

bool vWindow::vLoop()
{
    while (glfwWindowShouldClose(mWindow))
    {
        glfwPollEvents();
    }
}

bool vWindow::vClean()
{
    glfwDestroyWindow(mWindow);
    glfwTerminate();
}