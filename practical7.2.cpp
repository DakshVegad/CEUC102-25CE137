#include<iostream>
#include<vector>
using namespace std;

class Complex {
    private:
    float real;
    float imag;

    public:
    //constructor
    Complex(float r = 0,float i=0){
        real = r;
        imag = i;
    }
    Complex operator + (const Complex &c){
        return Complex( real + c.real,imag + c.imag);
    }
    Complex operator - (const Complex &c){
        return Complex(real - c.real , imag-c.imag);
    }

    void display(){
        cout <<real;
        if(imag >=0)
            cout<<" + "<<imag<<"i";
        
        else 
            cout<<" - "<<-imag<<"i";
          cout<<endl;
    }
};

int main(){
    Complex c1(4,5);
    Complex c2(2,9);

    Complex sum,diff;

    sum = c1+c2;
    diff = c1-c2;

    cout<<"\nFirst complex Number: ";
    c1.display();
    cout<<"\nSecond complex Number: ";
    c2.display();
    cout<<"\nAddition Results: ";
    sum.display();
    cout<<"\nSubtraction results: ";
    diff.display();

    vector <Complex> list;
    list.push_back(c1);
    list.push_back(c2);
    list.push_back(sum);

    cout<<"\nStored Complex Numbers\n";
    for(int i=0;i<list.size();i++){
        list[i].display();
    }

    return 0;
}