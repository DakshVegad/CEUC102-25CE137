#ifndef BANKACCOUNT_H
#define BANKACCOUNT_H


class BankAccount
{
        {
    double balance;

public:
    BankAccount(double b)
    {
        balance = b;
    }

    void deposit(double amount)
    {
        addLog("Entered deposit()");
        if (amount <= 0)
        {
            throw "Invalid deposit amount!";
        }
        balance += amount;
        addLog("Deposit successful");
        addLog("Exiting deposit()");
    }

    void withdraw(double amount)
    {
        addLog("Entered withdraw()");
        if (amount > balance)
        {
            throw "Insufficient balance!";
        }
        balance -= amount;
        addLog("Withdrawal successful");
        addLog("Exiting withdraw()");
    }

    double getBalance()
    {
        return balance;
    }
};

void performTransaction(BankAccount &acc) {
    addLog("Entered performTransaction()");
    acc.withdraw(5000);
    addLog("Exiting performTransaction()");
}

void startProcess(BankAccount &acc)
{
    addLog("Entered startProcess()");
    performTransaction(acc);
    addLog("Exiting startProcess()");
}
};

#endif // BANKACCOUNT_H
