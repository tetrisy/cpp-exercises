# C++ Factorial Implementation: Recursive vs Iterative

A simple C++ demonstration comparing two common ways to calculate factorials: **Recursion** and **Iteration**. This is a great reference for understanding stack depth versus loop performance in basic algorithms.

## Overview

The project provides two distinct functions to calculate $n!$:

1.  **`factorialRec(int n)`**: A recursive approach that breaks the problem down into sub-problems until it hits the base case ($n \le 1$).
2.  **`factorialIter(int n)`**: An iterative approach using a `for` loop, which is generally more memory-efficient as it avoids overhead from the call stack.

---

## How to Run

1. Clone this repository to your local machine.
2. Compile the code using a standard C++ compiler:
   ```bash
   g++ main.cpp -o factorial-2versions
   ```
3. Run the executable:
   ```bash
   ./factorial-2versions
   ```
