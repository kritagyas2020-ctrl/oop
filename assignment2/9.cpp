#include <iostream>
using namespace std;

class BankAccount {
public:
    int accountNumber;
    string accountHolder;
    double balance;

    BankAccount(int accNo, string holder, double bal) {
        accountNumber = accNo;
        accountHolder = holder;
        balance = bal;
    }

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
        cout << "Current Balance: " << balance << endl;
    }
};

int main() {
    BankAccount account(1001, "John", 10000);

    account.deposit(5000);
    account.withdraw(3000);

    account.displayBalance();

    return 0;
}
