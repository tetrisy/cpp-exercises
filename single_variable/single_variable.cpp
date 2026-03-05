#include <iostream>

int main() {
    int* ptr = new int(100);
    
    std::cout << "Variable before addition: " << *ptr << std::endl;

    *ptr += 50;

    std::cout << "Variable after addtition: " << *ptr << std::endl;
    std::cout << "Releasing memory..." << std::endl;

    delete ptr;
    ptr = nullptr;

    std::cout << "Program has ended succesfully" << std::endl;

    return 0;
}
