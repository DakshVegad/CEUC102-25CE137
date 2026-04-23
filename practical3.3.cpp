#include<iostream>
#include<string>
#include<vector>
using namespace std;

class account{
private:
  
   int ACno;
   string name;
   double balance;

   static int totalAC;

   public:

   account(int no, string n, double bal): ACno(no), name(n), balance(bal){

    totalAC++;
   }

   int getAccountno() const { return ACno; }

   string getname() const { return name; }

   double getbalance() const { return balance; }

   void deposit(double amount){
    if (amount >0)
    {
        balance+=amount;
    }

   }

   bool withdraw(double amount){
   if(amount >0 && amount <= balance){
    balance -= amount ;
    return true;
   }
   return false;
   }

   bool transfer(account & toAccount , double amount){

     if (withdraw(amount)) {
            toAccount.deposit(amount);
            return true;
        }
        return false;
   }

   void display() const {
      cout<<"Account No: "<<ACno<<endl;
       cout<<"Name: "<<name<<endl;
        cout<<"Balance: "<<balance<<endl;
   }

    static int getTotalAccounts() {
        return totalAC;
    }

};
int account::totalAC = 0;

int main() {
    vector<account> accounts;

    
    accounts.push_back(account(1, "Daksh", 1000000));
    accounts.push_back(account(2, "karm", 500000));


    for (const auto& acc : accounts) {
        acc.display();
    }


    cout << "\nTransferring ₹20000 from Daksh to Karm...\n";
    if (accounts[0].transfer(accounts[1], 20000)) {
     cout << "Transfer successful!\n";
    } else {
      cout << "Transfer failed!\n";
    }


    cout << "\nUpdated Account Info:\n";
    for (const auto& acc : accounts) {
        acc.display();
    }


   cout << "\nTotal Accounts Created: "
              << account::getTotalAccounts() << endl;

    return 0;
}





