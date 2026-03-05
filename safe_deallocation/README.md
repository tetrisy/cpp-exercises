# Safe Memory Deallocation (C++)

A lightweight C++ program demonstrating safe dynamic memory management by preventing double-free errors and dangling pointers.

## Overview

This program illustrates how to safely release dynamically allocated memory. It uses a helper function that takes a reference to a pointer, releases the memory if the pointer is valid, and immediately sets the pointer to null to avoid undefined behavior on subsequent deletion attempts.

### Logic Flow

The `bezpieczneUsun(ptr)` function follows two simple rules:

1. **Valid Pointer:** If $ptr \neq \text{nullptr}$, delete the allocated memory and assign $ptr \leftarrow \text{nullptr}$.
2. **Null Pointer:** If $ptr = \text{nullptr}$, safely ignore the deallocation request and output a message.

## Code Structure

Here is the core safe deallocation function:

```cpp
void bezpieczneUsun(int*& ptr) {
    if(ptr != nullptr) {
        std::cout << "Releasing memory..." << std::endl;
        delete ptr;
        ptr = nullptr;
    } else {
        std::cout << "Pointer is already nullptr - nothing to release" << std::endl;
    }
}
```

## How to Run

1. Clone this repository to your local machine.
2. Compile the code using a standard C++ compiler:
   ```bash
   g++ main.cpp -o safe_deallocation
   ```
3. Run the executable:
   ```bash
   ./safe_deallocation
   ```
