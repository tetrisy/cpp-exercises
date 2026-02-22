#include <iostream>

int gcd(int a, int b);

int main() {
    std::cout << gcd(48, 18) << std::endl;
    std::cout << gcd(100, 25) << std::endl;
    std::cout << gcd(17, 5) << std::endl;
    std::cout << gcd(12, 12) << std::endl;

    return 0;
}

int gcd(int a, int b) {
    if(b == 0) {
        return a;
    }

    return gcd(b, a % b);    
}