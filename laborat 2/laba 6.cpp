#include <iostream>
using namespace std;
int main()
{
    int x; // переменная для хранения оценки
    cout << "введите свою оценку: ";
    cin >> x;
    // оператор множественного выбора
    switch (x)
    {
    case 5:
        cout << "отлично";
        break;
    case 4:
        cout << "хорошо";
        break;
    case 3:
        cout << "удовлетворительно";
        break;
    case 2:
    case 1:
        cout << "плохо ";
        break;
    default:
        cout << "неверныe данные";
    }
    return 0;
}