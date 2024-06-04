#include <iostream>

int add(int num1, int num2) {
    return num1 + num2;
}

int subtract(int num1, int num2) {
    return num1 - num2;
}

int multiply(int num1, int num2) {
    return num1 * num2;
}

double divide(int dividend, int divisor) {
    if (divisor == 0) {
        std::cerr << "Error: division by 0\n";
        return 0;
    }
    return dividend / divisor;
}

int modulus(int dividend, int divisor) {
    return dividend % divisor;
}

void promptNumbers(int &num1, int &num2) {
    std::cout << "Enter the first number\n";
    std::cin >> num1;
    if (std::cin.fail()) {
        std::cerr << "Invalid input\n";
        return;
    }

    std::cout << "Enter the second number\n";
    std::cin >> num2;
    if (std::cin.fail()) {
        std::cerr << "Invalid input\n";
        return;
    }
}

void calculator() {
    while(true) {
        std::cout << "Calculator\n";
        std::cout << "Select an operation:\n0. Exit\n1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n5. Modulus\n6. Exit\n";
        int op;
        std::cin >> op;
        if (std::cin.fail() || op < 0 || op > 6) {
            std::cerr << "Invalid input: must be integer between 0-5\n";
            return;
        }

        int num1, num2;

        switch (op) {
            case 0: 
                std::cout << "Exiting...\n";
                exit(0);
            case 1:
                promptNumbers(num1, num2);
                std::cout << num1+num2 << "\n";
                continue;
            case 2:
                promptNumbers(num1, num2);
                std::cout << subtract(num1, num2) << "\n";
                continue;
            case 3: 
                promptNumbers(num1, num2);
                std::cout << multiply(num1, num2) << "\n";
                continue;
            case 4:
                promptNumbers(num1, num2);
                std::cout << divide(num1, num2) << "\n";
                continue;
            case 5: 
                promptNumbers(num1, num2);
                std::cout << modulus(num1, num2) << "\n";
                continue;
            case 6:
                std::cout << "Exiting...\n";
                return;
            default:
                std::cout << "Exiting...\n";
                return;
            }
    }
}