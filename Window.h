#include <iostream>
#include <ctime>
#include <windows.h>
#include <conio.h>
#include "Global Constants.h"
#include "Prototype.h"

using namespace std;

void sizeWindow(int width = 500, int hight = 500, int top = 0, int left = 0) {
    HWND hWindowConsole = GetConsoleWindow();
    MoveWindow(hWindowConsole, top, left, width, hight, true);
}
