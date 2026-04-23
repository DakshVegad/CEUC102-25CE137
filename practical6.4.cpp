#include <iostream>
#include <vector>
using namespace std;

// Base Class
class Account {
protected:
    int accNo;
    double balance;
    vector<double> transactions;

public:
    Account(int a, double b) {
        accNo = a;
        balance = b;
    }

    // Destructor
    ~Account() {
        cout << "Account " << accNo << " closed.\n";
    }

    void deposit(double amount) {
        balance += amount;
        transactions.push_back(amount);
        cout << "Deposited: " << amount << endl;
    }

    virtual void withdraw(double amount) {
        if (amount <= balance) {
            balance -= amount;
            transactions.push_back(-amount);
            cout << "Withdrawn: " << amount << endl;
        } else {
            cout << "Insufficient balance!\n";
        }
    }

    void undoTransaction() {
        if (transactions.empty()) {
            cout << "No transaction to undo!\n";
            return;
        }

        double last = transactions.back();
        transactions.pop_back();

        balance -= last; // reverse effect
        cout << "Last transaction undone.\n";
    }

    virtual void display() {
        cout << "Account No: " << accNo << endl;
        cout << "Balance: " << balance << endl;
    }
};

//Savings Account
class SavingsAccount : public Account {
private:
    double interestRate;

public:
    SavingsAccount(int a, double b, double r)
        : Account(a, b) {
        interestRate = r;
    }

    void display() {
        Account::display();
        cout << "Account Type: Savings\n";
        cout << "Interest Rate: " << interestRate << "%" << endl;
        cout << "--------------------------\n";
    }
};

// Current Account
class CurrentAccount : public Account {
private:
    double overdraftLimit;

public:
    CurrentAccount(int a, double b, double limit)
        : Account(a, b) {
        overdraftLimit = limit;
    }

    void withdraw(double amount) {
        if (amount <= balance + overdraftLimit) {
            balance -= amount;
            transactions.push_back(-amount);
            cout << "Withdrawn: " << amount << endl;
        } else {
            cout << "Overdraft limit exceeded!\n";
        }
    }

    void display() {
        Account::display();
        cout << "Account Type: Current\n";
        cout << "Overdraft Limit: " << overdraftLimit << endl;
        cout << "--------------------------\n";
    }
};

int main() {

    SavingsAccount s1(101, 5000, 4.5);
    CurrentAccount c1(201, 3000, 2000);

    cout << "\n--- Savings Account ---\n";
    s1.deposit(1000);
    s1.withdraw(2000);
    s1.display();

    cout << "\nUndo last transaction:\n";
    s1.undoTransaction();
    s1.display();

    cout << "\n--- Current Account ---\n";
    c1.deposit(500);
    c1.withdraw(4000); // uses overdraft
    c1.display();

    cout << "\nUndo last transaction:\n";
    c1.undoTransaction();
    c1.display();

    return 0;
}