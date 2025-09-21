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

    if ((y + 2 * x) <= 2 && y >= 0 && x >= 0)
    {
        cout << "Входит";
    }
    else
    {
        cout << "Не входит";
    }

    return 0;
}