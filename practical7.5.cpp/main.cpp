#include <iostream>
#include <vector>
#include "grading.h"
using namespace std;

int main(){

    int n,ch;
    float m;

    cout<<"enter no of students: ";
    cin>>n;

    vector<grading*> v;

    for(int i=0;i<n;i++){
        cout<<"\n1. undergraduate  2. postgraduate : ";
        cin>>ch;

        cout<<"enter marks: ";
        cin>>m;

        if(ch==1)
            v.push_back(new ug(m));
        else
            v.push_back(new pg(m));
    }

    cout<<"\ngrades:\n";
    for(int i=0;i<v.size();i++){
        cout<<v[i]->gr()<<endl;
    }

    for(int i=0;i<v.size();i++){
        delete v[i];
    }

    return 0;
}