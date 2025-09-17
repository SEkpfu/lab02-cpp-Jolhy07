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

    const double z = pow(x, 2) + pow(y, 2);

    if (z <= 36 && z >= 9 && x >= 0 )
    {
        cout << "Входит";
    }
    else
    {
        cout << "Не входит";
    }

    return 0;
}