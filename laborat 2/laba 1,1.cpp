#include <iostream>
#define _USE_MATH_DEFINES
#include <cmath>
#include <iomanip>
using namespace std;
int main()
{
    double a, b, a0, b0;
    cout << "Введите a: ";
    cin >> a;
    cout << "\n"
         << "Введите b: ";
    cin >> b;
    cout << "\n"
         << "Введите a0: ";
    cin >> a0;
    cout << "\n"
         << "Введте b0: ";
    cin >> b0;
    cout << "\n";

    double s1 = a * b;
    double s2 = a0 * b0;
    if (s1 > s2)
    {
        cout << fixed << setprecision(2) << "Площадь первого: " << (s1);
    }
    else
    {
        cout << fixed << setprecision(2) << "Площадь второго: " << (s2);
    }
    return 0;
}