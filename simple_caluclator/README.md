# Simple Calculator (C++)

A lightweight C++ program demonstrating basic arithmetic operations and state management using a structured object-oriented approach.

## Overview

This program acts as a straightforward stateful calculator. It relies on a `Calculator` struct that maintains a running total and provides various methods to manipulate that total, including built-in protection against mathematical errors like division by zero.

### Logic Flow

The `Calculator` struct follows two core rules for its operations:

1. **State Tracking:** Every mathematical operation (add, subtract, multiply, power) directly updates the `currentResult` variable stored within the struct.
2. **Safety Checks:** Before performing a division, the `divide` method checks if the divisor is $0$. If it is, it rejects the operation and alerts the user to prevent runtime errors.

## Code Structure

Here is the core calculator struct highlighting the state management and safety logic:

```cpp
struct Calculator {
    double currentResult;

    // ... setup and display methods ...

    void add(double value) {
        std::cout << "Adding: " << value << std::endl;
        currentResult += value;
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

    // ... other methods (subtract, multiply, reset) ...
};
```

## How to Run

1. Clone this repository to your local machine.
2. Compile the code using a standard C++ compiler:
   ```bash
   g++ main.cpp -o simple_calculator
   ```
3. Run the executable:
   ```bash
   ./simple_calculator
   ```
