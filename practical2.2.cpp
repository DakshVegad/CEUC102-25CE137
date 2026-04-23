#include<iostream>
#include<string>
using namespace std;

class student{
public:
int rollno;
string name;
int marks1;
int marks2;
int marks3;



student()
{
     rollno=1;
     name="xyz";
     marks1=0;
     marks2=0;
     marks3=0;
}
student(int r,string n,int m1,int m2,int m3)
{
    rollno = r;
    name=n;
    marks1=m1;
    marks2=m2;
    marks3=m3;
}

float average()
{
    return(marks1+marks2+marks3)/3;
}
};
int main(){

 student s1;
 //student s2(137,"Daksh Vegad",40,45,50);
//cout<<"\nName: "<<s2.name;
//cout<<"\nRoll No: "<<s2.rollno;
//cout<<"\nMarks 1: "<<s2.marks1;
//cout<<"\nMarks 2: "<<s2.marks2;
//cout<<"\nMarks 3: "<<s2.marks3;
 //cout<<"\nAVG of your marks: "<<s2.average();

 int x;
 int i;
 cout<<"\nEnter the Number of students: ";
 cin>>x;
 student s[3];

 for(i=1;i<=x;i++){
     cin.ignore();
    cout<<"\nEnter Student Name "<<i<<": ";
    getline(cin,s[i].name);
    cout<<"\nEnter The roll no of "<<i<<": ";
    cin>>s[i].rollno;
    cout<<"\nEnter Marks of 1: ";
    cin>>s[i].marks1;
    cout<<"\nEnter Marks of 2: ";
    cin>>s[i].marks2;
    cout<<"\nEnter Marks of 3: ";
    cin>>s[i].marks3;
 }
 for(i=1;i<=x;i++){
    cout<<"\nName: "<<s[i].name;
cout<<"\nRoll No: "<<s[i].rollno;
cout<<"\nMarks 1: "<<s[i].marks1;
cout<<"\nMarks 2: "<<s[i].marks2;
cout<<"\nMarks 3: "<<s[i].marks3;
cout<<"\nAVG of your marks: "<<s[i].average();

 }

    return 0;
}