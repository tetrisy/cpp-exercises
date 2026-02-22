#include <iostream>

void displayArr(int arr[], int size);
int binarySearch(int arr[], int size, int looked);

int main() {
    int arr1[] = {1, 3, 5, 7, 9, 11, 13};
    int arr1Size = sizeof(arr1) / sizeof(arr1[0]);

    std::cout << "I'm looking for 7 in {1, 3, 5, 7, 9, 11, 13}: Found at index = " << binarySearch(arr1, arr1Size, 7) << std::endl;

    int arr2[] = {1, 3, 5, 7, 9, 11, 13};
    int arr2Size = sizeof(arr2) / sizeof(arr2[0]);

    std::cout << "I'm looking for 6 in {1, 3, 5, 7, 9, 11, 13}: Found at index = " << binarySearch(arr2, arr1Size, 6) << std::endl;

    int arr3[] = {1, 3, 5, 7, 9, 11, 13};
    int arr3Size = sizeof(arr3) / sizeof(arr3[0]);

    std::cout << "I'm looking for 1 in {1, 3, 5, 7, 9, 11, 13}: Found at index = " << binarySearch(arr3, arr1Size, 1) << std::endl;

    int arr4[] = {1, 3, 5, 7, 9, 11, 13};
    int arr4Size = sizeof(arr4) / sizeof(arr4[0]);

    std::cout << "I'm looking for 13 in {1, 3, 5, 7, 9, 11, 13}: Found at index = " << binarySearch(arr4, arr1Size, 13) << std::endl;

    return 0;
}

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