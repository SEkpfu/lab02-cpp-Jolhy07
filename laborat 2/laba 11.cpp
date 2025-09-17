#include <iostream>
#define _USE_MATH_DEFINES
#include <cmath>
#include <iomanip>
using namespace std;
int main()
{
    int byear, bmounth, bday, year, mounth, day;
    cout << "Введите год рождения: ";
    cin >> byear;
    cout << "Введите месяц рождения: ";
    cin >> bmounth;
    cout << "Введите число, в которые вы родились: ";
    cin >> bday;
    cout << "Введите нынешний год: ";
    cin >> year;
    cout << "Введите нынешний месяц: ";
    cin >> mounth;
    cout << "Введите сеголняшний день: ";
    cin >> day;

    if ((bmounth == mounth && bday > day) || bmounth > mounth)
    {
        const int age = year - byear - 1;
        const int last_number = age % 10;

        if (last_number == 1)
        {
            cout << "Вам " << age << " год";
        }
        else if (last_number > 1 && last_number < 5)
        {
            cout << "Вам " << age << " года";
        }
        else
        {
            cout << "Вам " << age << " лет";
        }
    }
    else
    {
        const int age = year - byear;
        const int last_number = age % 10;

        if (last_number == 1)
        {
            cout << "Вам " << age << " год";
        }
        else if (last_number > 1 && last_number < 5)
        {
            cout << "Вам " << age << " года";
        }
        else
        {
            cout << "Вам " << age << " лет";
        }
    }

    return 0;
}