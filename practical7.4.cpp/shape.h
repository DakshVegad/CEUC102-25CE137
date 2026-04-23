#ifndef SHAPE_H
#define SHAPE_H

#include <iostream>
using namespace std;

class Shape {
public:

    virtual float Area() = 0; 

    virtual ~Shape() {}
};


class Rectangle : public Shape {
private:
    float length, width;

public:
    Rectangle(float l = 0, float w = 0);
    float Area();
};

class Circle : public Shape {
private:
    float radius;

public:
    Circle(float r = 0);
    float Area();
};

#endif