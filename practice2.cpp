#include<iostream>

struct student{ private:
  int rollno=137;
  public:
void display(){
    std:: cout<< rollno;
}


}s1;
using namespace std;
int main()
{
 student s1;
s1.display();


return 0;
}