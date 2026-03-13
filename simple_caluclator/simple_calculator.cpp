#include <iostream>
#include <cmath>

struct Calculator {
    double currentResult;

    void setPrimaryValue(double value) {
        std::cout << "Setting up the value: " << value << std::endl;
        currentResult = value;
    }

    void display() {
        std::cout << "Result: " << currentResult << std::endl << std::endl;
    }

    void add(double value) {
        std::cout << "Adding: " << value << std::endl;
        currentResult += value;
    }

    void subtract(double value) {
        std::cout << "Subtracting: " << value << std::endl;
        currentResult -= value;
    }

    void multiply(double value) {
        std::cout << "Multiplying: " << value << std::endl;
        currentResult *= value;
    }
    
    void divide(double value) {
        std::cout << "Dividing: " << value << std::endl;
        if (value == 0) {
            std::cout << "You can't divide by 0!" << std::endl;
        } else {
            currentResult /= value;
        }
    }

    void power(int value) {
        std::cout << "Increasing result to the power of " << value << std::endl;
        currentResult = pow(currentResult, value);
    }

    void reset() {
        std::cout << "Resetting calculator" << std::endl;
        currentResult = 0;
    }
};

void reset();

int main() {
    Calculator calculator;
    calculator.setPrimaryValue(0);

    std::cout << "=== Simple Calculator ===" << std::endl << std::endl;
    calculator.display();

    calculator.add(5);
    calculator.display();

    calculator.subtract(3);
    calculator.display();

    calculator.multiply(50);
    calculator.display();

    calculator.divide(2);
    calculator.display();

    calculator.divide(0);
    calculator.display();

    calculator.power(2);
    calculator.display();

    calculator.reset();
    calculator.display();
    
    return 0;
}

