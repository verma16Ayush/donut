//giving one last proper shot at donut code.
//first lets get the basic circle rendered. will add more stuff later as
//the work progresses

#include <iostream>
#include <bits/stdc++.h>
#include <cstdlib>
#include <windows.h>
#include <cmath>
// #define twoPi 6.28;
using namespace std;

float delTheta = 0.07; //control theta change. will add more functionality later.
float r1 = 1, r2 = 2;
float circleX, circleY;
const int screenHeight = 40, screenWidth = 80;
float twoPi = 2 * 3.14;
// char screen[screenHeight][screenWidth];
vector< vector<char> > screen(screenHeight, vector<char>(screenWidth, ' '));

void HideCursor()
{
    HANDLE consoleHandle = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_CURSOR_INFO cursorInfo;
    cursorInfo.bVisible = false;
    cursorInfo.dwSize = 200;
    SetConsoleCursorInfo(consoleHandle, &cursorInfo);
}

void Render()
{
    for (int i = 0; i < screenHeight; i++)
    {
        for (int j = 0; j < screenWidth; j++)
        {
            cout << screen[i][j];
        }
        cout << endl;
    }

    system("cls");
}

void Calculate()
{
    while (true)
    {
        for (float theta = 0; theta < twoPi; theta += delTheta)
        {
            circleX = r1 + r2 * cos(theta);
            circleY = r2 * sin(theta);

            int xp = screenWidth / 2 + circleX;
            int yp = screenHeight / 2 - circleY;

            if(xp <= screenWidth && yp <= screenHeight)
            {
                screen[yp][xp] = '.';
            }
            // screen[yp][xp] = '.';
            Render();
        }
    }
}

int main()
{
    HideCursor();
    Calculate();
    // screen[2][2] = 'P';
    // Render();
    return 0;
}