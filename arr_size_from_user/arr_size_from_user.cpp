#include <iostream>
#include <iomanip>

int main() {
    int size;
    std::cout << "Enter the size of an array: ";
    std::cin >> size;

    if(size <= 0) {
        std::cout << "You can't initilize array smaller than 1." << std::endl;
        return 1;
    }

    int* arr = new int[size];

    std::cout << "Enter " << size << " elements." << std::endl;

    for(int i = 1; i <= size; i++) {
        std::cout << "Enter " << i << " element: ";
        std::cin >> arr[i - 1];
    }

    std::cout << std::endl;
    std::cout << "Entered elements: ";

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
    std::cout << std::endl;

    double average = (double)sum / size;

    std::cout << std::endl;
    std::cout << "Statistics:" << std::endl;
    std::cout << "- Sum: " << sum << std::endl;
    std::cout << "- Average: " << std::fixed << std::setprecision(2) << average << std::endl;
    std::cout << "- Min: " << min << std::endl;
    std::cout << "- Max: " << max << std::endl;
    std::cout << std::endl;

    delete[] arr;
    arr = nullptr;

    std::cout << "Memory released." << std::endl;

    return 0;
}
