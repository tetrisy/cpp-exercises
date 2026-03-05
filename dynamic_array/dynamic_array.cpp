#include <iostream>

int main() {
    std::cout << "Creating an array with 5 elements..." << std::endl;

    int* arr = new int[5];
    int filler = 10;
    int sum = 0;

    std::cout << "Filling that array..." << std::endl;
    std::cout << "Array elements: ";

    for (int i = 0; i < 5; i++) {
        arr[i] = filler;
        filler += 10;
        sum += arr[i];

        std::cout << arr[i] << " ";
    }

    std::cout << std::endl;
    std::cout << "Sum of elements: " << sum << std::endl;
    std::cout << "Releasing memory..." << std::endl;

    delete[] arr;
    arr = nullptr;

    std::cout << "Ready!" << std::endl;

    return 0;
}
