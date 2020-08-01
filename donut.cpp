//giving one last proper shot at donut code.
//first lets get the basic circle rendered. will add more stuff later as 
//the work progresses

#include <iostream>
#include <bits/stdc++.h>
#include <stdlib.h>
#include <windows.h>
using namespace std;

float del_theta = 0.07; //control theta change. will add more functionality later.

void HideCursor()
{
    HANDLE consoleHandle = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_CURSOR_INFO cursorInfo;
    cursorInfo.bVisible = false;
    cursorInfo.dwSize = 200;
    SetConsoleCursorInfo(consoleHandle, &cursorInfo);
}

void render()
{

}

int main()
{
    HideCursor();
    render();
    return 0;
}