#include <iostream>
#define _USE_MATH_DEFINES
#include <cmath>
#include <iomanip>
using namespace std;
int main()
{
    double x, y, z, a;
    cout << "Введите x: ";
    cin >> x;
    cout << "Введите y: ";
    cin >> y;
    cout << "Введите z: ";
    cin >> z;

    const double sum = x + y + z;
    const double sumquad = pow(x, 2) + pow(y, 2) + pow(z, 2);
    const double Max = max(x, max(y, z));

    if (Max <= (sum - Max))
    {
        cout << "Треугольник со сторонами x, y, z сущетсвует" << endl;
        a = 1;
    }
    else
    {
        cout << "Треугольник со сторонами x, y, z не сущетсвует" << endl;
        a = 0;
    }

    if (a == 1)
    {
        if (x == y || x == z || y == z)
        {
            cout << "Он равнобедренный";
        }
        else if (x == y && x == z)
        {
            cout << "Он равносторонний";
        }
        else if (pow(Max, 2) == sumquad - pow(Max, 2))
        {
            cout << "Он прямоугольный";
        }
    }

    return 0;
}