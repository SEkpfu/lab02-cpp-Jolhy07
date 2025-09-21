#include <iostream>
#define _USE_MATH_DEFINES
#include <cmath>
#include <iomanip>
using namespace std;
int main()
{
    int number;
    double weight;

    cout << "Единица измерения(1-5): ";
    cin >> number;
    cout << "Масса: ";
    cin >> weight;

    switch (number)
    {
    case 1:
    {
        cout << "Масса в кг: " << weight;
        break;
    }
    case 2:
    {
        const double weight1 = weight / 1000000;
        cout << "Масса в кг: " << weight1;
        break;
    }
    case 3:
    {
        const double weight1 = weight / 1000;
        cout << "Масса в кг: " << weight1;
        break;
    }
    case 4:
    {
        const double weight1 = weight * 1000;
        cout << "Масса в кг: " << weight1;
        break;
    }
    case 5:
    {
        const double weight1 = weight * 100;
        cout << "Масса в кг: " << weight1;
        break;
    }
    default:
    {
        cout << "Неправильный тип ввода";
        break;
    }
    }

    return 0;
}