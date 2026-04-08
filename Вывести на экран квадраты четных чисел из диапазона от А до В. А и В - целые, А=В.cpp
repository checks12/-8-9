#include <iostream>
using namespace std;

int main()
{
    int a, b;

    cout << "a = ";
    cin >> a;

    cout << "b = ";
    cin >> b;

    for (int i = (a % 2) ? a + 1 : a; i <= b; i += 2)
        cout << i * i << "\t";

    return 0;
}