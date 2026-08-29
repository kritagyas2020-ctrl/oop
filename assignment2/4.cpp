#include <iostream>
using namespace std;

class BankAccount {
public:
    int accountNumber;
    string accountHolder;
    double balance;

    void deposit(double amount) {
        balance = balance + amount;
    }

    void withdraw(double amount) {
        if (amount <= balance) {
            balance = balance - amount;
        } else {
            cout << "Insufficient balance!" << endl;
        }
    }

    void displayBalance() {
        cout << "Account Number: " << accountNumber << endl;
        cout << "Account Holder: " << accountHolder << endl;
        cout << "Balance: " << balance << endl;
    }
};

int main() {
    BankAccount account;

    account.accountNumber = 1001;
    account.accountHolder = "John";
    account.balance = 5000;

    account.deposit(2000);
    account.withdraw(1500);
    account.withdraw(1000);

    account.displayBalance();

    return 0;
}