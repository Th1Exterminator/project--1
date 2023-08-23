#ifndef m_class
#define m_calss
#pragma once

#include "mainSDK.h"

class vWindow // Primary window class
{
public:
    vWindow(); // Primary function
    vWindow(int _height, int _width, const char* _windowName);
private:
    bool vInit(int _height, int _width, const char* _windowName);  // Initalization
    bool vLoop(); // Main loop
    bool vClean(); // Final cleanup

    GLFWwindow* mWindow; // Primary window
    const int vHeight; // Height buffer
    const int vWidth; // Width buffer 
    const char* vTitle; // Title buffer
};

#endif