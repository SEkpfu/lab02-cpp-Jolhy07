#include <iostream>
#define _USE_MATH_DEFINES
#include <cmath>
#include <iomanip>
using namespace std;
int main()
{
    double a, b, a0, b0, a1, b1;
    cout << "Введите a: ";
    cin >> a;
    cout << "Ведите b: ";
    cin >> b;
    cout << "Введите a0: ";
    cin >> a0;
    cout << "Введите b0: ";
    cin >> b0;
    cout << "Введите a1: ";
    cin >> a1;
    cout << "Введите b1: ";
    cin >> b1;

    double s = a * b;
    double s0 = a0 * b0;
    double s1 = a1 * b1;

    if (s > s0)
    {
        if (s > s1)
        {
            cout << fixed << setprecision(2) << "Площадь первого: " << s;
        }
        else
        {
            cout << fixed << setprecision(2) << "Площадь третьего: " << s1;
        }
    }
    else
    {
        if (s0 > s1)
        {
            cout << fixed << setprecision(2) << "Площадб второго: " << s0;
        }
        else
        {
            cout << fixed << setprecision(2) << "Площадь третьего: " << s1;
        }
    }

    return 0;
}