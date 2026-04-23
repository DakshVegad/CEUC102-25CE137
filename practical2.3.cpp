#include<iostream>
#include<string>
using namespace std;

class account{
    private:
  string name;
  int accountid;
  float balance;
public:
  account(string n ,int id,float b=0.0){
    name = n;
    accountid = id;

     if (b >= 0)
            balance = b;
        else {
            cout << "Invalid initial balance. Setting to 0.\n";
            balance = 0.0;
        }
  }

void dmoney(float ammount){

    if(ammount >=0){
        cout<<"\n Deposite succesful. ";
        balance += ammount;
    }
    else{
        cout<<"\nInvalid ammount entered!";
    }
}

void wmoney(float ammount){
    if(ammount<=0){
        cout<<"\nInvalid Ammount Entered!";
    }
    else if(ammount > balance){
        cout<<"\nInsufficient Balance!";
    }
    else {
        balance -= ammount;
        cout<<"\nWithrowal succesful.";
    }
  
}

void display(){
    cout<<"\n------account summry-------";
    cout<<"\nName: "<<name;
    cout<<"\nAccount ID: "<<accountid;
    cout<<"\nBalance: "<<balance;
}

};
int main(){

    account a1("Daksh",1001,5000);
    account a2("Karm",1002,5000);

    a1.dmoney(50000);
    a1.wmoney(1500);

    a2.dmoney(40000);
    a2.wmoney(2000);

    a1.display();
    a2.display();

    return 0;
}