# Dynamic Matrix Allocator (C++)

A C++ program demonstrating dynamic memory allocation for a 2D array (matrix), populating it with values, calculating the sum of its elements, and safely deallocating the memory.

## Overview

This program prompts the user for matrix dimensions, dynamically creates a 2D array on the heap, and fills it with integer values based on their row and column indices. After displaying the matrix and the total sum of all elements, it properly releases the allocated memory to prevent memory leaks.

### Logic Flow

The program follows four main steps:

1. **Input Validation:** Reads the desired rows and columns, ensuring both are positive integers.
2. **Memory Allocation:** Creates an array of row pointers, then iterates to allocate an array of columns for each row.
3. **Population & Calculation:** Fills each matrix cell with a value calculated as `(i + 1) * 10 + (j + 1)`, prints the matrix, and sums the elements.
4. **Memory Deallocation:** Loops through to delete each row's memory first, then deletes the primary array of pointers, setting it to `nullptr`.

## Code Structure

Here is the core logic for dynamically allocating and safely releasing the 2D array:

```cpp
// Allocating memory
int** matrix = new int*[rows];
for (int i = 0; i < rows; i++) {
    matrix[i] = new int[columns];
}

// ... data population and processing ...

// Releasing memory
for (int i = 0; i < rows; i++) {
    delete[] matrix[i];
}
delete[] matrix;
matrix = nullptr;
```

## How to Run

1. Clone this repository to your local machine.
2. Compile the code using a standard C++ compiler:
   ```bash
   g++ main.cpp -o 2d_array
   ```
3. Run the executable:
   ```bash
   ./2d_array
   ```
