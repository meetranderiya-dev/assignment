#include <iostream>
using namespace std;

class BankAccount {
private:
    double balance;  // Private data member

public:
    // Constructor
    BankAccount(double initialBalance) {
        balance = initialBalance;
    }

    // Deposit function
    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Deposited: " << amount << endl;
        } else {
            cout << "Invalid deposit amount." << endl;
        }
    }

    // Withdraw function
    void withdraw(double amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            cout << "Withdrawn: " << amount << endl;
        } else {
            cout << "Insufficient balance or invalid amount." << endl;
        }
    }

    // Display balance
    void displayBalance() {
        cout << "Current Balance: " << balance << endl;
    }
};

int main() {
    BankAccount account(1000); // Initial balance

    account.displayBalance();

    account.deposit(500);
    account.displayBalance();

    account.withdraw(300);
    account.displayBalance();

    return 0;
}
