#include<iostream>
#include<iomanip>
using namespace std;

ostream& currency(ostream& output){
    output<<"₹ ";
    return output;
}

int main(){

    char name[3][20] = {"A","B","C"};
    float marks[3] = {89.72,95.10,91.75};
    float fees[3] = {50000,50000,50000};

    cout<<setfill(' ');

    cout<<endl;
    cout<<setw(15) <<"name"
        <<setw(15) <<"marks"
        <<setw(20) <<"fees"<<endl;

        cout << setfill('-') << setw(50) << "-" << endl;
    cout << setfill(' ');

    for(int i=0 ; i<3 ; i++){
        cout<<setw(15)<<name[i]
            <<setw(15)<<fixed<<setprecision(2)<<marks[i]
            <<setw(10)<<currency<<fixed<<setprecision(2)<<fees[i]
            <<endl;
    }
    return 0;

}