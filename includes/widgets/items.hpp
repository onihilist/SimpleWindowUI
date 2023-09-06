#include <iostream>
#include <windows.h>
#include <cstring>

using namespace std;

class Items{

public:

    void createButton(HWND hInstance, LPCTSTR text, int x, int y, int width, int height) {
        HWND button = CreateWindow(
            L"BUTTON",
            text,
            WS_TABSTOP | WS_VISIBLE | WS_CHILD | BS_DEFPUSHBUTTON,
            x, 
            y, 
            width, 
            height,
            hInstance,
            NULL,
            (HINSTANCE)GetWindowLongPtr(hInstance, GWLP_HINSTANCE),
            NULL
        );
    }

};
