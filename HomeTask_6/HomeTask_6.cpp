#include <iostream>
#include <Windows.h>

using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);


    int week, day;
    cout << "Введите количество дней: \n";
    cin >> day;

    week = day / 7;
    day = day % 7;

    cout << week << " недель " << day << " дней ";

    return 0;
}


