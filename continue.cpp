#include <iostream>
using namespace std;

int main()
{
    for (int i = 1; i < 100; ++i)   // перебираем все числа от 1 до 99
    {
        if (i % 2)                  // если число нечетное
            continue;               // переход к следующей итерации

        cout << i << "\t";          // вывод числа на экран
    }

    return 0;
}