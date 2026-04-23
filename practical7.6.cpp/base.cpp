#include <iostream>
#include "base.h"
using namespace std;

base::base(){
    cout<<"base cons\n";
}

base::~base(){
    cout<<"base des\n";
}

derived::derived(){
    cout<<"derived cons\n";
    p=new int[5];
}

derived::~derived(){
    cout<<"derived des\n";
    delete[] p;
}