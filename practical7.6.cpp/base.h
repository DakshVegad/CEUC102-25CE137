#ifndef BASE_H
#define BASE_H

using namespace std;

class base{
public:
    base();
    ~base();   
};

class derived: public base{
    int *p;
public:
    derived();
    ~derived();
};

#endif