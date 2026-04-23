#include<iostream>
#include<string>
using namespace std;
class account{
private:
int uid;
string username;
float balance;
public:
account(int id, string name){
    uid=id;
    username=name;
    balance=0.0;
}

int getid(){
    return uid;
}

float getbalance(){
    return balance;
}

void depositemoney(float ammount){
  if(ammount >0){
    balance +=ammount;
    cout<<"\n Money deposited successfully.";
  }
  else 
  cout<<"\nInvalid ammount";
}

int transfermoney(account &reciver, float ammount){

    if(ammount <=0){
        cout<<"\nInvalid Ammount!";
        return false;
    }
    if(balance>=ammount){
        balance-=ammount;
        reciver.balance +=ammount;
        cout<<"\nMoney Transfered succesesfully.";
        return true;
    }
    else{
        cout<<"\n Insufficient Balance";
        return false;
    }
    
}

void display(){
    cout<<"\nUnique Id: "<<uid;
    cout<<"\nUsername: "<<username;
    cout<<"\nCurrent Balance: "<<balance;
}
};

int main(){

    account a1(137,"Daksh");
    account a2(124,"Karm");

    a1.depositemoney(100000);
    a1.transfermoney(a2,5000);
    a1.display();
    a2.display();
return 0;
}