#include <iostream>

int sum(int n);

int main() {
    std::cout << sum(5) << std::endl;
    std::cout << sum(10) << std::endl;
    std::cout << sum(1) << std::endl;
}

int sum(int n) {
    if(n <= 1) {
        return 1;
    }
    return n + sum(n - 1);
}