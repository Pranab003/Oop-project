#include <iostream>

class Calculator {
public:
    double add(double a, double b) {
        return a + b;
    }

    double subtract(double a, double b) {
        return a - b;
    }

    double multiply(double a, double b) {
        return a * b;
    }

    double divide(double a, double b) {
        if (b != 0)
            return a / b;
        throw "Division by zero error!";
    }
};

int main() {
    Calculator calc;
    double num1, num2;
    char operation;
    double result;

    std::cout << "Enter first number: ";
    std::cin >> num1;
    std::cout << "Enter operation (+, -, *, /): ";
    std::cin >> operation;
    std::cout << "Enter second number: ";
    std::cin >> num2;

    try {
        switch (operation) {
            case '+':
                result = calc.add(num1, num2);
                break;
            case '-':
                result = calc.subtract(num1, num2);
                break;
            case '*':
                result = calc.multiply(num1, num2);
                break;
            case '/':
                result = calc.divide(num1, num2);
                break;
            default:
                std::cout << "Invalid operation" << std::endl;
                return 1;
        }
        std::cout << "Result: " << result << std::endl;
    } catch (const char* msg) {
        std::cerr << msg << std::endl;
    }

    return 0;
}
