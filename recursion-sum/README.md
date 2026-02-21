# Recursive Sum (C++)

A lightweight C++ program demonstrating recursion by calculating the sum of all integers from 1 up to a given number $n$.

## Overview

This program calculates the "Triangular Number" of an integer. It relies on a recursive approach where the function repeatedly calls itself with a decremented value until it hits the base case.

### Logic Flow

The `sum(n)` function follows two simple rules:

1. **Base Case:** If $n \leq 1$, return $1$.
2. **Recursive Step:** Return $n + \text{sum}(n - 1)$.

## Code Structure

Here is the core recursive function:

```cpp
int sum(int n) {
    if (n <= 1) {
        return 1;
    }
    return n + sum(n - 1);
}
```

## How to Run

1. Clone this repository to your local machine.
2. Compile the code using a standard C++ compiler:
   ```bash
   g++ main.cpp -o recursive_sum
   ```
3. Run the executable:
   ```bash
   ./recursive_sum
   ```
