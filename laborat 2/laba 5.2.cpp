#include <iostream>
#define _USE_MATH_DEFINES
#include <cmath>
#include <iomanip>
using namespace std;
int main()
{
    double X, Y, Z, a, b;
    cout << "Введите X: ";
    cin >> X;
    cout << "Введите Y: ";
    cin >> Y;
    cout << "Введите Z: ";
    cin >> Z;
    cout << "Введите a: ";
    cin >> a;
    cout << "Введите b: ";
    cin >> b;

    if (min(X, min(Y, Z)) <= min(a, b) && min(max(X, min(Y, Z)), max(Y, min(X, Z))) <= max(a, b))
    {
        cout << "Пройдёт";
    }
    else
    {
        cout << "Не пройдёт";
    }

    return 0;
}