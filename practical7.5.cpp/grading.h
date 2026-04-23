#ifndef GRADING_H
#define GRADING_H

using namespace std;

class grading{
protected:
    float m;
public:
    grading(float x=0);
    virtual char gr()=0;
    virtual ~grading(){}
};

class ug: public grading{
public:
    ug(float x=0);
    char gr();
};

class pg: public grading{
public:
    pg(float x=0);
    char gr();
};

#endif