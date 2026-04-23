#include<iostream>
using namespace std;

   int bookid;
    string title;
    string author;
    int copies=0;


void add_book()
{
cout<<endl<<"\nEnter Book ID:- ";
    cin>>bookid;
    cin.ignore();

    cout<<endl<<"Enter Book name:- ";
    getline(cin,title);
 
    cout<<endl<<"\nEnter author name:- ";
    getline(cin,author);

    cout<<"\n Enter No. of copies:- ";
    cin>>copies; 
}

void issue_book()
{
   if(copies>0)
   {
    copies--;
    cout<<endl<<"Book issued Succesfully.";
   }
   else{
    cout<<endl<<"No Books Available!";
   }
}

void return_book()
{
   copies++;
   cout<<"Book Returned succesfully\n";
}

void display_books()
{
    cout<<"ID:" <<bookid<<endl;
     cout<<"Title:" <<title<<endl;
      cout<<"Author:" <<author<<endl;
       cout<<"Copies:" <<copies<<endl;
   
}

int main()
{ 
    int choice;
m:    
 cout<<"\nEnter 1 For Add new Book";
 cout<<"\nEnter 2 For issue Book";
 cout<<"\nEnter 3 For return Book";
 cout<<"\nEnter 4 For display all Books";
  cout<<"\nEnter 5 For Exit";
  cout<<"\n Enter your choice:- ";
  cin>>choice;

  switch (choice)
  {
  case 1:
   {
    add_book();
    
    goto m;
   }
   
   case 2:
   {
    issue_book();
    
     goto m;
   }

   case 3:
   {
    return_book();
    
     goto m;
   }

   case 4:
   {
    display_books();
    
     goto m;
   }
   
   case 5:
  {
    break;
  }
  default:
  {
   cout<<"\n Invalid Choice Entered! Enter Valid choice. ";
  }
  }

   return 0;
}



