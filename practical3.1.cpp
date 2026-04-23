#include<iostream>
using namespace std;
class employee{
 private:
    
    string name;
    double bsalary;
    double bonus;

    public:
    employee (string n,double b){

        name = n;
        bsalary = b;
        bonus = 1000;
    }

    employee (string n,double b,double bo){

        name = n;
        bsalary = b;
        bonus = bo;
    }

    inline double totalsalary(){

        return bsalary + bonus;
    }

    void display(){

        cout<<"Name: "<<name<<endl;
         cout<<"Basic salary: "<<bsalary<<endl;
          cout<<"bonus: "<<bonus<<endl;
           cout<<"Total salary: "<<totalsalary()<<endl;
           cout<<"--------------------------"<<endl;
    }
};
void displayEmployees(employee* emp[], int n, int index) {
    if (index == n)  
        return;

    emp[index]->display();     
    displayEmployees(emp, n, index + 1);  
}
int main(){
int n;
cout<<"\n Enter The number of Employees: ";
cin >>n;

employee * emp[n];

for(int i=0;i<n;i++){
    string name;
    double basic,bonus;
    int choice;

    cout<<"\n Employee: "<<i+1;
    cout<<"\n Enter Name: ";
    cin>>name;
    cout<<"\n Enter The Basic salary: ";
    cin>>basic;
    cout<<"\nDefault Bonus(1) or custom Bonus(2) ? : ";
    cin>>choice;

    if(choice == 1)
    {
        emp[i]= new employee(name ,basic);
    }
    else{

        cout<<"Enter Bonus ammmount: "<<endl;
        cin>>bonus;
        emp[i]= new employee(name,basic, bonus);

    }
}
    cout<<"\n-----Employee Details-----\n";
    displayEmployees(emp,n,0);

    for(int i=0;i<n;i++){
        delete emp[i];
    }

    

    return 0;
}