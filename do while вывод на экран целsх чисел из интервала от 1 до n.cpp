#include <iostream>
using namespace std;

int main()
{
    int n, i = 1;

    cout << "n = ";
    cin >> n;

    do                     // выводим на экран i, а затем увеличиваем
        cout << i++ << "\t";   // i, т.е. ее значение на единицу
    while (i <= n);        // до тех пор пока i меньше или равна n

    return 0;
}