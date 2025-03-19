#include <iostream>

int main() {
    double n1, n2;
    char op;

    
    std::cout << "Welcome to the basic calculator!" << std::endl;
    std::cout << "Please enter two numbers:" << std::endl;

  
    std::cout << "Enter the first number: ";
    std::cin >> n1;
    std::cout << "Enter the second number: ";
    std::cin >> n2;

    
    std::cout << "Choose an operation (+, -, *, /): ";
    std::cin >> op;

    
    switch (op) {
        case '+':
            std::cout << "Result: " << n1 + n2 << std::endl;
            break;
        case '-':
            std::cout << "Result: " << n1 - n2 << std::endl;
            break;
        case '*':
            std::cout << "Result: " << n1 * n2 << std::endl;
            break;
        case '/':
           
            if (n2 != 0) {
                std::cout << "Result: " << n1 / n2 << std::endl;
            } else {
                std::cout << "Error: Division by zero is not allowed!" << std::endl;
            }
            break;
        default:
            std::cout << "Error: Invalid operation!" << std::endl;
            break;
    }

    return 0;
}

