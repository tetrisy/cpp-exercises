#include <iostream>
#include <iomanip>

struct Account {
    int number;
    std::string owner;
    double balance;
};

void displayBalance(Account* acc);
void deposit(Account* acc, double amount);
bool withdraw(Account* acc, double amount);

int main() {
    Account acc = {123456789, "Szymon Nowakowski", 10000.00};

    std::cout << "=== Banking system ===" << std::endl << std::endl;
    std::cout << "Primary state of account:" << std::endl;
    displayBalance(&acc);

    std::cout << "Depositing 200 PLN" << std::endl;
    deposit(&acc, 200.00);
    displayBalance(&acc);

    std::cout << "Withdrawing 8000 PLN" << std::endl;
    if(withdraw(&acc, 8000.00)) {
        displayBalance(&acc);
    } else {
        std::cout << "Error! Not enough balance on your account!" << std::endl;
        std::cout << "Current balance: " << &acc.balance << std::endl;
    }

    std::cout << "Withdrawing 3000 PLN" << std::endl;
    if(withdraw(&acc, 3000.00)) {
        displayBalance(&acc);
    } else {
        std::cout << "Error! Not enough balance on your account!" << std::endl;
        std::cout << "Current balance: " << acc.balance << std::endl;
    }
    

    return 0;
}

void displayBalance(Account* acc) {
    std::cout << "  Number: " << acc->number << std::endl;
    std::cout << "  Owner: " << acc->owner << std::endl;
    std::cout << "  Balance: " << std::fixed << std::setprecision(2) << acc->balance << " PLN" << std::endl << std::endl;
}

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
