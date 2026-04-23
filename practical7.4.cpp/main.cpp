#include <iostream>
#include <vector>
#include "shape.h"
using namespace std;

int main() {

    Shape* s;

    Rectangle r1(5, 4);
    Circle c1(3);

    s = &r1;
    cout << "Rectangle Area: " << s->Area() << endl;

    s = &c1;
    cout << "Circle Area: " << s->Area() << endl;


    vector<Shape*> shapes;

    shapes.push_back(new Rectangle(2, 3));
    shapes.push_back(new Circle(2.5));
    shapes.push_back(new Rectangle(6, 2));

    cout << "\nDynamic Collection Areas:" << endl;
    for (int i = 0; i < shapes.size(); i++) {
        cout << "Area: " << shapes[i]->Area() << endl;
    }

    for (int i = 0; i < shapes.size(); i++) {
        delete shapes[i];
    }

    Shape* arr[3];

    arr[0] = new Rectangle(3, 3);
    arr[1] = new Circle(4);
    arr[2] = new Rectangle(2, 5);

    cout << "\nStatic Collection Areas:" << endl;
    for (int i = 0; i < 3; i++) {
        cout << "Area: " << arr[i]->Area() << endl;
    }

    for (int i = 0; i < 3; i++) {
        delete arr[i];
    }

    return 0;
}