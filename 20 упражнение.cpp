#include <iostream>
#include <cmath>
#include <stdexcept>

double compute(double x, double y) {
    // Первая часть: аргумент логарифма ln(y - sqrt(x))
    // Требуется x >= 0 для sqrt
    if (x < 0.0) {
        throw std::domain_error("Аргумент sqrt(x) недопустим: x < 0");
    }
    double inner = y - std::sqrt(x);

    if (!(inner > 0.0)) {
        throw std::domain_error("Аргумент логарифма ln(y - sqrt(x)) должен быть положителен");
    }

    double logPart = std::log(inner);

    // Вторая часть: (x - y / (x + x^2/4))
    double denom = x + (x * x) / 4.0;
    if (denom == 0.0) {
        throw std::domain_error("Деление на ноль во второй части выражения");
    }
    double secondPart = x - y / denom;

    return logPart * secondPart;
}

int main() {
    try {
        double x, y;
        std::cout << "Введите x и y: ";
        if (!(std::cin >> x >> y)) {
            std::cerr << "Некорректный ввод\n";
            return 1;
        }

        double result = compute(x, y);
        std::cout << "Результат: " << result << "\n";
    } catch (const std::exception& e) {
        std::cerr << "Ошибка: " << e.what() << "\n";
        return 1;
    }
    return 0;
}