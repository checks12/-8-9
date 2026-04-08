#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double x, y;

    cout << "x = ";
    cin >> x;
    cout << "y = ";
    cin >> y;

    double circle = x*x + y*y;

    if ((circle < 144 && y > x))
        cout << "Да";
    else if (circle == 144 || y == x)
        cout << "На границе";
    else
        cout << "Нет";

    return 0;
}