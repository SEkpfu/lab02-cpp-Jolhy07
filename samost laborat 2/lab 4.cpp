#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main()
{
    int x;

    cout << "Введите количество грибов: ";
    cin >> x;

    const int last_number = x % 10;

    if (last_number == 1)
    {
        cout << "Джонни собрал  " << x << " гриб";
    }
    else if (last_number > 1 && last_number < 5)
    {
        cout << "Джонни собрал " << x << " гриба";
    }
    else
    {
        cout << "Джонни собрал " << x << " грибов";

        return 0;
    }
}
