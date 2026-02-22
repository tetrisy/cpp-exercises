#include <iostream>

int digitSum(int n);

int main() {
    std::cout << digitSum(12345) << std::endl;
    std::cout << digitSum(999) << std::endl;
    std::cout << digitSum(7) << std::endl;
    std::cout << digitSum(100) << std::endl;

    return 0;
}

int digitSum(int n) {
    if(n < 10)
        return n;

    return (n % 10) + digitSum(n / 10); 
}

