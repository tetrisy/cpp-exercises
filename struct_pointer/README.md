# Simple Banking System (C++)

A lightweight C++ program demonstrating basic account operations like deposit, withdrawal, and balance display using structures and pointers.

## Overview

This program simulates a basic banking account system. It relies on a custom structure to hold account details and uses pointer-based functions to directly modify the account's state in memory without needing to return updated objects.

### Logic Flow

The core account operations follow these simple rules:

1. **Display:** Accesses the account via a pointer and prints the current number, owner, and formatted balance.
2. **Deposit:** Adds the specified amount directly to the account's balance.
3. **Withdraw:** Checks if the current balance is greater than the requested amount. If so, it deducts the amount and returns `true`. If not, it prevents the transaction and returns `false`.

## Code Structure

Here are the core structures and pointer-based functions:

```cpp
struct Account {
    int number;
    std::string owner;
    double balance;
};

void deposit(Account* acc, double amount) {
    acc->balance += amount;
}

bool withdraw(Account* acc, double amount) {
    if (acc->balance > amount) {
        acc->balance -= amount;
        return true;
    }

    return false;
}
```

## How to Run

1. Clone this repository to your local machine.
2. Compile the code using a standard C++ compiler:
   ```bash
   g++ main.cpp -o struct_pointer
   ```
3. Run the executable:
   ```bash
   ./struct_pointer
   ```
