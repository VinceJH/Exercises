// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <X11/Xlib.h>

#include <iostream>
using namespace std;
void ShowXWindows()
{

    /* this variable will store the ID of the newly created window. */
    Window win;

    /* these variables will store the window's width and height. */
    int win_width;
    int win_height;

    /* these variables will store the window's location. */
    int win_x;
    int win_y;

    /* calculate the window's width and height. */
    win_width = DisplayWidth(display, screen_num) / 3;
    win_height = DisplayHeight(display, screen_num) / 3;

    /* position of the window is top-left corner - 0,0. */
    win_x = win_y = 0;

    /* create the window, as specified earlier. */
    win = XCreateSimpleWindow(display,
        RootWindow(display, screen_num),
        win_x, win_y,
        win_width, win_height,
        win_border_width, BlackPixel(display, screen_num),
        WhitePixel(display, screen_num));
}
int main()
{
    cout << "Hello World!\n";
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
