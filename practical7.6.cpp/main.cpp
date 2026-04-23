#include <iostream>
#include "base.h"
using namespace std;

int main(){

    base *b;

    b=new derived();

    delete b;

    return 0;
}