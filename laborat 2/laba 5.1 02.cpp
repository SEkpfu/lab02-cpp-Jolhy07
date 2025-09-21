#include <iostream>
#define _USE_MATH_DEFINES
#include <cmath>
#include <iomanip>
using namespace std;
int main()
{
    double r, a, b, z, c;
    cout << "Введите радиус: ";
    cin >> r;
    cout << "Введите первую сторону: ";
    cin >> a;
    cout << "Введите вторую сторону: ";
    cin >> b;
    cout << "Введите высоту торта: ";
    cin >> z;
    cout << "Введите высоту коробки: ";
    cin >> c;

    double d = 2 * r;

    if (a == b && d <= a && z <= c)
    {
        cout << "Уместится";
    }
    else if (d <= max(a, b) && z <= c)
    {
        cout << "Уместится";
    }
    else
    {
        cout << "Не уместится";
    }

    return 0;
}