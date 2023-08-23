#include "mainSDK.h"
#include "mainClass.h"

int main()
{
    try
    {
        vWindow* _window = new vWindow;
    } 
    catch (const std::exception& e)
    {
        std::cerr << "Error: " << e.what() << std::endl;
        return EXIT_FAILURE;
    }
    
    return EXIT_SUCCESS;
}