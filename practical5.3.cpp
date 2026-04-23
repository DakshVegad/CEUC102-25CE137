#include<iostream>
#include<fstream>
#include<cstring>

using namespace std;

void toLower(char str[]){
    for(int i=0;str[i];i++){
        if(str[i]>= 'A' && str[i]<='Z'){
            str[i]= str[i] + 32;
        }
    }
}

void addItem(){
    ofstream file("inventry.txt", ios::app);

    char name[50];
    int quantity;
    float price;

    cout<<"Enter Item Name: ";
    cin>>name;

    cout<<"\nEnter Quantity: ";
    cin>>quantity;

    cout<<"\nEnter Price: ";
    cin>>price;

    file<<name<<" "<<quantity<<" "<<price<<endl;

    file.close();
    cout<<"\n Item added Successfully.";


}

void viewItems(){
    ifstream file("inventry.txt");

    char name[50];
    int quantity;
    float price;

    cout<<"\n-----Inventry Items-----\n";

    while(file >> name >> quantity >> price){
        cout<<"  Name: "<<name;
        cout<<" , Quantity: "<<quantity;
        cout<<" , price: "<<price<<endl;
    }

    file.close();
}

void searchItem(){

    ifstream file("inventry.txt");
    char searchName[50], fileName[50];
    int quantity;
    float price;
    bool found = false;

    cout<<"\nEnter item name to search: ";
    cin>>searchName;

    toLower(searchName);

    while(file >> fileName >> quantity >> price){
        char tempName[50];
        strcpy(tempName,fileName);
        toLower(tempName);

        if(strcmp(tempName,searchName)==0){
            cout<<"\n--Item found--\n";
             cout<<"  Name: "<<fileName;
        cout<<" , Quantity: "<<quantity;
        cout<<" , price: "<<price<<endl;
        found= true;
        break;

        }
    }

    if(!found){
        cout<<"\nItem Not found\n";
    }
    file.close();
}

int main(){

    int choice;
    do{
        cout<<"\n=======Inventry Managemet=======\n";
        cout<<"\n1. add item";
        cout<<"\n2. View all item";
        cout<<"\n3. search item";
        cout<<"\n4. Exit";
        cout<<"\nEnter your choice: ";
        cin>>choice;

        switch(choice){

            case 1: addItem(); break;
            case 2: viewItems(); break;
            case 3: searchItem(); break;
            case 4: cout<<"Exiting...\n"; break;
            default: cout<<"\nInvalid choice! ";
        }
    }

    while(choice != 4);
    return 0;
}
