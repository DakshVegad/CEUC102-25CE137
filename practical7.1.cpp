#include<iostream>
#include<vector>
using namespace std;

class calculator{

    private:
    vector <double> results;

    public:
    int add(int a,int b){
        int res = a + b;
        results.push_back(res);
        return res;
    }
    float add(float a,float b){
        float res= a + b;
        results.push_back(res);
        return res;
    }
    double add(int a,double b){
        double res =a + b;
        results.push_back(res);
        return res;
    }
    double add(double a,int b){
        double res= a + b;
        results.push_back(res);
        return res;
    }

    void display(){

        cout<<"\n=====Results=====\n";
        for(int i=0;i<results.size();i++){
            cout<<"result "<<i+1<<": "<<results[i]<<endl;
        }
    }
};

int main(){

    calculator calc ;

    cout<<"Int + Int : "<<calc.add(5,10)<<endl;
    cout<<"float + float : "<<calc.add(5.5f,10.5f)<<endl;
    cout<<"Int + double : "<<calc.add(5,11.5)<<endl;
    cout<<"double + Int : "<<calc.add(15.5,10)<<endl;
 
    calc.display();
    return 0;
}