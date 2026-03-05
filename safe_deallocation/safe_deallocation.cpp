#include <iostream>

void bezpieczneUsun(int*& ptr);
void wyswietl(int* ptr, const char* name);

int main() {
    int* number = new int(42);

    std::cout << "=== Test of safe deallocation ===\n" << std::endl;
    std::cout << "Allocating memory..." << std::endl;
    wyswietl(number, "number");
    std::cout << std::endl;

    std::cout << "\nFrist release:" << std::endl;
    bezpieczneUsun(number);
    wyswietl(number, "number");

    std::cout << "\nSecond release:" << std::endl;
    bezpieczneUsun(number);

    std::cout << "\nReleasing attemp after deallocation:" << std::endl;
    wyswietl(number, "number");

    std::cout << "\nSafe check has ended successfully" << std::endl;

    return 0;
}

void bezpieczneUsun(int*& ptr) {
    if(ptr != nullptr) {
        std::cout << "Releasing memory..." << std::endl;
        delete ptr;
        ptr = nullptr;
    } else {
        std::cout << "Pointer is already nullptr - nothing to release" << std::endl;
    }
}

void wyswietl(int* ptr, const char* name) {
    if(ptr != nullptr) {
        std::cout << "[" << "number" << "] = " << *ptr << std::endl;
    } else {
        std::cout << "[" << "number" << "] is already nullptr (no value)" << std::endl;
    }
}
