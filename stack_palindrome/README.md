# Palindrome Checker (C++)

A lightweight C++ program demonstrating the Last-In-First-Out (LIFO) property of stacks by reversing strings and evaluating if they are palindromes.

## Overview

This program calculates whether an input string reads the same forwards and backwards. It relies on a stack-based approach where characters are sequentially pushed onto a stack and then popped off to generate a reversed version of the word.

### Logic Flow

The underlying logic follows two simple rules:

1. **Reverse String:** Push each character of the string onto a `std::stack`. Since stacks are LIFO, popping the items off sequentially builds the string in reverse.
2. **Palindrome Check:** Convert the entire string to lowercase to ensure the check is case-insensitive, then compare the original string to its reversed counterpart.

## Code Structure

Here are the core functional routines:

```cpp
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
```

## How to Run

1. Clone this repository to your local machine.
2. Compile the code using a standard C++ compiler:
   ```bash
   g++ main.cpp -o stack_palindrome
   ```
3. Run the executable:
   ```bash
   ./stack_palindrome
   ```
