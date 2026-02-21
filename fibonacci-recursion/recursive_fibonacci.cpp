#include <iostream>

int fib(int n);

int main() {
    std::cout << "Fibonacci (0-14)" << std::endl;
    
    for(int i = 0; i <= 14; i++) {
        std::cout << "F(" << i << ") = " << fib(i) << std::endl;
    }
}

int fib(int n) {
    if(n == 0) 
        return 0;

    if(n == 1)
        return 1;

    return fib(n - 1) + fib(n - 2);
}