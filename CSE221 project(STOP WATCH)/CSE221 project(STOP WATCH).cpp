// Digital clock.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <conio.h>
#include <windows.h>
using namespace std;

int main()
{
    system("CLS");
    int HH = 0, MM = 0, SS = 0;
    cout << "\n\t\t\t Press any key start. \n";
    cout << "\n\t\t\t\t STOP WATCH \n";
    cout << "\n\t\t\t \t HH: MM: SS";

    cout << "\n\t\t\t \t " << HH << " : " << MM << " : " << SS;

    _getch();
    while (!_kbhit())
    {
        SS++;
        Sleep(1000);
        if (SS > 59)
        {
            MM++;
            SS = 0;
        }
        if (MM > 59)
        {
            HH++;
            MM = 0;
        }
        system("CLS");
        cout << "\n\t\t stopwatch";
        cout << "\n\t\t HH: MM: SS";
        cout << "\n\t\t " << HH << " : " << MM << " : " << SS;
        cout << "\n\t\t press any key to stop";

    }
    _getch();
    cout << "\n\t\t the time after pausing is";
    cout << "\n\t\t " << HH << " : " << MM << " : " << SS;
    _getch();
    return 0;
}




