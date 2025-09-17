#include <iostream>
#define _USE_MATH_DEFINES
#include <cmath>
#include <iomanip>
using namespace std;
int main()
{
    int date, day;
    cout << "Введите число месяца: ";
    cin >> date;
    cout << "Введите номер дня недели: ";
    cin >> day;
    if (date > 31 || date < 1 || day < 1 || day > 7)
    {
        cout << "Некорректный формат ввода";
    }
    else if (date == 13 && (day == 2 || day == 5))
    {
        cout << "Будьте осторожны";
    }
    else if (date == 17 && day == 5)
    {
        cout << "Сегодня неудачный день";
    }
    return 0;
}