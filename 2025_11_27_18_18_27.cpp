// Sample C++ code
#include <iostream>
using namespace std;

int main() {
    int M, N;
    cout << "Введите целое число M: ";
    cin >> M;
    cout << "Введите целое число N: ";
    cin >> N;

    if (N == 0) {
        cout << "Деление на ноль невозможно." << endl;
        return 0;
    }

    if (M % N == 0) {
        cout << "Частное: " << M / N << endl;
    } else {
        cout << "M на N нацело не делится" << endl;
    }

    return 0;
}