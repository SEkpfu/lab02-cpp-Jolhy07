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

    if (x <= 2 && x >= -2 && y <= 2 && y >= -2)
    {
        cout << 10;
    }
    else if (x <= 4 && x >= -4 && y <= 4 && y >= -4)
    {
        cout << 5;
    }
    else
    {
    cout << 0;
    }

    return 0;
}