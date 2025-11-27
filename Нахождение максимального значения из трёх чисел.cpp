#include <iostream>
using namespace std;

float max(float x, float y); 

int main() 
{
    float a = 5.5, b = 3.2, c = 14.1, d;
    d = max(max(a, b), c); 
    cout << "max = " << d << endl;
    return 0;
}

float max(float x, float y) 
{
    return (x > y) ? x : y;
}
