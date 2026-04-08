#include <iostream>
using namespace std;

int main()
{
    int a, b;

    cout << "a = ";
    cin >> a;

    cout << "b = ";
    cin >> b;

    int i = a;

    do
        cout << i * i++ << "\t";
    while (i <= b);

    return 0;
}