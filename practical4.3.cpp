#include<iostream>
using namespace std;

int main(){
    int n,m;

    cout<<"\nEnter the size of the Array 1: ";
    cin>>n;
    cout<<"\nEnter the size of the array 2: ";
    cin>>m;
     
    int* arr1 = new int[n];
    int* arr2 = new int[m];

    cout<<"Enter the elements for first sorted array : "<<endl;
    for(int i=0; i<n;i++){
        cout<<"\nEnter element "<<i+1<<" : ";
        cin>>arr1[i];
    }

    cout<<"Enter the elements for second sorted array: "<<endl;
    for(int i=0; i<n ; i++){
         cout<<"\nEnter element "<<i+1<<" : ";
        cin>>arr2[i];

    }

    int *merged = new int[n+m];

    int i=0,j=0,k=0;

    while (i<n && j<m)
    {
        if(arr1[i]< arr2[j]){
            merged[k++]=arr1[i++];
        }
        else{
            merged[k++]=arr2[j++];
        }
    }

    while(i < n){
        merged[k++] = arr1[i++];
    }

    while(j < m){
        merged[k++] = arr2[j++];
    }

    cout<<"---merged sorted array---"<<endl;

    for(int i=0 ; i< n+m ; i++){

        cout<<merged[i]<<" ";
    }

    delete[]  arr1;
    delete[]  arr2;
    delete[]  merged;
    
    return 0;
}