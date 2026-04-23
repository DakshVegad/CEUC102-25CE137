#include<iostream>
#include<fstream>
#include<string>
#include<cctype>

using namespace std;

int main(){
 
ifstream file("input.txt.rtf");

if(!file){
    cout<<"Error! file could not be opened\n";
    return 1;
}

string line;
int charcount = 0;
int wordcount = 0;
int linecount = 0;

while (getline(file, line)){

    linecount++;
    bool inword = false;

    for(int i=0 ; i<line.length(); i++){

        charcount++;

        if(! isspace(line[i])){
            if(!inword){
                wordcount++;
                inword= true;
            }
        }
        else{
            inword=false;
        }
    }
    charcount++;
}

file.close();

//output result

cout<<"Lines : "<<linecount<<endl;
cout<<"Words : "<<wordcount<<endl;
cout<<"Characters(including spaces) : "<<charcount<<endl;

    return 0;
}