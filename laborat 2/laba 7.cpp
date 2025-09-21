#include <iostream>
#define _USE_MATH_DEFINES
#include <cmath>
#include <iomanip>
using namespace std;
int main()
{
    double x, y;
    char z;
    cout << "Введите x: ";
    cin >> x;
    cout << "Введите y: ";
    cin >> y;
    cout << "Введите z: ";
    cin >> z;
    cout << z;
    
    switch (z)
    {
    case '+':
        cout << "Сумма: " << (x + y);
        break;
    case '-':
        cout << "Разность: " << (x - y);
        break;
    case '*':
        cout << "Произведение: " << (x * y);
    default:
        cout << "Неправильные вводные";
        break;
    }
    
    return 0;
}