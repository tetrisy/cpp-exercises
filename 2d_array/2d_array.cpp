#include <iostream>

int main() {
    int rows, columns;

    std::cout << "Enter number of rows: ";
    std::cin >> rows;
    std::cout << "Enter number of columns: ";
    std::cin >> columns;

    if(rows <= 0 || columns <= 0) {
        std::cout << "The dimensions have to be positive!" << std::endl;
        return 1;
    }

    std::cout << "\nAllocating matrix " << rows << "x" << columns << "..." << std::endl;

    int** matrix = new int*[rows];

    for (int i = 0; i < rows; i++) {
        matrix[i] = new int[columns];
    }

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            matrix[i][j] = (i + 1) * 10 + (j + 1);
        }
    }

    std::cout << "\nMatrix:" << std::endl;

    int sum = 0;

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            std::cout << matrix[i][j] << " ";
            sum += matrix[i][j];
        }
        std::cout << std::endl;
    }

    std::cout << "\nSum of all elements: " << sum << std::endl;
    std::cout << "\nReleasing memory..." << std::endl;
    
    for (int i = 0; i < rows; i++) {
        delete[] matrix[i];
    }

    delete[] matrix;
    matrix = nullptr;

    std::cout << "Memory released successfully." << std::endl;

    return 0;
}
