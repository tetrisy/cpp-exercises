# Recursive GCD (C++)

A lightweight C++ program demonstrating recursion by calculating the greatest common divisor (GCD) of two integers $a$ and $b$ using the Euclidean algorithm.

## Overview

This program calculates the Greatest Common Divisor of two integers. It relies on a recursive approach where the function repeatedly calls itself with the previous divisor and the remainder until it hits the base case.

### Logic Flow

The `gcd(a, b)` function follows two simple rules:

1. **Base Case:** If $b = 0$, return $a$.
2. **Recursive Step:** Return $\text{gcd}(b, a \bmod b)$.

## Code Structure

Here is the core recursive function:

```cpp
int gcd(int a, int b) {
    if(b == 0) {
        return a;
    }

    return gcd(b, a % b);
}
```

## How to Run

1. Clone this repository to your local machine.
2. Compile the code using a standard C++ compiler:
   ```bash
   g++ main.cpp -o euclidean_algorithm
   ```
3. Run the executable:
   ```bash
   ./euclidean_algorithm
   ```
