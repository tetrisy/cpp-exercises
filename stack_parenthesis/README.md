# Balanced Parentheses Checker (C++)

A lightweight C++ program demonstrating stack data structures by checking if a given string contains correctly nested and matched parentheses.

## Overview

This program determines whether a string has a valid pairing of parentheses. It relies on a standard stack-based approach where opening parentheses are tracked and systematically matched with closing parentheses as the string is evaluated character by character.

### Logic Flow

The `correctParenthesis(s)` function follows three simple rules:

1. **Push:** If the current character is an opening parenthesis `(`, push it onto the stack.
2. **Pop/Check:** If the current character is a closing parenthesis `)`, check the stack. If the stack is empty (meaning there is no matching opening parenthesis), return `false`. Otherwise, pop the top element from the stack.
3. **Final Validation:** After processing all characters, return `true` if the stack is completely empty (all parentheses were matched), or `false` if elements remain.

## Code Structure

Here is the core validation function:

```cpp
bool correctParenthesis(std::string s) {
    int sLength = s.length();
    std::stack<char> st;

    for (char c : s) {
        if (c == '(')
            st.push(c);
        else if (c == ')') {
            if (st.empty())
                return false;
            st.pop();
        }
    }

    return st.empty();
}
```

## How to Run

1. Clone this repository to your local machine.
2. Compile the code using a standard C++ compiler:
   ```bash
   g++ main.cpp -o correct_parenthesis
   ```
3. Run the executable:
   ```bash
   ./correct_parenthesis
   ```
