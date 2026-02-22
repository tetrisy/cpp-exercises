#include <iostream>
#include <string>
#include <stack>

std::string reverse(std::string s);
bool isPalindrome(std::string s);

int main() {
    std::cout << "Reverse \"hello\" = " << reverse("hello") << std::endl;
    std::cout << "Reverse \"Kayak\" = " << reverse("hello") << std::endl;
    std::cout << std::endl;

    std::cout << "Palindromes:" << std::endl;
    std::cout << "\"kajak\" -> ";
    if(isPalindrome("kajak"))
        std::cout << "YES" << std::endl;
    else
        std::cout << "NO" << std::endl;
    
    std::cout << "\"radar\" -> ";
    if(isPalindrome("radar"))
        std::cout << "YES" << std::endl;
    else
        std::cout << "NO" << std::endl;

    std::cout << "\"hello\" -> ";
    if(isPalindrome("hello"))
        std::cout << "YES" << std::endl;
    else
        std::cout << "NO" << std::endl;

    std::cout << "\"racecar\" -> ";
    if(isPalindrome("racecar"))
        std::cout << "YES" << std::endl;
    else
        std::cout << "NO" << std::endl;

    return 0;
}

std::string reverse(std::string s) {
    std::stack<char> st;

    for (char c : s) {
        st.push(c);
    }

    std::string reversed = "";

    while (!st.empty()) {
        reversed += st.top();
        st.pop();
    }

    return reversed;
}

bool isPalindrome(std::string s) {
    for (char& c : s) {
        c = std::tolower(c);
    }
    
    return reverse(s) == s;
}