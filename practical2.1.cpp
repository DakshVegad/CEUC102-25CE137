#include<iostream>

using namespace std;

class rectangle{
private:
    float area;
    float perimeter;
    public:

    float length;
    float breadth;

    float cal_area(){
        area=length*breadth;
        return area;
    }
    float cal_perimeter(){
        perimeter=2*(length+breadth);
        return perimeter;
    }

    void display(){
        cout<<"\nlength: "<<length;
         cout<<"\nbreadth: "<<breadth;
          cout<<"\narea: "<<area;
           cout<<"\nperimeter: "<<perimeter;
    }
};
int main(){
  rectangle r[10];
int n;
   cout<<"\n Enter No. of rectangles: ";
   cin>>n;

   for(int i=1;i<=n;i++){
    
    cout<<"\n Enter length of rectangle "<<i<<": ";
    cin>>r[i].length;
    cout<<"\n Enter breadth of rectangle "<<i<<": ";
    cin>>r[i].breadth;
   }

   for(int i=1;i<=n;i++){
    cout<<"\nThe area of rectangle "<<i<<": "<<r[i].cal_area();
    cout<<"\nThe perimeter of rectangle "<<i<<": "<<r[i].cal_perimeter();
   }


    return 0;
}