#include<iostream>
using namespace std;

class point{

    private:
    int x,y;

    public:
   point(int xVal=0 , int yVal=0){

    x = xVal;
    y = yVal;
   }

   point &move(int dx, int dy){
    x += dx;
    y += dy;

    return *this;
   }

   void display(){
    cout<<"("<<x<<","<<y<<")"<<endl;
   }

};

void updatepoint(point *p){
    p->move(5,5);
}

int main(){
 
    point p(2,1);
    cout<<"Original point: ";
    p.display();

    p.move(2,3).move(-1,4);

    cout<<"After changing: ";
    p.display();

    updatepoint(&p);

    cout<<"After pointer update: ";
    p.display();
    return 0;
}