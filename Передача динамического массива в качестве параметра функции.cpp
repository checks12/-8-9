#include <iostream>
using namespace std;

void print(int *mas, int n)
{
    for (int i = 0; i < n; i++)
        cout << mas[i] << "\t";
}
int main ()
{
    int n = 10;
    int *a = new int[n];

    for (int i = 0; i < n; i++)
        a[i] = i * i;
        print(a, 10);

    return 0;
}