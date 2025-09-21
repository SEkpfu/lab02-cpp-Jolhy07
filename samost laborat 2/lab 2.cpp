#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main()
{
    double x, r;
    cout << "Введите x: ";
    cin >> x;

    if (x < -2.5)
    {
        r = sin(M_PI * fabs(x)) / (x - 3);
    }
    else if (x > 2.5)
    {
        r = 2.5 * pow(x, 4);
    }
    else
    {
        r = sqrt(2 * x + 1);
    }

    cout << "r: " << r;

    return 0;
}