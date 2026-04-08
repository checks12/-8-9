#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double a, b, h, x, y;

    cout << "Введите a: ";
    cin >> a;

    cout << "Введите b: ";
    cin >> b;

    cout << "Введите шаг h: ";
    cin >> h;

    cout << "x\t y" << endl;

    for (x = a; x <= b; x += h)
    {
        // пример функции
        if (x == 0)  
        {
            cout << x << "\t функция не определена" << endl;
        }
        else
        {
            y = 1 / x;  
            cout << x << "\t" << y << endl;
        }
    }

    return 0;
}
