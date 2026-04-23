#include<iostream>
#include<string>
#include<cctype>

using namespace std;

int main(){

    string ph;     //ph: paragraph
    cout<<"Enter the paragraph: "<<endl;
    getline(cin,ph);

    string words[100];
    int count[100] = {0};
    int wordcount = 0;

    for(int i=0 ; i<ph.length(); i++){
        ph[i]= tolower(ph[i]);
    }

    string temp= "";
    for(int i=0; i<ph.length(); i++){
        if(ph[i] !=' ' && ph[i] != ',' && ph[i] !='.' ){
            temp +=ph[i];
        }
        else{
            if(temp != ""){
                words[wordcount++] = temp;
                temp = "";
            }
        }
    }

    if(temp != ""){
        words[wordcount++]= temp;
    }

    for(int i=0; i<wordcount; i++){
        if(count[i]== -1) continue;

        int freq = 1;
        for(int j=i+1 ; j<wordcount; j++){
            if(words[i] == words[j]){
                freq++;
                count[j]=-1;
            }
        }
        count[i]= freq;
    }

    cout<<"\n word frequencies\n ";
    for(int i=0; i<wordcount; i++){

        if(count[i] != -1){
            cout<<words[i]<<" : "<<count[i]<<endl;
        }
    }
    return 0;

}