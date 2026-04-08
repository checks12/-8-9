#include <iostream>
using namespace std;

int main() {
    for (int i = 10; i <= 99; i++) {
        int a = i / 10;
        int b = i % 10;

        if (a != b) {
            cout << i << " ";
        }
    }

    return 0;
}