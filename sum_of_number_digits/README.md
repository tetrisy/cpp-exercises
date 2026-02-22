# Recursive Digit Sum (C++)

A lightweight C++ program demonstrating recursion by calculating the sum of the digits of a given integer $n$.

## Overview

This program calculates the sum of all individual digits within an integer. It relies on a recursive approach where the function repeatedly calls itself, peeling off the last digit using the modulo operator until it hits the base case of a single-digit number.

### Logic Flow

The `digitSum(n)` function follows two simple rules:

1. **Base Case:** If $n < 10$, return $n$.
2. **Recursive Step:** Return $(n \bmod 10) + \text{digitSum}(n / 10)$.

## Code Structure

Here is the core recursive function:

```cpp
int digitSum(int n) {
    if(n < 10)
        return n;

    return (n % 10) + digitSum(n / 10);
}
```

## How to Run

1. Clone this repository to your local machine.
2. Compile the code using a standard C++ compiler:
   ```bash
   g++ main.cpp -o recursive_digit_sum
   ```
3. Run the executable:
   ```bash
   ./recursive_digit_sum
   ```
