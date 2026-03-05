# Dynamic Memory Management (C++)

A lightweight C++ program demonstrating dynamic memory allocation, pointer manipulation, and safe memory deallocation.

## Overview

This program illustrates how to manage variables on the heap. It relies on standard C++ pointer operations to allocate memory dynamically, update the variable's value by dereferencing it, and properly release the memory to prevent memory leaks.

### Logic Flow

The execution logic follows three simple rules:

1. **Allocation:** Dynamically allocate an integer on the heap using the `new` keyword and initialize it to 100.
2. **Manipulation:** Dereference the pointer (`*ptr`) to access the allocated memory and increase its value by 50.
3. **Deallocation:** Free the allocated heap memory using `delete` and set the pointer to `nullptr` to prevent dangling pointers.

## Code Structure

Here is the core memory management logic:

```cpp
// Allocate memory on the heap
int* ptr = new int(100);

// Modify the value via dereferencing
*ptr += 50;

// Release memory and prevent dangling pointers
delete ptr;
ptr = nullptr;
```

## How to Run

1. Clone this repository to your local machine.
2. Compile the code using a standard C++ compiler:
   ```bash
   g++ main.cpp -o single_variable
   ```
3. Run the executable:
   ```bash
   ./single_variable
   ```
