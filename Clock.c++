#include <bits/stdc++.h>
#include <windows.h>
using namespace std;
int main()
{
    int hours = 0;
    int min = 0;
    int sec = 0;
    int days = 0;
    cout << "Enter Hours ::\n";
    cin >> hours;
    cout << "Enter minutes ::\n";
    cin >> min;
    cout << "Enter seconds ::\n";
    cin >> sec;
    while (true)
    {
        system("cls");
        if (sec > 59)
        {
            min++;
            sec = 0;
        }
        if (min > 59)
        {
            hours++;
            min = 0;
        }
        if (hours > 23)
        {
            hours = 0;
            days++;
        }
        cout << hours << ":" << min << ":" << sec << "\n";
        cout << "days: " << days;
        sec++;
        Sleep(900);
    }
}