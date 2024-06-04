#ifndef BANKING_H
#define BANKING_H

void banking();

class BankAccount {
    private:
        double balance;
    public:
        double getBalance() const;
        double deposit(double amount);
        double withdraw (double amount);
        BankAccount(double balance);
        ~BankAccount();
};

#endif