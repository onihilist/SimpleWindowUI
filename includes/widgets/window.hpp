#include <iostream>
#include <windows.h>

class Window {

    public:

        Window();
        ~Window();

        LRESULT CALLBACK WindowProc(HWND hwnd, UINT uMsg, WPARAM wParam, LPARAM lParam);
        
        void createWindow(HINSTANCE hInstance, HINSTANCE hPrevInstance, PWSTR pCmdLine, int nCmdShow, LPCTSTR title);
}