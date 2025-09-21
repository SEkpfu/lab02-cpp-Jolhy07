#include <iostream>
#define _USE_MATH_DEFINES
#include <cmath>
#include <iomanip>
using namespace std;
int main()
{
    double x, f;
    cout << "Введите x: ";
    cin >> x;
    cout << "\n";
    if (x <= -2)
    {
        double f = 0;
    }
    else if (x > 0)
    {
        f = 1 / (pow(x, 2.0) + 4 * x - 5);
    }
    else
    {
        f = pow(x, 2.0) + 4 * x + 5;
    }

    if (isinf(f) || isnan(f))
    {
        cout << "Нечисловое значение";
    }
    else
    {
        cout << fixed << setprecision(2) << "x=" << x << "\n"
             << "Функция f(x)=" << f;
    }

    return 0;
}