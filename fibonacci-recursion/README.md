# Recursive Fibonacci (C++)

A lightweight C++ program demonstrating recursion by calculating the Fibonacci sequence up to a given number $n$.

## Overview

This program calculates the $n$-th Fibonacci number. It relies on a recursive approach where the function repeatedly calls itself to sum the two preceding numbers in the sequence until it hits the base cases. The main function demonstrates this by printing the sequence from $0$ to $14$.

### Logic Flow

The `fib(n)` function follows two simple rules:

1. **Base Cases:** If $n = 0$, return $0$. If $n = 1$, return $1$.
2. **Recursive Step:** Return $\text{fib}(n - 1) + \text{fib}(n - 2)$.

## Code Structure

Here is the core recursive function:

```cpp
int fib(int n) {
    if(n == 0)
        return 0;

    if(n == 1)
        return 1;

    return fib(n - 1) + fib(n - 2);
}
```

## How to Run

1. Clone this repository to your local machine.
2. Compile the code using a standard C++ compiler:
   ```bash
   g++ main.cpp -o recursive_fibonacci
   ```
3. Run the executable:
   ```bash
   ./recursive_fibonacci
   ```
