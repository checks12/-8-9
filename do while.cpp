#include <iostream>
using namespace std;

int main() {
    int i = 10;

    do {
        int a = i / 10;
        int b = i % 10;

        if (a != b) {
            cout << i << " ";
        }

        i++;
    } while (i <= 99);

    return 0;
}