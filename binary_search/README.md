# Binary Search (C++)

A lightweight C++ program demonstrating the binary search algorithm by efficiently finding the index of a target element within a sorted array.

## Overview

This program locates a specific value in a sorted array using a divide-and-conquer approach. It continuously halves the search space by comparing the target value to the middle element of the current bounds until the target is found or the search space is exhausted.

### Logic Flow

The `binarySearch` function follows three main rules:

1. **Initialization:** Define the search boundaries by setting $left = 0$ and $right = size - 1$.
2. **Iterative Step:** While $left \leq right$, calculate the $middle$ index.
   - If the target is found at the $middle$ index, return $middle$.
   - If the target is greater than the middle element, narrow the search to the right half ($left = middle + 1$).
   - If the target is less than the middle element, narrow the search to the left half ($right = middle - 1$).
3. **Base Case (Not Found):** If the loop terminates without finding the target, return $-1$.

## Code Structure

Here is the core search function:

```cpp
int binarySearch(int arr[], int size, int looked) {
    int left = 0;
    int right = size - 1;

    while (left <= right) {
        int middle = (left + right) / 2;

        if(arr[middle] == looked)
            return middle;

        if (arr[middle] < looked) {
            left = middle + 1;
        } else {
            right = middle - 1;
        }
    }

    return -1;
}
```

## How to Run

1. Clone this repository to your local machine.
2. Compile the code using a standard C++ compiler:
   ```bash
   g++ main.cpp -o binary_search
   ```
3. Run the executable:
   ```bash
   ./binary_search
   ```
