#include <iostream>
#define _USE_MATH_DEFINES
#include <cmath>
#include <iomanip>
using namespace std;
int main()
{
    int a, b, c, count, sum10;
    count = 0;
    sum10 = 0;
    cout << "Первое число: ";
    cin >> a;
    cout << "Второе число: ";
    cin >> b;
    cout << "Третье число: ";
    cin >> c;
    const double Max = max(a, max(b, c));
    const double Min = min(a, min(b, c));
    const double sum = a + b + c;
    const double average = sum - Max - Min;

    if (a == Min)
    {
        cout << "Номер наименьшего числа: 1" << endl;
    }
    else if (b == Min)
    {
        cout << "Номер наименьшего числа: 2" << endl;
    }
    else
    {
        cout << "Номер наменьшего числа: 3" << endl;
    }

    if (Max <= 10)
    {
        sum10 += 0;
    }
    else
    {
        if (a > 10)
        {
            sum10 += a;
        }

        if (b > 10)
        {
            sum10 += b;
        }

        if (c > 10)
        {
            sum10 += c;
        }
    }

    if (a % 2 == 0)
    {
        count += 1;
    }

    if (b % 2 == 0)
    {
        count += 1;
    }

    if (c % 2 == 0)
    {
        count += 1;
    }

    cout << "Сумма чисел больших 10: " << sum10 << "\n"
         << "Количество чётных чисел: " << count << "\n"
         << "Среднее из чисел: " << average;

    return 0;
}