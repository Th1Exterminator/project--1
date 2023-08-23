#ifndef m_class
#define m_calss
#pragma once

#include "mainSDK.h"

class vWindow
{
public:
    vWindow(int _height, int _width, const char* _windowName);
private:
    bool vInit(int _height, int _width, const char* _windowName); 
    bool vLoop();
    bool vClean();

    GLFWwindow* mWindow;
    const int vHeight;
    const int vWidth;
    const char* vTitle;
};

#endif