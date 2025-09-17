#include <iostream>
#define _USE_MATH_DEFINES
#include <cmath>
#include <iomanip>
using namespace std;
int main()
{
    double r, a, b;
    cout << "Введите радиус: ";
    cin >> r;
    cout << "Введите первую сторону: ";
    cin >> a;
    cout << "Введите вторую сторону: ";
    cin >> b;

    double d = 2 * r;

    if (a == b && d <= a)
    {
        cout << "Уместится";
    }
    else if (d <= max(a, b))
    {
        cout << "Уместится";
    }
    else
    {
        cout << "Не уместится";
    }

    return 0;
}