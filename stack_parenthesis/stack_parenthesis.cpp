#include <iostream>
#include <stack>
#include <string>

bool correctParenthesis(std::string s);

int main() {
    std::cout << "\"(())\"" << " -> ";
    if (correctParenthesis("(())"))
        std::cout << "Correct" << std::endl;
    else 
        std::cout << "Incorrect" << std::endl;

    std::cout << "\"()()\"" << " -> ";
    if (correctParenthesis("()()"))
        std::cout << "Correct" << std::endl;
    else 
        std::cout << "Incorrect" << std::endl;

    std::cout << "\"(()\"" << " -> ";
    if (correctParenthesis("(()"))
        std::cout << "Correct" << std::endl;
    else 
        std::cout << "Incorrect" << std::endl;

    std::cout << "\")(\"" << " -> ";
    if (correctParenthesis(")("))
        std::cout << "Correct" << std::endl;
    else 
        std::cout << "Incorrect" << std::endl;

    std::cout << "\"\"" << " -> ";
    if (correctParenthesis(""))
        std::cout << "Correct" << std::endl;
    else 
        std::cout << "Incorrect" << std::endl;

    std::cout << "\"(hello(world))\"" << " -> ";
    if (correctParenthesis("(hello(world))"))
        std::cout << "Correct" << std::endl;
    else 
        std::cout << "Incorrect" << std::endl;

    return 0;
}

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