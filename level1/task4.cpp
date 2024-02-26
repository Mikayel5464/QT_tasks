#include <iostream>

double add(double, double);
double sub(double, double);
long double mul(double, double);
double div(double, double);

int main() {
    double num1 = 0;
    double num2 = 0;

    std::cout << "Enter the first number: ";
    std::cin >> num1;
    std::cout << "Enter the second number: ";
    std::cin >> num2;

    std::cout << "num1 + num2 = " << add(num1, num2) << std::endl;
    std::cout << "num1 - num2 = " << sub(num1, num2) << std::endl;
    std::cout << "num1 * num2 = " << mul(num1, num2) << std::endl;
    std::cout << "num1 / num2 = " << div(num1, num2) << std::endl;

    return 0;
}

double add(double a, double b) {
    return a + b;
}

double sub(double a, double b) {
    return a - b;
}

long double mul(double a, double b) {
    return a * b;
}

double div(double a, double b) {
    return a / b;
}
