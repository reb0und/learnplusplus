#include <iostream>

#include "banking.h"

BankAccount::BankAccount(double balance) : balance(balance) {};
BankAccount::~BankAccount() {};

double BankAccount::getBalance() const {
    return balance;
}

double BankAccount::deposit(double amount) {
    return balance += amount;
}

double BankAccount::withdraw(double amount) {
    return balance -= amount;
}

void banking() {
    std::cout << "Bank Account\n" << "Enter initial balance: ";
    double balance;
    std::cin >> balance;
    if (std::cin.fail()) {
        std::cerr << "Invalid input; must be double";
        return;
    }
    
    BankAccount acc(balance);

    while (true) {
        std::cout << "Select operation:\n1. Check balance\n2. Deposit\n3. Withdraw\n4. Exit\n";
        int option;
        std::cin >> option;
        if (std::cin.fail()) {
            std::cerr << "Invalid input; must be integer";
            continue;
        }

        switch (option) {
            case 1:
                std::cout << "Balance " << acc.getBalance() << "\n";
                continue;
            case 2:
                std::cout << "Enter deposit: ";
                double amount;
                std::cin >> amount;
                if(std::cin.fail()) {
                    std::cerr << "Invalid input; must be double";
                }
                std::cout << "Updated balance: " << acc.deposit(amount) << "\n";
                continue; 
            case 3:
                std::cout << "Enter withdrawal: ";
                double withdrawal;
                std::cin >> withdrawal;
                if(std::cin.fail()) {
                    std::cerr << "Invalid input; must be double";
                }
                std::cout << "Updated balance: " << acc.withdraw(withdrawal) << "\n";
                continue;
            case 4:
                std::cout << "Exiting...\n";
                return;
            default:
                std::cout << "Exiting...\n";
                return;
        }
    }

    acc.~BankAccount();
}