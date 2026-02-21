# Factorial Comparison (C++)

A robust C++ demonstration comparing **recursive** and **iterative** approaches to calculating the factorial of a non-negative integer $n$ (denoted as $n!$).

---

## Overview

This program explores two fundamental programming paradigms to solve the same mathematical problem. While both methods yield the same result, they differ in memory usage and execution style.

### Logic Flow

The factorial of a number is the product of all positive integers less than or equal to $n$.

1.  **Recursive Approach ($n! = n \times (n-1)!$):**
    - **Base Case:** If $n \leq 1$, return $1$.
    - **Recursive Step:** Call the function again with $n-1$.
2.  **Iterative Approach:**
    - Uses a `for` loop to accumulate the product from $2$ up to $n$.

---

## Code Structure

The program implements two distinct functions to highlight the syntax differences:

### Recursive Implementation

    ```cpp
    int factorialRec(int n) {
        if (n <= 1) {
            return 1;
        }
        return n * factorialRec(n - 1);
    }
    ```

### Iterative Implementation

    ```cpp
    int factorialIter(int n) {
        int result = 1;
        for(int i = 2; i <= n; i++) {
            result *= i;
        }
        return result;
    }
    ```

---

## How to Run

Follow these steps to compile and execute the comparison tool:

1.  **Clone the repository** (or save the code as `main.cpp`).
2.  **Compile the code** using `g++` or any standard C++ compiler:
    ```bash
    g++ main.cpp -o factorial-2versions
    ```
3.  **Run the executable:**
    ````bash
    ./factorial-2versions    ```
    ````

### Sample Output

The program validates both methods against several test cases:

- $n=0$ (Result: 1)
- $n=5$ (Result: 120)
- $n=10$ (Result: 3,628,800)
