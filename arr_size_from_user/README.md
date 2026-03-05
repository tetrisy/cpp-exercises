# Dynamic Array Statistics (C++)

A lightweight C++ program demonstrating dynamic memory allocation and basic statistical calculations (sum, average, minimum, and maximum) on a user-defined array.

## Overview

This program asks the user for the size of an array, allocates the necessary memory at runtime, and collects the elements. It then processes the data to output the entered elements alongside calculated statistics, ensuring memory is properly released at the end of execution.

### Logic Flow

The program follows three main rules for its execution:

1. **Initialization:** Dynamically allocate an integer array using the `new` keyword based on validated user input (size > 0).
2. **Processing:** Iterate over the array to accumulate the total sum, and conditionally update the `min` and `max` values.
3. **Cleanup:** Safely free the allocated memory using `delete[]` to prevent memory leaks.

## Code Structure

Here is the core logic for extracting the array statistics and releasing memory:

```cpp
int sum = 0;
int max = arr[0];
int min = max;

for (int i = 0; i < size; i++) {
    std::cout << arr[i] << " ";
    sum += arr[i];

    if (arr[i] > max) {
        max = arr[i];
    }

    if(arr[i] < min) {
        min = arr[i];
    }
}

// ... statistical output formatting ...

delete[] arr;
arr = nullptr;
```

## How to Run

1. Clone this repository to your local machine.
2. Compile the code using a standard C++ compiler:
   ```bash
   g++ main.cpp -o array_stats
   ```
3. Run the executable:
   ```bash
   ./array_stats
   ```
