#include <iostream>
using namespace std;

int main()
{
    float x;

metka:
    cout << "x = ";     // метка
    cin >> x;

    if (x)
        cout << "y = " << 1 / x << endl;
    else
    {
        cout << "функция не определена\n";
        goto metka;     // передача управления метке
    }

    return 0;
}