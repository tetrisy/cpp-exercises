#include <iostream>

void displayArr(int arr[], int n);
void bubbleSort(int arr[], int n);

int main() {
    int arr1[] = {5, 3, 8, 1, 9, 2};
    int arr1Size = sizeof(arr1) / sizeof(arr1[0]);
    
    std::cout << "Before: ";
    displayArr(arr1, arr1Size);
    bubbleSort(arr1, arr1Size);
    std::cout << "After: ";
    displayArr(arr1, arr1Size);
    std::cout << std::endl;

    int arr2[] = {10, 10, 3, 7, 1};
    int arr2Size = sizeof(arr2) / sizeof(arr2[0]);

    std::cout << "Before:" << std::endl;
    displayArr(arr2, arr2Size);
    bubbleSort(arr2, arr2Size);
    std::cout << "After: ";
    displayArr(arr2, arr2Size);
    std::cout << std::endl;

    int arr3[] = {1, 2, 3};
    int arr3Size = sizeof(arr3) / sizeof(arr3[0]);

    std::cout << "Before:" << std::endl;
    displayArr(arr3, arr3Size);
    bubbleSort(arr3, arr3Size);
    std::cout << "After: ";
    displayArr(arr3, arr3Size);
    std::cout << std::endl;

    return 0;
}

void displayArr(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

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