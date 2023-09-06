#ifndef UNICODE
#define UNICODE
#endif

#include <iostream>
#include <windows.h>
#include "includes/widgets/items.hpp"
#include "includes/widgets/window.hpp"
#include "includes/widgets/window.cpp"

int WINAPI wWinMain(HWND hwnd, HINSTANCE hInstance, HINSTANCE hPrevInstance, PWSTR pCmdLine, int nCmdShow)
{

    // Create window
    Window window;

    window.createWindow();

    // Instanciate widgets
    Items items;

    items.createButton(hwnd, L"OK", 10, 10, 100, 25);

    ShowWindow(hwnd, nCmdShow);

    // Run the message loop.

    MSG msg = { };
    while (GetMessage(&msg, NULL, 0, 0) > 0)
    {
        TranslateMessage(&msg);
        DispatchMessage(&msg);
    }

    return 0;
}


