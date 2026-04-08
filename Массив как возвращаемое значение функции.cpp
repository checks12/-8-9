#include <iostream>
using namespace std;

int * creat(int n)
{
    int *mas = new int [n];
    for (int i = 0; i<n; i++)
        mas[i] = i*i;
    return mas;
    
}

void print (int *mas, int n)
{
    for (int i = 0; i < n; i++)
        cout << mas[i] << "\t";
    
}

int main()
{
    int n = 5;
    int *a = creat(n);
    print (a, n);
    return 0;
    
}
    
    