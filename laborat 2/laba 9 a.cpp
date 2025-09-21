#include <iostream>
#define _USE_MATH_DEFINES
#include <cmath>
#include <iomanip>
using namespace std;
int main()
{
    double x, y;
    cout << "Введите x: ";
    cin >> x;
    cout << "Введите y: ";
    cin >> y;

    if (x >= -2 && x <= 0 && y >= 0 && y <= 1)
    {
        cout << "Входит";
    }
    else
    {
        cout << "Не входит";
    }

    return 0;
}