# Bubble Sort (C++)

A lightweight C++ program demonstrating the Bubble Sort algorithm by sorting arrays of integers in ascending order.

## Overview

This program uses a classic nested-loop approach to sort an array. Adjacent elements are repeatedly compared and swapped if they are in the wrong order. This process causes the largest elements to "bubble" to the end of the array with each pass.

### Logic Flow

The `bubbleSort(arr, n)` function operates on the following principles:

1. **Outer Iteration:** Iterate through the array $n - 1$ times to ensure all elements are checked.
2. **Inner Comparison:** Compare adjacent elements (`arr[j]` and `arr[j + 1]`).
3. **Swap:** If the left element is strictly greater than the right element, swap their positions.

## Code Structure

Here is the core sorting function:

```cpp
void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j + 1];
                arr[j + 1] = arr[j];
                arr[j] = temp;
            }
        }
    }
}
```

## How to Run

1. Clone this repository to your local machine.
2. Compile the code using a standard C++ compiler:
   ```bash
   g++ main.cpp -o bubble_sort
   ```
3. Run the executable:
   ```bash
   ./bubble_sort
   ```
