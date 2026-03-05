# Dynamic Array Sum (C++)

A lightweight C++ program demonstrating dynamic memory allocation, array traversal, and memory management by calculating the sum of dynamically generated elements.

## Overview

This program creates a dynamically allocated array of 5 integers, populates it with multiples of 10, calculates their total sum, and ensures proper memory deallocation to prevent leaks.

### Logic Flow

The program execution follows three core steps:

1. **Memory Allocation:** Dynamically allocates an integer array of size 5 using the `new` keyword.
2. **Population & Calculation:** Iterates through the array, filling it with incrementing values (10, 20, 30, 40, 50) while maintaining a running sum of the elements.
3. **Memory Cleanup:** Safely releases the allocated memory using `delete[]` and sets the pointer to `nullptr` to avoid dangling pointers.

## Code Structure

Here is the core logic for the allocation, processing, and cleanup:

```cpp
int* arr = new int[5];
int filler = 10;
int sum = 0;

for (int i = 0; i < 5; i++) {
    arr[i] = filler;
    filler += 10;
    sum += arr[i];
}

// Releasing memory
delete[] arr;
arr = nullptr;
```

## How to Run

1. Clone this repository to your local machine.
2. Compile the code using a standard C++ compiler:
   ```bash
   g++ main.cpp -o dynamic_array
   ```
3. Run the executable:
   ```bash
   ./dynamic_array
   ```
