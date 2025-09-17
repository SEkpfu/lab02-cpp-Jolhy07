#include <iostream>
#define _USE_MATH_DEFINES
#include <cmath>
#include <iomanip>
using namespace std;
int main()
{
    int a;
    cout << "Введите a: ";
    cin >> a;
    cout << "\n";

    if (a > 0)
    {
        cout << "Число 'a' больше 0" << endl;
    }
    else if (a == 0)
    {
        cout << "Число 'a' равно 0";
    }
    else
    {
        cout << "Число 'a' меньше 0" << endl;
    }
    if (!a == 0)
    {
        int b = a % 2;
        if (b == 0)
        {
            cout << "Число 'a' чётное";
        }
        else
        {
            cout << "Число 'a' нечётное";
        }
    }
    return 0;
}