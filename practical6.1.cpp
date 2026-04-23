#include<iostream>
#include<vector>
#include<iomanip>
using namespace std;

class shape{

    protected:
    double radius;

    public: 
    void setRad( double r){
        if(r>0){
            radius = r;
        }
        else radius = 0;
    }

    double getRad() const {
        return radius;
    }

};

class circle : public shape {
    public:
    double calculateArea() const {
        const double PI = 3.14159;
        return PI * radius * radius;
    }

    void display(int index) const {
         cout << "Circle " << index
             << " | Radius: " << radius
             << " | Area: " << fixed << setprecision(2)
             << calculateArea() << endl;
    }

};

int main(){
    int n;
    cout<<"\nEnter Number of circles: ";
    cin>>n;

    //Dynamic Approch (vector)
    vector <circle> dynamicCircles(n);

    cout<<"\nEnter radius For dynamic circles\n";
    for(int i= 0;i<n;i++){
        double r;
        cout<<"Circle "<<i+1<<": ";
        cin>>r;
        dynamicCircles[i].setRad(r);

    }

    cout<<"\n---Dynamic circles Output---\n";
    for(int i=0 ; i<n ; i++){
          dynamicCircles[i].display(i + 1);
    }
    //static approch(Array)

    const int MAX = 100;
    circle staticCircles[MAX];

    cout<<"\nEnter Number of circles for static array";
    int m;
    cin >> m;

    if(m>MAX){
        cout<<"\nLimit exceeded! Max allowed is "<<MAX<<endl;
        return 0;
    }
    cout<<"\nEnter Radius For static circles\n";
    for(int i=0;i<m;i++){
        double r;
        cout<<"\nCircle: "<<i+1<<": ";
        cin>>r;
        staticCircles[i].setRad(r);
    }

    cout<<"----Static Circles Output----\n";
    for(int i=0;i<m;i++){
        staticCircles[i].display(i+1);

    }

    return 0;
}